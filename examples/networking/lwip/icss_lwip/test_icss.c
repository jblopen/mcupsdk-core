/*
 * Copyright (c) 2001,2002 Florian Schulze.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the authors nor the names of the contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * test.c - This file is part of lwIP test
 *
 */


/* lwIP core includes */
#include "ti_drivers_open_close.h"
#include "ti_board_open_close.h"
#include "ti_board_config.h"

#include "lwip/opt.h"

#include <board/ethphy.h>
#include <board/eeprom.h>
#include <board/ethphy/ethphy_dp83826e.h>
#include <board/ethphy/ethphy_dp83869.h>
#ifdef SOC_AM263PX
#include <board/ioexp/ioexp_tca6424.h>
#endif

#include "test_icss_lwip.h"
#include "lwip2icss_emac.h"
#include "icss_emac.h"

#include <icss_emac_mmap.h>
#include <tiemac_pruicss_intc_mapping.h>

#ifdef AM263X_CC
#include <mii/am263x-cc/pruicss_pinmux.h>
#elif AM263X_LP
#include <mii/am263x-lp/pruicss_pinmux.h>
#elif AM263PX_CC
#include <mii/am263px-cc/pruicss_pinmux.h>
#elif AM263PX_LP
#include <mii/am263px-lp/pruicss_pinmux.h>
#endif


#include <drivers/hw_include/cslr_soc.h>
#ifdef SOC_AM263X
#include <drivers/hw_include/am263x/cslr_mss_ctrl.h>
#elif SOC_AM263PX
#include <drivers/hw_include/am263px/cslr_mss_ctrl.h>
#endif
#include <drivers/pinmux.h>
#include<drivers/pruicss/m_v0/pruicss.h>
#include <drivers/hw_include/hw_types.h>

#include <firmware/mii/PRU0_bin.h>
#include <firmware/mii/PRU1_bin.h>


/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

#define MSS_CTRL_ICSSM_PRU_GPIO_OUT_CTRL_VALUE  (0x0001077F)

#define LWIPINIT_TASK_PRIORITY            (8)
#define LWIPINIT_TASK_STACK_SIZE          (0x4000)

/*I2C Instance and Index for IO Expander programming*/
#define MDIO_MDC_MUX_SEL1                       (0x12)
#define IO_EXP_I2C_INSTANCE                     (0x01)

/*ICSS_EMAC Tx API Call Task*/
#define ICSS_EMAC_Tx_TASK_PRIORITY            (10)
#define ICSS_EMAC_Tx_TASK_STACK_SIZE          (0x4000)

uint32_t gtaskLwipInitStack[LWIPINIT_TASK_STACK_SIZE/sizeof(uint32_t)] __attribute__((aligned(32)));

TaskP_Object taskLwipInitObject;

uint32_t gtaskIcssEmacTxStack[ICSS_EMAC_Tx_TASK_STACK_SIZE/sizeof(uint32_t)] __attribute__((aligned(32)));

TaskP_Object taskIcssEmacTxObject;

#if defined AM263X_LP || defined AM263PX_LP
void icssmMuxSelection(void);
#endif

#ifdef AM263PX_CC
void setIOExpMuxSelection(void *args);
static TCA6424_Config  gTCA6424_Config;
#endif

