/********************************************************************
*
* SOC BASEADDRESS. header file
*
* Copyright (C) 2022-24 Texas Instruments Incorporated.
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
*/
#ifndef SDLR_SOC_BASEADDRESS_H_
#define SDLR_SOC_BASEADDRESS_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*
* Auto-generated SoC Base Address File:
*/

#define SDL_HSM_ROM_U_BASE                              (0x20000000U)
#define SDL_HSM_SEC_ROM_U_BASE                          (0x20010000U)
#define SDL_HSM_RAM_U_BASE                              (0x20020000U)
#define SDL_MCRC0_U_BASE                                (0x35000000U)
#define SDL_STM_STIM_U_BASE                             (0x39000000U)
#define SDL_HSM_SOC_CTRL_U_BASE                         (0x40000000U)
#define SDL_MPU_L2OCRAM_BANK0_U_BASE                    (0x40020000U)
#define SDL_MPU_L2OCRAM_BANK1_U_BASE                    (0x40040000U)
#define SDL_MPU_L2OCRAM_BANK2_U_BASE                    (0x40060000U)
#define SDL_MPU_L2OCRAM_BANK3_U_BASE                    (0x40080000U)
#define SDL_MPU_R5SS0_CORE0_AXIS_U_BASE                 (0x400A0000U)
#define SDL_MPU_R5SS0_CORE1_AXIS_U_BASE                 (0x400C0000U)
#define SDL_MPU_R5SS1_CORE0_AXIS_U_BASE                 (0x400E0000U)
#define SDL_MPU_R5SS1_CORE1_AXIS_U_BASE                 (0x40100000U)
#define SDL_MPU_HSM_DTHE_U_BASE                         (0x40120000U)
#define SDL_MPU_MBOX_SRAM_U_BASE                        (0x40140000U)
#define SDL_MPU_QSPI0_U_BASE                            (0x40160000U)
#define SDL_MPU_SCRM2SCRP0_U_BASE                       (0x40180000U)
#define SDL_MPU_SCRM2SCRP1_U_BASE                       (0x401A0000U)
#define SDL_MPU_R5SS0_CORE0_AHB_U_BASE                  (0x401C0000U)
#define SDL_MPU_R5SS0_CORE1_AHB_U_BASE                  (0x401E0000U)
#define SDL_MPU_R5SS1_CORE0_AHB_U_BASE                  (0x40200000U)
#define SDL_MPU_R5SS1_CORE1_AHB_U_BASE                  (0x40220000U)
#define SDL_MPU_HSM_U_BASE                              (0x40240000U)
#define SDL_HSM_SOC_PCR_U_BASE                          (0x40F78000U)
#define SDL_HSM_STC_U_BASE                              (0x40F78C00U)
#define SDL_HSM_PBIST_U_BASE                            (0x40F79000U)
#define SDL_HSM_ECC_AGGR_U_BASE                         (0x40F79400U)
#define SDL_HSM_MBOX_SRAM_U_BASE                        (0x44000000U)
#define SDL_HSM_SEC_MGR_U_BASE                          (0x46000000U)
#define SDL_HSM_SEC_RAM_U_BASE                          (0x46050000U)
#define SDL_HSM_CTRL_U_BASE                             (0x47000000U)
#define SDL_HSM_TPCC0_U_BASE                            (0x47020000U)
#define SDL_HSM_TPTC00_U_BASE                           (0x47040000U)
#define SDL_HSM_TPTC01_U_BASE                           (0x47060000U)
#define SDL_HSM_PCR_U_BASE                              (0x47F78000U)
#define SDL_HSM_RTI0_U_BASE                             (0x47F78C00U)
#define SDL_HSM_WDT0_U_BASE                             (0x47F78D00U)
#define SDL_HSM_DCC0_U_BASE                             (0x47F79000U)
#define SDL_HSM_ESM_U_BASE                              (0x47F79400U)
#define SDL_HSM_DMT0_U_BASE                             (0x47F79800U)
#define SDL_HSM_DMT1_U_BASE                             (0x47F79900U)
#define SDL_ICSSM0_INTERNAL_U_BASE                      (0x48000000U)
#define SDL_ICSSM0_ECC_U_BASE                           (0x48100000U)
#define SDL_QSPI0_U_BASE                                (0x48200000U)
#define SDL_MMC0_U_BASE                                 (0x48300000U)
#define SDL_GPMC0_CFG_U_BASE                            (0x48400000U)
#define SDL_CONTROLSS_G0_EPWM0_U_BASE                   (0x50000000U)
#define SDL_CONTROLSS_G0_EPWM1_U_BASE                   (0x50001000U)
#define SDL_CONTROLSS_G0_EPWM2_U_BASE                   (0x50002000U)
#define SDL_CONTROLSS_G0_EPWM3_U_BASE                   (0x50003000U)
#define SDL_CONTROLSS_G0_EPWM4_U_BASE                   (0x50004000U)
#define SDL_CONTROLSS_G0_EPWM5_U_BASE                   (0x50005000U)
#define SDL_CONTROLSS_G0_EPWM6_U_BASE                   (0x50006000U)
#define SDL_CONTROLSS_G0_EPWM7_U_BASE                   (0x50007000U)
#define SDL_CONTROLSS_G0_EPWM8_U_BASE                   (0x50008000U)
#define SDL_CONTROLSS_G0_EPWM9_U_BASE                   (0x50009000U)
#define SDL_CONTROLSS_G0_EPWM10_U_BASE                  (0x5000A000U)
#define SDL_CONTROLSS_G0_EPWM11_U_BASE                  (0x5000B000U)
#define SDL_CONTROLSS_G0_EPWM12_U_BASE                  (0x5000C000U)
#define SDL_CONTROLSS_G0_EPWM13_U_BASE                  (0x5000D000U)
#define SDL_CONTROLSS_G0_EPWM14_U_BASE                  (0x5000E000U)
#define SDL_CONTROLSS_G0_EPWM15_U_BASE                  (0x5000F000U)
#define SDL_CONTROLSS_G0_EPWM16_U_BASE                  (0x50010000U)
#define SDL_CONTROLSS_G0_EPWM17_U_BASE                  (0x50011000U)
#define SDL_CONTROLSS_G0_EPWM18_U_BASE                  (0x50012000U)
#define SDL_CONTROLSS_G0_EPWM19_U_BASE                  (0x50013000U)
#define SDL_CONTROLSS_G0_EPWM20_U_BASE                  (0x50014000U)
#define SDL_CONTROLSS_G0_EPWM21_U_BASE                  (0x50015000U)
#define SDL_CONTROLSS_G0_EPWM22_U_BASE                  (0x50016000U)
#define SDL_CONTROLSS_G0_EPWM23_U_BASE                  (0x50017000U)
#define SDL_CONTROLSS_G0_EPWM24_U_BASE                  (0x50018000U)
#define SDL_CONTROLSS_G0_EPWM25_U_BASE                  (0x50019000U)
#define SDL_CONTROLSS_G0_EPWM26_U_BASE                  (0x5001A000U)
#define SDL_CONTROLSS_G0_EPWM27_U_BASE                  (0x5001B000U)
#define SDL_CONTROLSS_G0_EPWM28_U_BASE                  (0x5001C000U)
#define SDL_CONTROLSS_G0_EPWM29_U_BASE                  (0x5001D000U)
#define SDL_CONTROLSS_G0_EPWM30_U_BASE                  (0x5001E000U)
#define SDL_CONTROLSS_G0_EPWM31_U_BASE                  (0x5001F000U)
#define SDL_CONTROLSS_G1_EPWM0_U_BASE                   (0x50040000U)
#define SDL_CONTROLSS_G1_EPWM1_U_BASE                   (0x50041000U)
#define SDL_CONTROLSS_G1_EPWM2_U_BASE                   (0x50042000U)
#define SDL_CONTROLSS_G1_EPWM3_U_BASE                   (0x50043000U)
#define SDL_CONTROLSS_G1_EPWM4_U_BASE                   (0x50044000U)
#define SDL_CONTROLSS_G1_EPWM5_U_BASE                   (0x50045000U)
#define SDL_CONTROLSS_G1_EPWM6_U_BASE                   (0x50046000U)
#define SDL_CONTROLSS_G1_EPWM7_U_BASE                   (0x50047000U)
#define SDL_CONTROLSS_G1_EPWM8_U_BASE                   (0x50048000U)
#define SDL_CONTROLSS_G1_EPWM9_U_BASE                   (0x50049000U)
#define SDL_CONTROLSS_G1_EPWM10_U_BASE                  (0x5004A000U)
#define SDL_CONTROLSS_G1_EPWM11_U_BASE                  (0x5004B000U)
#define SDL_CONTROLSS_G1_EPWM12_U_BASE                  (0x5004C000U)
#define SDL_CONTROLSS_G1_EPWM13_U_BASE                  (0x5004D000U)
#define SDL_CONTROLSS_G1_EPWM14_U_BASE                  (0x5004E000U)
#define SDL_CONTROLSS_G1_EPWM15_U_BASE                  (0x5004F000U)
#define SDL_CONTROLSS_G1_EPWM16_U_BASE                  (0x50050000U)
#define SDL_CONTROLSS_G1_EPWM17_U_BASE                  (0x50051000U)
#define SDL_CONTROLSS_G1_EPWM18_U_BASE                  (0x50052000U)
#define SDL_CONTROLSS_G1_EPWM19_U_BASE                  (0x50053000U)
#define SDL_CONTROLSS_G1_EPWM20_U_BASE                  (0x50054000U)
#define SDL_CONTROLSS_G1_EPWM21_U_BASE                  (0x50055000U)
#define SDL_CONTROLSS_G1_EPWM22_U_BASE                  (0x50056000U)
#define SDL_CONTROLSS_G1_EPWM23_U_BASE                  (0x50057000U)
#define SDL_CONTROLSS_G1_EPWM24_U_BASE                  (0x50058000U)
#define SDL_CONTROLSS_G1_EPWM25_U_BASE                  (0x50059000U)
#define SDL_CONTROLSS_G1_EPWM26_U_BASE                  (0x5005A000U)
#define SDL_CONTROLSS_G1_EPWM27_U_BASE                  (0x5005B000U)
#define SDL_CONTROLSS_G1_EPWM28_U_BASE                  (0x5005C000U)
#define SDL_CONTROLSS_G1_EPWM29_U_BASE                  (0x5005D000U)
#define SDL_CONTROLSS_G1_EPWM30_U_BASE                  (0x5005E000U)
#define SDL_CONTROLSS_G1_EPWM31_U_BASE                  (0x5005F000U)
#define SDL_CONTROLSS_G2_EPWM0_U_BASE                   (0x50080000U)
#define SDL_CONTROLSS_G2_EPWM1_U_BASE                   (0x50081000U)
#define SDL_CONTROLSS_G2_EPWM2_U_BASE                   (0x50082000U)
#define SDL_CONTROLSS_G2_EPWM3_U_BASE                   (0x50083000U)
#define SDL_CONTROLSS_G2_EPWM4_U_BASE                   (0x50084000U)
#define SDL_CONTROLSS_G2_EPWM5_U_BASE                   (0x50085000U)
#define SDL_CONTROLSS_G2_EPWM6_U_BASE                   (0x50086000U)
#define SDL_CONTROLSS_G2_EPWM7_U_BASE                   (0x50087000U)
#define SDL_CONTROLSS_G2_EPWM8_U_BASE                   (0x50088000U)
#define SDL_CONTROLSS_G2_EPWM9_U_BASE                   (0x50089000U)
#define SDL_CONTROLSS_G2_EPWM10_U_BASE                  (0x5008A000U)
#define SDL_CONTROLSS_G2_EPWM11_U_BASE                  (0x5008B000U)
#define SDL_CONTROLSS_G2_EPWM12_U_BASE                  (0x5008C000U)
#define SDL_CONTROLSS_G2_EPWM13_U_BASE                  (0x5008D000U)
#define SDL_CONTROLSS_G2_EPWM14_U_BASE                  (0x5008E000U)
#define SDL_CONTROLSS_G2_EPWM15_U_BASE                  (0x5008F000U)
#define SDL_CONTROLSS_G2_EPWM16_U_BASE                  (0x50090000U)
#define SDL_CONTROLSS_G2_EPWM17_U_BASE                  (0x50091000U)
#define SDL_CONTROLSS_G2_EPWM18_U_BASE                  (0x50092000U)
#define SDL_CONTROLSS_G2_EPWM19_U_BASE                  (0x50093000U)
#define SDL_CONTROLSS_G2_EPWM20_U_BASE                  (0x50094000U)
#define SDL_CONTROLSS_G2_EPWM21_U_BASE                  (0x50095000U)
#define SDL_CONTROLSS_G2_EPWM22_U_BASE                  (0x50096000U)
#define SDL_CONTROLSS_G2_EPWM23_U_BASE                  (0x50097000U)
#define SDL_CONTROLSS_G2_EPWM24_U_BASE                  (0x50098000U)
#define SDL_CONTROLSS_G2_EPWM25_U_BASE                  (0x50099000U)
#define SDL_CONTROLSS_G2_EPWM26_U_BASE                  (0x5009A000U)
#define SDL_CONTROLSS_G2_EPWM27_U_BASE                  (0x5009B000U)
#define SDL_CONTROLSS_G2_EPWM28_U_BASE                  (0x5009C000U)
#define SDL_CONTROLSS_G2_EPWM29_U_BASE                  (0x5009D000U)
#define SDL_CONTROLSS_G2_EPWM30_U_BASE                  (0x5009E000U)
#define SDL_CONTROLSS_G2_EPWM31_U_BASE                  (0x5009F000U)
#define SDL_CONTROLSS_G3_EPWM0_U_BASE                   (0x500C0000U)
#define SDL_CONTROLSS_G3_EPWM1_U_BASE                   (0x500C1000U)
#define SDL_CONTROLSS_G3_EPWM2_U_BASE                   (0x500C2000U)
#define SDL_CONTROLSS_G3_EPWM3_U_BASE                   (0x500C3000U)
#define SDL_CONTROLSS_G3_EPWM4_U_BASE                   (0x500C4000U)
#define SDL_CONTROLSS_G3_EPWM5_U_BASE                   (0x500C5000U)
#define SDL_CONTROLSS_G3_EPWM6_U_BASE                   (0x500C6000U)
#define SDL_CONTROLSS_G3_EPWM7_U_BASE                   (0x500C7000U)
#define SDL_CONTROLSS_G3_EPWM8_U_BASE                   (0x500C8000U)
#define SDL_CONTROLSS_G3_EPWM9_U_BASE                   (0x500C9000U)
#define SDL_CONTROLSS_G3_EPWM10_U_BASE                  (0x500CA000U)
#define SDL_CONTROLSS_G3_EPWM11_U_BASE                  (0x500CB000U)
#define SDL_CONTROLSS_G3_EPWM12_U_BASE                  (0x500CC000U)
#define SDL_CONTROLSS_G3_EPWM13_U_BASE                  (0x500CD000U)
#define SDL_CONTROLSS_G3_EPWM14_U_BASE                  (0x500CE000U)
#define SDL_CONTROLSS_G3_EPWM15_U_BASE                  (0x500CF000U)
#define SDL_CONTROLSS_G3_EPWM16_U_BASE                  (0x500D0000U)
#define SDL_CONTROLSS_G3_EPWM17_U_BASE                  (0x500D1000U)
#define SDL_CONTROLSS_G3_EPWM18_U_BASE                  (0x500D2000U)
#define SDL_CONTROLSS_G3_EPWM19_U_BASE                  (0x500D3000U)
#define SDL_CONTROLSS_G3_EPWM20_U_BASE                  (0x500D4000U)
#define SDL_CONTROLSS_G3_EPWM21_U_BASE                  (0x500D5000U)
#define SDL_CONTROLSS_G3_EPWM22_U_BASE                  (0x500D6000U)
#define SDL_CONTROLSS_G3_EPWM23_U_BASE                  (0x500D7000U)
#define SDL_CONTROLSS_G3_EPWM24_U_BASE                  (0x500D8000U)
#define SDL_CONTROLSS_G3_EPWM25_U_BASE                  (0x500D9000U)
#define SDL_CONTROLSS_G3_EPWM26_U_BASE                  (0x500DA000U)
#define SDL_CONTROLSS_G3_EPWM27_U_BASE                  (0x500DB000U)
#define SDL_CONTROLSS_G3_EPWM28_U_BASE                  (0x500DC000U)
#define SDL_CONTROLSS_G3_EPWM29_U_BASE                  (0x500DD000U)
#define SDL_CONTROLSS_G3_EPWM30_U_BASE                  (0x500DE000U)
#define SDL_CONTROLSS_G3_EPWM31_U_BASE                  (0x500DF000U)
#define SDL_CONTROLSS_ADC0_RESULT_U_BASE                (0x50100000U)
#define SDL_CONTROLSS_ADC1_RESULT_U_BASE                (0x50101000U)
#define SDL_CONTROLSS_ADC2_RESULT_U_BASE                (0x50102000U)
#define SDL_CONTROLSS_ADC3_RESULT_U_BASE                (0x50103000U)
#define SDL_CONTROLSS_ADC4_RESULT_U_BASE                (0x50104000U)
#define SDL_CONTROLSS_CMPSSA0_U_BASE                    (0x50200000U)
#define SDL_CONTROLSS_CMPSSA1_U_BASE                    (0x50201000U)
#define SDL_CONTROLSS_CMPSSA2_U_BASE                    (0x50202000U)
#define SDL_CONTROLSS_CMPSSA3_U_BASE                    (0x50203000U)
#define SDL_CONTROLSS_CMPSSA4_U_BASE                    (0x50204000U)
#define SDL_CONTROLSS_CMPSSA5_U_BASE                    (0x50205000U)
#define SDL_CONTROLSS_CMPSSA6_U_BASE                    (0x50206000U)
#define SDL_CONTROLSS_CMPSSA7_U_BASE                    (0x50207000U)
#define SDL_CONTROLSS_CMPSSA8_U_BASE                    (0x50208000U)
#define SDL_CONTROLSS_CMPSSA9_U_BASE                    (0x50209000U)
#define SDL_CONTROLSS_CMPSSB0_U_BASE                    (0x50220000U)
#define SDL_CONTROLSS_CMPSSB1_U_BASE                    (0x50221000U)
#define SDL_CONTROLSS_CMPSSB2_U_BASE                    (0x50222000U)
#define SDL_CONTROLSS_CMPSSB3_U_BASE                    (0x50223000U)
#define SDL_CONTROLSS_CMPSSB4_U_BASE                    (0x50224000U)
#define SDL_CONTROLSS_CMPSSB5_U_BASE                    (0x50225000U)
#define SDL_CONTROLSS_CMPSSB6_U_BASE                    (0x50226000U)
#define SDL_CONTROLSS_CMPSSB7_U_BASE                    (0x50227000U)
#define SDL_CONTROLSS_CMPSSB8_U_BASE                    (0x50228000U)
#define SDL_CONTROLSS_CMPSSB9_U_BASE                    (0x50229000U)
#define SDL_CONTROLSS_ECAP0_U_BASE                      (0x50240000U)
#define SDL_CONTROLSS_ECAP1_U_BASE                      (0x50241000U)
#define SDL_CONTROLSS_ECAP2_U_BASE                      (0x50242000U)
#define SDL_CONTROLSS_ECAP3_U_BASE                      (0x50243000U)
#define SDL_CONTROLSS_ECAP4_U_BASE                      (0x50244000U)
#define SDL_CONTROLSS_ECAP5_U_BASE                      (0x50245000U)
#define SDL_CONTROLSS_ECAP6_U_BASE                      (0x50246000U)
#define SDL_CONTROLSS_ECAP7_U_BASE                      (0x50247000U)
#define SDL_CONTROLSS_ECAP8_U_BASE                      (0x50248000U)
#define SDL_CONTROLSS_ECAP9_U_BASE                      (0x50249000U)
#define SDL_CONTROLSS_DAC0_U_BASE                       (0x50260000U)
#define SDL_CONTROLSS_SDFM0_U_BASE                      (0x50268000U)
#define SDL_CONTROLSS_SDFM1_U_BASE                      (0x50269000U)
#define SDL_CONTROLSS_EQEP0_U_BASE                      (0x50270000U)
#define SDL_CONTROLSS_EQEP1_U_BASE                      (0x50271000U)
#define SDL_CONTROLSS_EQEP2_U_BASE                      (0x50272000U)
#define SDL_CONTROLSS_FSI_TX0_U_BASE                    (0x50280000U)
#define SDL_CONTROLSS_FSI_TX1_U_BASE                    (0x50281000U)
#define SDL_CONTROLSS_FSI_RX0_U_BASE                    (0x50290000U)
#define SDL_CONTROLSS_FSI_RX1_U_BASE                    (0x50291000U)
#define SDL_CONTROLSS_FSI_TX2_U_BASE                    (0x502A0000U)
#define SDL_CONTROLSS_FSI_TX3_U_BASE                    (0x502A1000U)
#define SDL_CONTROLSS_FSI_RX2_U_BASE                    (0x502B0000U)
#define SDL_CONTROLSS_FSI_RX3_U_BASE                    (0x502B1000U)
#define SDL_CONTROLSS_ADC0_U_BASE                       (0x502C0000U)
#define SDL_CONTROLSS_ADC1_U_BASE                       (0x502C1000U)
#define SDL_CONTROLSS_ADC2_U_BASE                       (0x502C2000U)
#define SDL_CONTROLSS_ADC3_U_BASE                       (0x502C3000U)
#define SDL_CONTROLSS_ADC4_U_BASE                       (0x502C4000U)
#define SDL_CONTROLSS_INPUTXBAR_U_BASE                  (0x502D0000U)
#define SDL_CONTROLSS_PWMXBAR_U_BASE                    (0x502D1000U)
#define SDL_CONTROLSS_PWMSYNCOUTXBAR_U_BASE             (0x502D2000U)
#define SDL_CONTROLSS_MDLXBAR_U_BASE                    (0x502D3000U)
#define SDL_CONTROLSS_ICLXBAR_U_BASE                    (0x502D4000U)
#define SDL_CONTROLSS_INTXBAR_U_BASE                    (0x502D5000U)
#define SDL_CONTROLSS_DMAXBAR_U_BASE                    (0x502D6000U)
#define SDL_CONTROLSS_OUTPUTXBAR_U_BASE                 (0x502D8000U)
#define SDL_CONTROLSS_OTTOCAL0_U_BASE                   (0x502E0000U)
#define SDL_CONTROLSS_OTTOCAL1_U_BASE                   (0x502E1000U)
#define SDL_CONTROLSS_OTTOCAL2_U_BASE                   (0x502E2000U)
#define SDL_CONTROLSS_OTTOCAL3_U_BASE                   (0x502E3000U)
#define SDL_CONTROLSS_CTRL_U_BASE                       (0x502F0000U)
#define SDL_DEBUGSS_U_BASE                              (0x50800000U)
#define SDL_MSS_CTRL_U_BASE                             (0x50D00000U)
#define SDL_TOP_CTRL_U_BASE                             (0x50D80000U)
#define SDL_SPINLOCK0_BASE                              (0x50E00000U)
#define SDL_VIM_U_BASE                                  (0x50F00000U)
#define SDL_GPIO0_U_BASE                                (0x52000000U)
#define SDL_GPIO1_U_BASE                                (0x52001000U)
#define SDL_GPIO2_U_BASE                                (0x52002000U)
#define SDL_GPIO3_U_BASE                                (0x52003000U)
#define SDL_WDT0_U_BASE                                 (0x52100000U)
#define SDL_WDT1_U_BASE                                 (0x52101000U)
#define SDL_WDT2_U_BASE                                 (0x52102000U)
#define SDL_WDT3_U_BASE                                 (0x52103000U)
#define SDL_RTI0_U_BASE                                 (0x52180000U)
#define SDL_RTI1_U_BASE                                 (0x52181000U)
#define SDL_RTI2_U_BASE                                 (0x52182000U)
#define SDL_RTI3_U_BASE                                 (0x52183000U)
#define SDL_MCSPI0_U_BASE                               (0x52200000U)
#define SDL_MCSPI1_U_BASE                               (0x52201000U)
#define SDL_MCSPI2_U_BASE                               (0x52202000U)
#define SDL_MCSPI3_U_BASE                               (0x52203000U)
#define SDL_MCSPI4_U_BASE                               (0x52204000U)
#define SDL_UART0_U_BASE                                (0x52300000U)
#define SDL_UART1_U_BASE                                (0x52301000U)
#define SDL_UART2_U_BASE                                (0x52302000U)
#define SDL_UART3_U_BASE                                (0x52303000U)
#define SDL_UART4_U_BASE                                (0x52304000U)
#define SDL_UART5_U_BASE                                (0x52305000U)
#define SDL_LIN0_U_BASE                                 (0x52400000U)
#define SDL_LIN1_U_BASE                                 (0x52401000U)
#define SDL_LIN2_U_BASE                                 (0x52402000U)
#define SDL_LIN3_U_BASE                                 (0x52403000U)
#define SDL_LIN4_U_BASE                                 (0x52404000U)
#define SDL_I2C0_U_BASE                                 (0x52500000U)
#define SDL_I2C1_U_BASE                                 (0x52501000U)
#define SDL_I2C2_U_BASE                                 (0x52502000U)
#define SDL_I2C3_U_BASE                                 (0x52503000U)
#define SDL_MCAN0_MSG_RAM_U_BASE                        (0x52600000U)
#define SDL_MCAN0_CFG_U_BASE                            (0x52608000U)
#define SDL_MCAN1_MSG_RAM_U_BASE                        (0x52610000U)
#define SDL_MCAN1_CFG_U_BASE                            (0x52618000U)
#define SDL_MCAN2_MSG_RAM_U_BASE                        (0x52620000U)
#define SDL_MCAN2_CFG_U_BASE                            (0x52628000U)
#define SDL_MCAN3_MSG_RAM_U_BASE                        (0x52630000U)
#define SDL_MCAN3_CFG_U_BASE                            (0x52638000U)
#define SDL_MCAN0_ECC_U_BASE                            (0x52700000U)
#define SDL_MCAN1_ECC_U_BASE                            (0x52701000U)
#define SDL_MCAN2_ECC_U_BASE                            (0x52702000U)
#define SDL_MCAN3_ECC_U_BASE                            (0x52703000U)
#define SDL_MCAN4_ECC_U_BASE                            (0x52704000U)
#define SDL_MCAN5_ECC_U_BASE                            (0x52705000U)
#define SDL_MCAN6_ECC_U_BASE                            (0x52706000U)
#define SDL_MCAN7_ECC_U_BASE                            (0x52707000U)
#define SDL_CPSW0_U_BASE                                (0x52800000U)
#define SDL_TPCC0_U_BASE                                (0x52A00000U)
#define SDL_TPTC00_U_BASE                               (0x52A40000U)
#define SDL_TPTC01_U_BASE                               (0x52A60000U)
#define SDL_DCC0_U_BASE                                 (0x52B00000U)
#define SDL_DCC1_U_BASE                                 (0x52B01000U)
#define SDL_DCC2_U_BASE                                 (0x52B02000U)
#define SDL_DCC3_U_BASE                                 (0x52B03000U)
#define SDL_TOP_ESM_U_BASE                              (0x52D00000U)
#define SDL_ESM0_CFG_SIZE                               (0x1000U)
#define SDL_SOC_TIMESYNC_XBAR0_U_BASE                   (0x52E00000U)
#define SDL_EDMA_TRIG_XBAR_U_BASE                       (0x52E01000U)
#define SDL_GPIO_INTR_XBAR_U_BASE                       (0x52E02000U)
#define SDL_ICSSM_INTR_XBAR_U_BASE                      (0x52E03000U)
#define SDL_SOC_TIMESYNC_XBAR1_U_BASE                   (0x52E04000U)
#define SDL_ECC_AGG_R5SS0_CORE0_U_BASE                  (0x53000000U)
#define SDL_ECC_AGG_R5SS0_CORE1_U_BASE                  (0x53003000U)
#define SDL_ECC_AGG_R5SS1_CORE0_U_BASE                  (0x53004000U)
#define SDL_ECC_AGG_R5SS1_CORE1_U_BASE                  (0x53007000U)
#define SDL_ECC_AGG_TOP_U_BASE                          (0x53010000U)
#define SDL_ECC_AGG_TOP_U_SIZE                          (0x528U)
#define SDL_IOMUX_U_BASE                                (0x53100000U)
#define SDL_TOP_RCM_U_BASE                              (0x53200000U)
#define SDL_MSS_RCM_U_BASE                              (0x53208000U)
#define SDL_R5SS0_CCMR_U_BASE                           (0x53210000U)
#define SDL_R5SS1_CCMR_U_BASE                           (0x53211000U)
#define SDL_TOP_PBIST_U_BASE                            (0x53300000U)
#define SDL_R5SS0_STC_U_BASE                            (0x53500000U)
#define SDL_R5SS1_STC_U_BASE                            (0x53510000U)
#define SDL_TOP_EFUSE_FARM_U_BASE                       (0x53600000U)
#define SDL_MCU_TIMEOUT0_CFG_BASE                       (0x53400000U)
#define SDL_MCU_TIMEOUT0_CFG_SIZE                       (0x400U)
#define SDL_EXT_FLASH0_U_BASE                           (0x60000000U)
#define SDL_EXT_FLASH1_U_BASE                           (0x62000000U)
#define SDL_GPMC0_MEM_U_BASE                            (0x68000000U)
#define SDL_L2OCRAM_U_BASE                              (0x70000000U)
#define SDL_MBOX_SRAM_U_BASE                            (0x72000000U)
#define SDL_R5SS0_CORE0_ICACHE_U_BASE                   (0x74000000U)
#define SDL_R5SS0_CORE0_DCACHE_U_BASE                   (0x74800000U)
#define SDL_R5SS0_CORE1_ICACHE_U_BASE                   (0x75000000U)
#define SDL_R5SS0_CORE1_DCACHE_U_BASE                   (0x75800000U)
#define SDL_R5SS1_CORE0_ICACHE_U_BASE                   (0x76000000U)
#define SDL_R5SS1_CORE0_DCACHE_U_BASE                   (0x76800000U)
#define SDL_R5SS1_CORE1_ICACHE_U_BASE                   (0x77000000U)
#define SDL_R5SS1_CORE1_DCACHE_U_BASE                   (0x77800000U)
#define SDL_R5SS0_CORE0_TCMA_U_BASE                     (0x78000000U)
#define SDL_R5SS0_CORE0_TCMB_U_BASE                     (0x78100000U)
#define SDL_R5SS0_CORE1_TCMA_U_BASE                     (0x78200000U)
#define SDL_R5SS0_CORE1_TCMB_U_BASE                     (0x78300000U)
#define SDL_R5SS1_CORE0_TCMA_U_BASE                     (0x78400000U)
#define SDL_R5SS1_CORE0_TCMB_U_BASE                     (0x78500000U)
#define SDL_R5SS1_CORE1_TCMA_U_BASE                     (0x78600000U)
#define SDL_R5SS1_CORE1_TCMB_U_BASE                     (0x78700000U)
#define SDL_HSM_DTHE_U_BASE                  			(0xCE000000U)
#define SDL_HSM_SHA_U_BASE                   			(0xCE004000U)
#define SDL_HSM_AES_U_BASE                   			(0xCE006000U)
#define SDL_HSM_TRNG_U_BASE                  			(0xCE00A000U)
#define SDL_HSM_PKA_U_BASE                   			(0xCE010000U)
#define SDL_HSM_PKA_RAM_U_BASE                          (0xCE014000U)
/*
* Auto-Generated Instance CNT List - Wakeup Domain
*/

#ifdef __cplusplus
}
#endif
#endif /* SDLR_SOC_BASEADDRESS_H_ */
