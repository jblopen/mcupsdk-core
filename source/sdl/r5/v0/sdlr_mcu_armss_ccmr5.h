/********************************************************************
 * Copyright (C) 2017-2024 Texas Instruments Incorporated.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
*/
#ifndef SDLR_MCU_ARMSS_CCMR5_H
#define SDLR_MCU_ARMSS_CCMR5_H

#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>

/**************************************************************************
* Hardware Region  : ECC Config Region
**************************************************************************/


/**************************************************************************
* Register Overlay Structure
**************************************************************************/

typedef struct {
    volatile uint32_t CCMSR1;                    /* CCM Status Register */
    volatile uint32_t CCMKEYR1;                  /* CCM Key Register */
    volatile uint32_t CCMSR2;                    /* CCM Status Register */
    volatile uint32_t CCMKEYR2;                  /* CCM Key Register */
    volatile uint32_t CCMSR3;                    /* CCM Status Register */
    volatile uint32_t CCMKEYR3;                  /* CCM Key Register */
    volatile uint32_t CCMPOLCNTRL;               /* CCM Polarity Inv Register */
#if defined (SOC_AM263PX) || (SOC_AM261X)
    volatile uint32_t RSVD0;                     /* 0x1C - RESERVED 0 */
    volatile uint32_t RSVD1;                     /* 0x20 - RESERVED 1 */
    volatile uint32_t RSVD2;                     /* 0x24 - RESERVED 2 */
    volatile uint32_t RSVD3;                     /* 0x28 - RESERVED 2 */
    volatile uint32_t CCMSR5;                    /* 0x2C - CCM Status Register */
    volatile uint32_t CCMKEYR5;                  /* 0x30 - CCM Key Register */
    volatile uint32_t CCMSR6;                    /* 0x34 - CCM Status Register */
    volatile uint32_t CCMKEYR6;                  /* 0x38 - CCM Key Register */
#endif
} SDL_mcu_armss_ccmr5_compare_wrapper_cfg_mmrsRegs;