uint8_t ICSS_EMAC_testPktPromiscuous[] = {
    0x02, 0xb0, 0xc3, 0xdd, 0xee, 0xff, /* broadcast mac */
    0x01, 0xbb, 0xcc, 0xdd, 0xee, 0xff,
    0x08, 0x06, 0x00, 0x01,
    0x08, 0x00, 0x06, 0x04, 0x00,0x01,
    0x01, 0xbb, 0xcc, 0xdd, 0xee, 0xff,
    0xc0, 0xa8, 0x01, 0x16,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xa8,0x01, 0x02,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
    0xdc,0xdd,0xde,0xdf,
    0xe0,0xe1,0xe2,0xe3,
    0xe4,0xe5,0xe6,0xe7,
    0xe8,0xe9,0xea,0xeb,
    0xec,0xed,0xee,0xef,
    0xf0,0xf1,0xf2,0xf3,
    0xf4,0xf5,0xf6,0xf7,
    0xf8,0xf9,0xfa,0xfb,
    0xfc,0xfd,0xfe,0xff,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
    0xdc,0xdd,0xde,0xdf,
    0xe0,0xe1,0xe2,0xe3,
    0xe4,0xe5,0xe6,0xe7,
    0xe8,0xe9,0xea,0xeb,
    0xec,0xed,0xee,0xef,
    0xf0,0xf1,0xf2,0xf3,
    0xf4,0xf5,0xf6,0xf7,
    0xf8,0xf9,0xfa,0xfb,
    0xfc,0xfd,0xfe,0xff,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
    0xdc,0xdd,0xde,0xdf,
    0xe0,0xe1,0xe2,0xe3,
    0xe4,0xe5,0xe6,0xe7,
    0xe8,0xe9,0xea,0xeb,
    0xec,0xed,0xee,0xef,
    0xf0,0xf1,0xf2,0xf3,
    0xf4,0xf5,0xf6,0xf7,
    0xf8,0xf9,0xfa,0xfb,
    0xfc,0xfd,0xfe,0xff,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
    0xdc,0xdd,0xde,0xdf,
    0xe0,0xe1,0xe2,0xe3,
    0xe4,0xe5,0xe6,0xe7,
    0xe8,0xe9,0xea,0xeb,
    0xec,0xed,0xee,0xef,
    0xf0,0xf1,0xf2,0xf3,
    0xf4,0xf5,0xf6,0xf7,
    0xf8,0xf9,0xfa,0xfb,
    0xfc,0xfd,0xfe,0xff,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
    0xdc,0xdd,0xde,0xdf,
    0xe0,0xe1,0xe2,0xe3,
    0xe4,0xe5,0xe6,0xe7,
    0xe8,0xe9,0xea,0xeb,
    0xec,0xed,0xee,0xef,
    0xf0,0xf1,0xf2,0xf3,
    0xf4,0xf5,0xf6,0xf7,
    0xf8,0xf9,0xfa,0xfb,
    0xfc,0xfd,0xfe,0xff,
    0x0,0x1,0x2,0x3,
    0x4,0x5,0x6,0x7,
    0x8,0x9,0xa,0xb,
    0xc,0xd,0xe,0xf,
    0x10,0x11,0x12,0x13,
    0x14,0x15,0x16,0x17,
    0x18,0x19,0x1a,0x1b,
    0x1c,0x1d,0x1e,0x1f,
    0x20,0x21,0x22,0x23,
    0x24,0x25,0x26,0x27,
    0x28,0x29,0x2a,0x2b,
    0x2c,0x2d,0x2e,0x2f,
    0x30,0x31,0x32,0x33,
    0x34,0x35,0x36,0x37,
    0x38,0x39,0x3a,0x3b,
    0x3c,0x3d,0x3e,0x3f,
    0x40,0x41,0x42,0x43,
    0x44,0x45,0x46,0x47,
    0x48,0x49,0x4a,0x4b,
    0x4c,0x4d,0x4e,0x4f,
    0x50,0x51,0x52,0x53,
    0x54,0x55,0x56,0x57,
    0x58,0x59,0x5a,0x5b,
    0x5c,0x5d,0x5e,0x5f,
    0x60,0x61,0x62,0x63,
    0x64,0x65,0x66,0x67,
    0x68,0x69,0x6a,0x6b,
    0x6c,0x6d,0x6e,0x6f,
    0x70,0x71,0x72,0x73,
    0x74,0x75,0x76,0x77,
    0x78,0x79,0x7a,0x7b,
    0x7c,0x7d,0x7e,0x7f,
    0x80,0x81,0x82,0x83,
    0x84,0x85,0x86,0x87,
    0x88,0x89,0x8a,0x8b,
    0x8c,0x8d,0x8e,0x8f,
    0x90,0x91,0x92,0x93,
    0x94,0x95,0x96,0x97,
    0x98,0x99,0x9a,0x9b,
    0x9c,0x9d,0x9e,0x9f,
    0xa0,0xa1,0xa2,0xa3,
    0xa4,0xa5,0xa6,0xa7,
    0xa8,0xa9,0xaa,0xab,
    0xac,0xad,0xae,0xaf,
    0xb0,0xb1,0xb2,0xb3,
    0xb4,0xb5,0xb6,0xb7,
    0xb8,0xb9,0xba,0xbb,
    0xbc,0xbd,0xbe,0xbf,
    0xc0,0xc1,0xc2,0xc3,
    0xc4,0xc5,0xc6,0xc7,
    0xc8,0xc9,0xca,0xcb,
    0xcc,0xcd,0xce,0xcf,
    0xd0,0xd1,0xd2,0xd3,
    0xd4,0xd5,0xd6,0xd7,
    0xd8,0xd9,0xda,0xdb,
};

