/* Copyright (c) 2024 Texas Instruments Incorporated
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

#ifndef BOARD_DDRREGINIT_H_
#define BOARD_DDRREGINIT_H_

#ifdef __cplusplus
extern "C" {
#endif
/*
 * This file was generated by the AM65x_DRA80xM EMIF Tool:
 * http://www.ti.com/lit/pdf/spracj0
 * Configuration Parameters
 * Memory Type: DDR4
 * Data Rate: 1600 MT/s
 * ECC Enabled: No
 * Data Width: 32 bits
 */
#define DDR_PLL_FREQUENCY 400000000
#define DDRCTL_MSTR 0x41040010
#define DDRCTL_RFSHCTL0 0x00210070
#define DDRCTL_ECCCFG0 0x00000000
#define DDRCTL_RFSHTMG 0x0061008C
#define DDRCTL_CRCPARCTL0 0x00008000
#define DDRCTL_CRCPARCTL1 0x1A000000
#define DDRCTL_CRCPARCTL2 0x0048051E
#define DDRCTL_INIT0 0x400100C4
#define DDRCTL_INIT1 0x004F0000
#define DDRCTL_INIT3 0x02140501
#define DDRCTL_INIT4 0x00000020
#define DDRCTL_INIT5 0x00100000
#define DDRCTL_INIT6 0x00000480
#define DDRCTL_INIT7 0x000004E8
#define DDRCTL_DRAMTMG0 0x0C0A1B0D
#define DDRCTL_DRAMTMG1 0x00030313
#define DDRCTL_DRAMTMG2 0x0506050A
#define DDRCTL_DRAMTMG3 0x0000400C
#define DDRCTL_DRAMTMG4 0x06020206
#define DDRCTL_DRAMTMG5 0x04040302
#define DDRCTL_DRAMTMG6 0x00000004
#define DDRCTL_DRAMTMG7 0x00000404
#define DDRCTL_DRAMTMG8 0x03030C05
#define DDRCTL_DRAMTMG9 0x00020208
#define DDRCTL_DRAMTMG10 0x001C180A
#define DDRCTL_DRAMTMG11 0x1106010E
#define DDRCTL_DRAMTMG12 0x00020008
#define DDRCTL_DRAMTMG13 0x0B100002
#define DDRCTL_DRAMTMG14 0x00000000
#define DDRCTL_DRAMTMG15 0x0000003F
#define DDRCTL_DRAMTMG17 0x00500028
#define DDRCTL_ZQCTL0 0x21000040
#define DDRCTL_ZQCTL1 0x0202FAF0
#define DDRCTL_DFITMG0 0x04888206
#define DDRCTL_DFITMG1 0x000A0606
#define DDRCTL_DFITMG2 0x00000604
#define DDRCTL_DFIMISC 0x00000001
#define DDRCTL_ADDRMAP0 0x001F1F1F
#define DDRCTL_ADDRMAP1 0x003F0808
#define DDRCTL_ADDRMAP2 0x00000000
#define DDRCTL_ADDRMAP3 0x00000000
#define DDRCTL_ADDRMAP4 0x00001F1F
#define DDRCTL_ADDRMAP5 0x08080808
#define DDRCTL_ADDRMAP6 0x08080808
#define DDRCTL_ADDRMAP7 0x00000F0F
#define DDRCTL_ADDRMAP8 0x00000A0A
#define DDRCTL_ADDRMAP9 0x00000000
#define DDRCTL_ADDRMAP10 0x00000000
#define DDRCTL_ADDRMAP11 0x001F1F00
#define DDRCTL_DQMAP0 0x00000000
#define DDRCTL_DQMAP1 0x00000000
#define DDRCTL_DQMAP4 0x00000000
#define DDRCTL_DQMAP5 0x00000000
#define DDRCTL_PWRCTL 0x00000000
#define DDRCTL_RANKCTL 0x00000000
#define DDRCTL_ODTCFG 0x0600060C
#define DDRCTL_ODTMAP 0x00000001
#define DDRPHY_PGCR0 0x07001E00
#define DDRPHY_PGCR1 0x020046C0
#define DDRPHY_PGCR2 0x00F0BFE0
#define DDRPHY_PGCR3 0x55AA0080
#define DDRPHY_PGCR6 0x00013001
#define DDRPHY_PTR2 0x00083DEF
#define DDRPHY_PTR3 0x00061A80
#define DDRPHY_PTR4 0x00000120
#define DDRPHY_PTR5 0x00027100
#define DDRPHY_PTR6 0x04000320
#define DDRPHY_PLLCR0 0x021c4000
#define DDRPHY_DXCCR 0x00000038
#define DDRPHY_DSGCR 0x02A0C129
#define DDRPHY_DCR 0x0000040C
#define DDRPHY_DTPR0 0x041A0B06
#define DDRPHY_DTPR1 0x28140000
#define DDRPHY_DTPR2 0x0034E300
#define DDRPHY_DTPR3 0x02800800
#define DDRPHY_DTPR4 0x31180805
#define DDRPHY_DTPR5 0x00250B06
#define DDRPHY_DTPR6 0x00000505
#define DDRPHY_ZQCR 0x008A2A58
#define DDRPHY_ZQ0PR0    0x000077DD
#define DDRPHY_ZQ1PR0 0x000077DD
#define DDRPHY_MR0 0x00000214
#define DDRPHY_MR1 0x00000501
#define DDRPHY_MR2 0x00000000
#define DDRPHY_MR3 0x00000020
#define DDRPHY_MR4 0x00000000
#define DDRPHY_MR5 0x00000480
#define DDRPHY_MR6 0x000004E8
#define DDRPHY_MR11 0x00000000
#define DDRPHY_MR12 0x00000000
#define DDRPHY_MR13 0x00000000
#define DDRPHY_MR14 0x00000000
#define DDRPHY_MR22 0x00000000
#define DDRPHY_VTCR0 0xF3C32028
#define DDRPHY_DX8SL0PLLCR0 0x021c4000
#define DDRPHY_DX8SL1PLLCR0 0x021c4000
#define DDRPHY_DX8SL2PLLCR0 0x021c4000
#define DDRPHY_DTCR0 0x8000B1C7
#define DDRPHY_DTCR1 0x00010236
#define DDRPHY_ACIOCR3 0x00000001
#define DDRPHY_ACIOCR5 0x04800000
#define DDRPHY_IOVCR0 0x0F0C0C0C
#define DDRPHY_DX0GCR0 0x00000000
#define DDRPHY_DX0GCR1 0x00000000
#define DDRPHY_DX0GCR2 0x00000000
#define DDRPHY_DX0GCR3  0x00000000
#define DDRPHY_DX1GCR0 0x00000000
#define DDRPHY_DX1GCR1 0x00000000
#define DDRPHY_DX1GCR2 0x00000000
#define DDRPHY_DX1GCR3 0x00000000
#define DDRPHY_DX2GCR0 0x40700204
#define DDRPHY_DX2GCR1 0x00007FFF
#define DDRPHY_DX2GCR2 0x00000000
#define DDRPHY_DX2GCR3  0xFFC0010B
#define DDRPHY_DX3GCR0 0x40700204
#define DDRPHY_DX3GCR1 0x00007FFF
#define DDRPHY_DX3GCR2 0x00000000
#define DDRPHY_DX3GCR3  0xFFC0010B
#define DDRPHY_DX4GCR0 0x40703220
#define DDRPHY_DX4GCR1 0x55556000
#define DDRPHY_DX4GCR2 0xAAAA0000
#define DDRPHY_DX4GCR3  0xFFE18587
#define DDRPHY_DX0GCR4 0x0E00B03C
#define DDRPHY_DX1GCR4 0x0E00B03C
#define DDRPHY_DX2GCR4 0x0E00B03C
#define DDRPHY_DX3GCR4 0x0E00B03C
#define DDRPHY_DX4GCR4 0x0E00B03C
#define DDRPHY_PGCR5 0x01010004
#define DDRPHY_DX0GCR5 0x00000049
#define DDRPHY_DX1GCR5 0x00000049
#define DDRPHY_DX2GCR5 0x00000049
#define DDRPHY_DX3GCR5 0x00000049
#define DDRPHY_DX4GCR5 0x00000049
#define DDRPHY_DX0GTR0 0x00020002
#define DDRPHY_DX1GTR0 0x00020002
#define DDRPHY_DX2GTR0 0x00020002
#define DDRPHY_DX3GTR0 0x00020002
#define DDRPHY_DX4GTR0 0x00020002
#define DDRPHY_ODTCR 0x00010000
#define DDRPHY_DX8SL0IOCR 0x74800000
#define DDRPHY_DX8SL1IOCR 0x74800000
#define DDRPHY_DX8SL2IOCR 0x74800000
#define DDRPHY_DX8SL0DXCTL2 0x00141830
#define DDRPHY_DX8SL1DXCTL2 0x00141830
#define DDRPHY_DX8SL2DXCTL2 0x00141830
#ifdef __cplusplus
}
#endif

#endif