/**************************************************************************
* Register Macros
**************************************************************************/

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1                (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1              (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2                (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2              (0x0000000CU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3                (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3              (0x00000014U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL           (0x00000018U)
/* Below macros are specific for AM263px only*/
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5                (0x0000002CU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5              (0x00000030U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6                (0x00000034U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6              (0x00000038U)

/**************************************************************************
* Field Definition Macros
**************************************************************************/

/* CCMSR1 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED2_MASK (0xFFFE0000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED2_SHIFT (0x00000011U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED2_MAX  (0x00007FFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_CMPE1_MASK     (0x00010000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_CMPE1_SHIFT    (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_CMPE1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_CMPE1_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED1_MASK (0x0000FE00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED1_SHIFT (0x00000009U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED1_MAX  (0x0000007FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STC1_MASK      (0x00000100U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STC1_SHIFT     (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STC1_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STC1_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED0_MASK (0x000000FCU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED0_SHIFT (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED0_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESERVED0_MAX  (0x0000003FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STET1_MASK     (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STET1_SHIFT    (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STET1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STET1_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STE1_MASK      (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STE1_SHIFT     (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STE1_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_STE1_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR1_RESETVAL       (0x00000000U)

/* CCMKEYR1 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_RESERVED_MASK (0xFFFFFFF0U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_RESERVED_SHIFT (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_RESERVED_MAX (0x0FFFFFFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_MKEY1_MASK   (0x0000000FU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_MKEY1_SHIFT  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_MKEY1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_MKEY1_MAX    (0x0000000FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR1_RESETVAL     (0x00000000U)

/* CCMSR2*/

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED2_MASK (0xFFFE0000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED2_SHIFT (0x00000011U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED2_MAX  (0x00007FFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_CMPE2_MASK     (0x00010000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_CMPE2_SHIFT    (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_CMPE2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_CMPE2_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED1_MASK (0x0000FE00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED1_SHIFT (0x00000009U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED1_MAX  (0x0000007FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STC2_MASK      (0x00000100U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STC2_SHIFT     (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STC2_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STC2_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED0_MASK (0x000000FCU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED0_SHIFT (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED0_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESERVED0_MAX  (0x0000003FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STET2_MASK     (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STET2_SHIFT    (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STET2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STET2_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STE2_MASK      (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STE2_SHIFT     (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STE2_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_STE2_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR2_RESETVAL       (0x00000000U)

/* CCMKEYR2 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_RESERVED_MASK (0xFFFFFFF0U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_RESERVED_SHIFT (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_RESERVED_MAX (0x0FFFFFFFU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_MKEY2_MASK   (0x0000000FU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_MKEY2_SHIFT  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_MKEY2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_MKEY2_MAX    (0x0000000FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR2_RESETVAL     (0x00000000U)

/* CCMSR3 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED2_MASK (0xFFFE0000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED2_SHIFT (0x00000011U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED2_MAX  (0x00007FFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_CMPE3_MASK     (0x00010000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_CMPE3_SHIFT    (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_CMPE3_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_CMPE3_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED1_MASK (0x0000FE00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED1_SHIFT (0x00000009U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED1_MAX  (0x0000007FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STC3_MASK      (0x00000100U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STC3_SHIFT     (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STC3_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STC3_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED0_MASK (0x000000FCU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED0_SHIFT (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED0_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESERVED0_MAX  (0x0000003FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STET3_MASK     (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STET3_SHIFT    (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STET3_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STET3_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STE3_MASK      (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STE3_SHIFT     (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STE3_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_STE3_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR3_RESETVAL       (0x00000000U)

/* CCMKEYR3 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_RESERVED_MASK (0xFFFFFFF0U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_RESERVED_SHIFT (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_RESERVED_MAX (0x0FFFFFFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_MKEY3_MASK   (0x0000000FU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_MKEY3_SHIFT  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_MKEY3_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_MKEY3_MAX    (0x0000000FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR3_RESETVAL     (0x00000000U)

/* CCMPOLCNTRL */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_RESERVED_MASK (0xFFFFFF00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_RESERVED_SHIFT (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_RESERVED_MAX (0x00FFFFFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_POL_INV_MASK (0x000000FFU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_POL_INV_SHIFT (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_POL_INV_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_POL_INV_MAX (0x000000FFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMPOLCNTRL_RESETVAL  (0x00000000U)

/* CCMSR5 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED2_MASK (0xFFFE0000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED2_SHIFT (0x00000011U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED2_MAX  (0x00007FFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_CMPE5_MASK     (0x00010000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_CMPE5_SHIFT    (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_CMPE5_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_CMPE5_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED1_MASK (0x0000FE00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED1_SHIFT (0x00000009U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED1_MAX  (0x0000007FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STC5_MASK      (0x00000100U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STC5_SHIFT     (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STC5_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STC5_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED0_MASK (0x000000FCU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED0_SHIFT (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED0_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESERVED0_MAX  (0x0000003FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STET5_MASK     (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STET5_SHIFT    (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STET5_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STET5_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STE5_MASK      (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STE5_SHIFT     (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STE5_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_STE5_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR5_RESETVAL       (0x00000000U)

/* CCMKEYR5 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_RESERVED_MASK (0xFFFFFFF0U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_RESERVED_SHIFT (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_RESERVED_MAX (0x0FFFFFFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_MKEY5_MASK   (0x0000000FU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_MKEY5_SHIFT  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_MKEY5_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_MKEY5_MAX    (0x0000000FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR5_RESETVAL     (0x00000000U)

/* CCMSR6 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED2_MASK (0xFFFE0000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED2_SHIFT (0x00000011U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED2_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED2_MAX  (0x00007FFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_CMPE6_MASK     (0x00010000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_CMPE6_SHIFT    (0x00000010U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_CMPE6_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_CMPE6_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED1_MASK (0x0000FE00U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED1_SHIFT (0x00000009U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED1_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED1_MAX  (0x0000007FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STC6_MASK      (0x00000100U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STC6_SHIFT     (0x00000008U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STC6_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STC6_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED0_MASK (0x000000FCU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED0_SHIFT (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED0_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESERVED0_MAX  (0x0000003FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STET6_MASK     (0x00000002U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STET6_SHIFT    (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STET6_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STET6_MAX      (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STE6_MASK      (0x00000001U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STE6_SHIFT     (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STE6_RESETVAL  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_STE6_MAX       (0x00000001U)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMSR6_RESETVAL       (0x00000000U)

/* CCMKEYR6 */

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_RESERVED_MASK (0xFFFFFFF0U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_RESERVED_SHIFT (0x00000004U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_RESERVED_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_RESERVED_MAX (0x0FFFFFFFU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_MKEY6_MASK   (0x0000000FU)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_MKEY6_SHIFT  (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_MKEY6_RESETVAL (0x00000000U)
#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_MKEY6_MAX    (0x0000000FU)

#define SDL_MCU_ARMSS_CCMR5_COMPARE_WRAPPER_CFG_MMRS_CCMKEYR6_RESETVAL     (0x00000000U)

#ifdef __cplusplus
}
#endif
#endif