#define ICSS_EMAC_MAXMTU  (1518U)
#define ICSS_EMAC_TEST_PKT_TX_COUNT 100


/** \brief PRU-ICSS Handle */
PRUICSS_Handle pruicssHandle;

/** \brief ICSS EMAC Handle */
ICSS_EMAC_Handle icssemacHandle2;

extern void Lwip2Emac_getHandle(Lwip2Emac_Handle *AppLwipHandle);

/** \brief LwIP Interface Layer Handle */
Lwip2Emac_Handle lwipifHandle;

#if defined SOC_AM263X || defined SOC_AM263PX
#define I2C_EEPROM_MAC0_DATA_OFFSET      (0x43)
#else
#define I2C_EEPROM_MAC0_DATA_OFFSET      (0x3D)
#endif

#define I2C_EEPROM_MAC1_DATA_OFFSET      (0x49)
uint8_t ICSS_EMAC_testLclMac0[6];



void print_cpu_load()
{
    static uint32_t start_time = 0;
    uint32_t print_interval_in_secs = 5;
    uint32_t cur_time = ClockP_getTimeUsec()/1000;

    if(start_time==0)
    {
        start_time = cur_time;
    }
    else
    if( (cur_time-start_time) >= (print_interval_in_secs*1000) )
    {
        uint32_t cpu_load = TaskP_loadGetTotalCpuLoad();

        DebugP_log(" %6d.%3ds : CPU load = %3d.%02d %%\r\n",
            cur_time/1000, cur_time%1000,
            cpu_load/100, cpu_load%100 );

        start_time = cur_time;

        TaskP_loadResetAll();
    }
}

#if defined AM263X_CC || AM263PX_CC
void ICSS_EMAC_testBoardInit(void)
{
    ETHPHY_DP83869_LedSourceConfig ledConfig0;
    ETHPHY_DP83869_LedBlinkRateConfig ledBlinkConfig0;
    ETHPHY_DP83826E_LedSourceConfig ledConfig1;
    ETHPHY_DP83826E_LedBlinkRateConfig ledBlinkConfig1;

    Pinmux_config(gPruicssPinMuxCfg, PINMUX_DOMAIN_ID_MAIN);

    // Set bits for input pins in ICSSM_PRU0_GPIO_OUT_CTRL and ICSSM_PRU1_GPIO_OUT_CTRL registers
    HW_WR_REG32(CSL_MSS_CTRL_U_BASE + CSL_MSS_CTRL_ICSSM_PRU0_GPIO_OUT_CTRL, MSS_CTRL_ICSSM_PRU_GPIO_OUT_CTRL_VALUE);
    HW_WR_REG32(CSL_MSS_CTRL_U_BASE + CSL_MSS_CTRL_ICSSM_PRU1_GPIO_OUT_CTRL, MSS_CTRL_ICSSM_PRU_GPIO_OUT_CTRL_VALUE);

    DebugP_log("MII mode\r\n");

    /* PHY pin LED_0 as link */
    ledConfig0.ledNum = ETHPHY_DP83869_LED0;
    ledConfig0.mode = ETHPHY_DP83869_LED_MODE_100BTX_LINK_UP;
    ledConfig1.ledNum = ETHPHY_DP83826E_LED0;
    ledConfig1.mode = ETHPHY_DP83826E_LED_MODE_MII_LINK_100BT_FD;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig0, sizeof(ledConfig0));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig1, sizeof(ledConfig1));

    /* PHY pin LED_1 indication is on if 1G link established for PHY0, and if 10M speed id configured for PHY1 */
    ledConfig0.ledNum = ETHPHY_DP83869_LED1;
    ledConfig0.mode = ETHPHY_DP83869_LED_MODE_1000BT_LINK_UP;
    ledConfig1.ledNum = ETHPHY_DP83826E_LED1;
    ledConfig1.mode = ETHPHY_DP83826E_LED_MODE_SPEED_10BT;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig0, sizeof(ledConfig0));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig1, sizeof(ledConfig1));

    /* PHY pin LED_2 as Rx/Tx Activity */
    ledConfig0.ledNum = ETHPHY_DP83869_LED2;
    ledConfig0.mode = ETHPHY_DP83869_LED_MODE_LINK_OK_AND_BLINK_ON_RX_TX;
    ledConfig1.ledNum = ETHPHY_DP83826E_LED2;
    ledConfig1.mode = ETHPHY_DP83826E_LED_MODE_LINK_OK_AND_BLINK_ON_RX_TX;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig0, sizeof(ledConfig0));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig1, sizeof(ledConfig1));

    ledBlinkConfig0.rate = ETHPHY_DP83869_LED_BLINK_RATE_200_MS;
    ledBlinkConfig1.rate = ETHPHY_DP83826E_LED_BLINK_RATE_200_MS;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_BLINK_RATE, (void *)&ledBlinkConfig0, sizeof(ledBlinkConfig0));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_BLINK_RATE, (void *)&ledBlinkConfig1, sizeof(ledBlinkConfig1));

    /* Enable MII mode for DP83869 PHY */
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_ENABLE_MII, NULL, 0);

    /* Disable 1G advertisement and sof-reset to restart auto-negotiation in case 1G link was establised */
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_DISABLE_1000M_ADVERTISEMENT, NULL, 0);
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_SOFT_RESTART, NULL, 0);

    /*Wait for PHY to come out of reset*/
    ClockP_sleep(1);
}
#else
void ICSS_EMAC_testBoardInit(void)
{
    ETHPHY_DP83869_LedSourceConfig ledConfig;
    ETHPHY_DP83869_LedBlinkRateConfig ledBlinkConfig;

    Pinmux_config(gPruicssPinMuxCfg, PINMUX_DOMAIN_ID_MAIN);

    // Set bits for input pins in ICSSM_PRU0_GPIO_OUT_CTRL and ICSSM_PRU1_GPIO_OUT_CTRL registers
    HW_WR_REG32(CSL_MSS_CTRL_U_BASE + CSL_MSS_CTRL_ICSSM_PRU0_GPIO_OUT_CTRL, MSS_CTRL_ICSSM_PRU_GPIO_OUT_CTRL_VALUE);
    HW_WR_REG32(CSL_MSS_CTRL_U_BASE + CSL_MSS_CTRL_ICSSM_PRU1_GPIO_OUT_CTRL, MSS_CTRL_ICSSM_PRU_GPIO_OUT_CTRL_VALUE);

    DebugP_log("MII mode\r\n");

    /* PHY pin LED_0 as link */
    ledConfig.ledNum = ETHPHY_DP83869_LED0;
    ledConfig.mode = ETHPHY_DP83869_LED_MODE_100BTX_LINK_UP;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));

    /* PHY pin LED_1 indication is on if 1G link established for PHY0, and if 10M speed id configured for PHY1 */
    ledConfig.ledNum = ETHPHY_DP83869_LED1;
    ledConfig.mode = ETHPHY_DP83869_LED_MODE_1000BT_LINK_UP;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));

    /* PHY pin LED_2 as Rx/Tx Activity */
    ledConfig.ledNum = ETHPHY_DP83869_LED2;
    ledConfig.mode = ETHPHY_DP83869_LED_MODE_LINK_OK_AND_BLINK_ON_RX_TX;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_SOURCE, (void *)&ledConfig, sizeof(ledConfig));

    ledBlinkConfig.rate = ETHPHY_DP83869_LED_BLINK_RATE_200_MS;
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_CONFIGURE_LED_BLINK_RATE, (void *)&ledBlinkConfig, sizeof(ledBlinkConfig));
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_CONFIGURE_LED_BLINK_RATE, (void *)&ledBlinkConfig, sizeof(ledBlinkConfig));

    /* Enable MII mode  */
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_ENABLE_MII, NULL, 0);
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_ENABLE_MII, NULL, 0);

    /* Disable 1G advertisement and sof-reset to restart auto-negotiation in case 1G link was establised */
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_DISABLE_1000M_ADVERTISEMENT, NULL, 0);
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_DISABLE_1000M_ADVERTISEMENT, NULL, 0);

    /* Soft-reset PHY */
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY0], ETHPHY_CMD_SOFT_RESTART, NULL, 0);
    ETHPHY_command(gEthPhyHandle[CONFIG_ETHPHY1], ETHPHY_CMD_SOFT_RESTART, NULL, 0);

    /*Wait for PHY to come out of reset*/
    ClockP_sleep(1);
}
#endif

int32_t ICSS_EMAC_testPruicssInstanceSetup(void)
{
    PRUICSS_IntcInitData    pruss_intc_initdata = PRUSS_INTC_INITDATA;
    ICSS_EMAC_Params        icssEmacParams;

    /*Getting Lwip2EmacHandle for interface layer*/
    Lwip2Emac_getHandle(&lwipifHandle);

    /*PRU2 ETH0 initializations*/
    ICSS_EMAC_Params_init(&icssEmacParams);
    icssEmacParams.pruicssIntcInitData = &pruss_intc_initdata;
    icssEmacParams.fwStaticMMap = &(icss_emacFwStaticCfg[1]);
    icssEmacParams.fwDynamicMMap = &icss_emacFwDynamicCfg;
    icssEmacParams.fwVlanFilterParams = &icss_emacFwVlanFilterCfg;
    icssEmacParams.fwMulticastFilterParams = &icss_emacFwMulticastFilterCfg;
    icssEmacParams.pruicssHandle = pruicssHandle;
    // icssEmacParams.callBackObject.port0LinkCallBack.callBack = (ICSS_EMAC_CallBack)ICSS_EMAC_testLinkIsrCb;
    // icssEmacParams.callBackObject.port0LinkCallBack.userArg = (void*)ICSS_EMAC_TEST_PRU2ETH0;
    icssEmacParams.callBackObject.rxNRTCallBack.callBack = (ICSS_EMAC_CallBack)Lwip2Emac_serviceRx;
    icssEmacParams.callBackObject.rxNRTCallBack.userArg = (void*)(lwipifHandle);
    // icssEmacParams.callBackObject.txCallBack.callBack = (ICSS_EMAC_CallBack)ICSS_EMAC_testCallbackTxComplete;
    icssEmacParams.ethphyHandle[0] = gEthPhyHandle[CONFIG_ETHPHY0];
    memcpy(&(icssEmacParams.macId[0]), &(ICSS_EMAC_testLclMac0[0]), 6);

    icssemacHandle2 = ICSS_EMAC_open(CONFIG_ICSS_EMAC0, &icssEmacParams);
    DebugP_assert(icssemacHandle2 != NULL);


    return 0;
}

int32_t app_getEmacHandle(Lwip2Emac_Handle hLwip2Emac)
{
    int32_t ret_val = SystemP_FAILURE;
    if(hLwip2Emac != NULL)
    {
        hLwip2Emac->emacHandle = icssemacHandle2;
        ret_val = SystemP_SUCCESS;
    }

    return (ret_val);
}

void ICSS_EMAC_testGetPruFwPtr(uint32_t *pru0FwPtr, uint32_t *pru0FwLength, uint32_t *pru1FwPtr, uint32_t *pru1FwLength)
{
    *pru0FwPtr = (uint32_t)&PRU0_b00[0];
    *pru0FwLength = (uint32_t)sizeof(PRU0_b00);
    *pru1FwPtr = (uint32_t)&PRU1_b00[0];
    *pru1FwLength = (uint32_t)sizeof(PRU1_b00);
}

void lwipIcss_socgetMACAddress()
{
    uint32_t status = SystemP_FAILURE;
    status = EEPROM_read(gEepromHandle[CONFIG_EEPROM0], I2C_EEPROM_MAC0_DATA_OFFSET, ICSS_EMAC_testLclMac0, 6U);
    DebugP_assert(SystemP_SUCCESS == status);
}

int icss_lwip_example(void *args)
{
    uint32_t                status = SystemP_FAILURE;
    uint32_t                icssBaseAddr;
    bool                    retVal = false;
    uint32_t                result_flag = 0;
    uint32_t                pru0FwPtr = 0;
    uint32_t                pru0FwLength = 0;
    uint32_t                pru1FwPtr = 0;
    uint32_t                pru1FwLength = 0;

    Drivers_open();
    status = Board_driversOpen();
    DebugP_assert(status==SystemP_SUCCESS);

#if defined AM263X_LP || defined AM263PX_LP
    icssmMuxSelection();
#else
    ICSS_EMAC_testBoardInit();
#endif
    // app_getEmacHandle(lwipifHandle);

#ifdef AM263PX_CC
    setIOExpMuxSelection(NULL);
#endif

    pruicssHandle = PRUICSS_open(CONFIG_PRU_ICSS1);
    DebugP_assert(pruicssHandle != NULL);

    /*Setup the local MAC Addresses of Port from EEPROM*/
    lwipIcss_socgetMACAddress();

    ICSS_EMAC_testPruicssInstanceSetup();

    /* Setup RAT configuration for buffer region*/
    /* Setting up RAT config to map emacBaseAddr->l3OcmcBaseAddr to C30 constant of PRUICSS */
    /* Mapping 0xE0000000 (C30 constant of PRUICSS) to l3OcmcBaseAddr */
    icssBaseAddr = (uint32_t)((PRUICSS_HwAttrs *)(pruicssHandle->hwAttrs)->baseAddr);

    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_0_BASE + 0x24, (0xE0000000));         /*rat0 base0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_0_BASE + 0x28, (0x70000000));         /*rat0 trans_low0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_0_BASE + 0x2C, (0x00000000));         /*rat0 trans_low0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_0_BASE + 0x20, (1u << 31) | (22));    /*rat0 ctrl0 */

    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_1_BASE + 0x24, (0xE0000000));         /*rat0 base0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_1_BASE + 0x28, (0x70000000));         /*rat0 trans_low0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_1_BASE + 0x2C, (0x00000000));         /*rat0 trans_low0 */
    HW_WR_REG32(icssBaseAddr + CSL_ICSS_RAT_REGS_1_BASE + 0x20, (1u << 31) | (22));    /*rat0 ctrl0 */

    PRUICSS_disableCore(pruicssHandle, PRUICSS_PRU0);
    PRUICSS_disableCore(pruicssHandle, PRUICSS_PRU1);

    ICSS_EMAC_testGetPruFwPtr(&pru0FwPtr, &pru0FwLength, &pru1FwPtr, &pru1FwLength);

    result_flag = PRUICSS_writeMemory(pruicssHandle, PRUICSS_IRAM_PRU(0), 0, (uint32_t *)pru0FwPtr, pru0FwLength);
    if(result_flag)
    {
        DebugP_log("load to PRU0 passed\r\n");
        retVal = true;
    }
    else
    {
        DebugP_log("load to PRU0 failed\r\n");
    }
    result_flag = PRUICSS_writeMemory(pruicssHandle, PRUICSS_IRAM_PRU(1), 0, (uint32_t *)pru1FwPtr, pru1FwLength);
    if(result_flag)
    {
        DebugP_log("load to PRU1 passed\r\n");
        retVal = true;
    }
    else
    {
        DebugP_log("load to PRU0 failed\r\n");
    }

    if( retVal)
    {
        PRUICSS_enableCore(pruicssHandle, PRUICSS_PRU0);
        PRUICSS_enableCore(pruicssHandle, PRUICSS_PRU1);
    }

#if defined AM263X_LP || defined AM263PX_LP
    ICSS_EMAC_testBoardInit();
#endif

    main_loop(NULL);

    return 0;
}

#if defined AM263X_LP || defined AM263PX_LP
void icssmMuxSelection(void)
{
    uint32_t pinNum[CONFIG_GPIO_NUM_INSTANCES] = {CONFIG_GPIO0_PIN, CONFIG_GPIO1_PIN, CONFIG_GPIO2_PIN};
    uint32_t pinDir[CONFIG_GPIO_NUM_INSTANCES] = {CONFIG_GPIO0_DIR, CONFIG_GPIO1_DIR, CONFIG_GPIO2_DIR};

    for(uint32_t index = 0; index < CONFIG_GPIO_NUM_INSTANCES-1; index++)
    {
        /* Address translate */
        uint32_t gGpioBaseAddr = (uint32_t) AddrTranslateP_getLocalAddr(CONFIG_GPIO0_BASE_ADDR);

        /* Setup GPIO for ICSSM MDIO Mux selection */
        GPIO_setDirMode(gGpioBaseAddr, pinNum[index], pinDir[index]);
        GPIO_pinWriteHigh(gGpioBaseAddr, pinNum[index]);
    }
}
#endif

#ifdef AM263PX_CC
/* Set MDIO/MDC_MUX_SEL1 to low using IO Expander to configure:
 *  On-Board PHY               ->  PRU0 MII0
 *  ETHERNET ADD-ON CONNECTOR  ->  PRU1 MII1
 *
 * Refer to Ethenet Routing in AM263Px User Guide for more details
 */
void setIOExpMuxSelection(void *args)
{
    int32_t             status = SystemP_SUCCESS;
    uint32_t            ioIndex = MDIO_MDC_MUX_SEL1;
    TCA6424_Params      tca6424Params;

    TCA6424_Params_init(&tca6424Params);

    tca6424Params.i2cInstance = IO_EXP_I2C_INSTANCE;

    status = TCA6424_open(&gTCA6424_Config, &tca6424Params);

    if(status == SystemP_SUCCESS)
    {
        /* Configure as output  */
        status = TCA6424_config(
                      &gTCA6424_Config,
                      ioIndex,
                      TCA6424_MODE_OUTPUT);

        /* set P22 low which controls MDIO/MDC_MUX_SEL1 -> enable PRU0_MII0 and PRU1_MII1 */
        status = TCA6424_setOutput(
                     &gTCA6424_Config,
                     ioIndex,
                     TCA6424_OUT_STATE_LOW);

    }
    TCA6424_close(&gTCA6424_Config);
}
#endif
