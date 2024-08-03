/*
* R5FSS0_CORE0 INTERRUPT MAP. header file
*
* Copyright (C) 2015-2019 Texas Instruments Incorporated.
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
#ifndef CSLR_R5FSS0_CORE0_INTERRUPT_MAP_H_
#define CSLR_R5FSS0_CORE0_INTERRUPT_MAP_H_

#ifdef __cplusplus
extern "C"
{
#endif

/*
* List of intr sources for receiver: R5FSS0_CORE0
*/


#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_0      0
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_1      1
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_2      2
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_3      3
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_4      4
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_5      5
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_6      6
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_HOST_INTR_PEND_7      7
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_RX_SOF_INTR_REQ_0     8
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_RX_SOF_INTR_REQ_1     9
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_TX_SOF_INTR_REQ_0     10
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_TX_SOF_INTR_REQ_1     11
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_0   12
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_1   13
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_2   14
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_3   15
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_4   16
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_5   17
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_6   18
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_7   19
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_8   20
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_9   21
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_10  22
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_11  23
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_12  24
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_13  25
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_14  26
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM0_PR1_IEP0_CMP_INTR_REQ_15  27
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_0      28
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_1      29
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_2      30
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_3      31
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_4      32
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_5      33
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_6      34
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_HOST_INTR_PEND_7      35
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_RX_SOF_INTR_REQ_0     36
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_RX_SOF_INTR_REQ_1     37
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_TX_SOF_INTR_REQ_0     38
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_TX_SOF_INTR_REQ_1     39
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_0   40
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_1   41
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_2   42
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_3   43
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_4   44
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_5   45
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_6   46
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_7   47
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_8   48
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_9   49
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_10  50
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_11  51
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_12  52
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_13  53
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_14  54
#define  CSLR_R5FSS0_CORE0_INTR_PRU_ICSSM1_PR1_IEP0_CMP_INTR_REQ_15  55
#define  CSLR_R5FSS0_CORE0_INTR_CPSW0_FH_INTR                        56
#define  CSLR_R5FSS0_CORE0_INTR_CPSW0_TH_INTR                        57
#define  CSLR_R5FSS0_CORE0_INTR_CPSW0_TH_THRESH_INTR                 58
#define  CSLR_R5FSS0_CORE0_INTR_CPSW0_MISC_INTR                      59
#define  CSLR_R5FSS0_CORE0_CPSW0_CPTS_COMP                           60
#define  CSLR_R5FSS0_CORE0_INTR_LIN0_INTR_0                          61
#define  CSLR_R5FSS0_CORE0_INTR_LIN0_INTR_1                          62
#define  CSLR_R5FSS0_CORE0_INTR_LIN1_INTR_0                          63
#define  CSLR_R5FSS0_CORE0_INTR_LIN1_INTR_1                          64
#define  CSLR_R5FSS0_CORE0_INTR_LIN2_INTR_0                          65
#define  CSLR_R5FSS0_CORE0_INTR_LIN2_INTR_1                          66
#define  CSLR_R5FSS0_CORE0_INTR_MCAN0_EXT_TS_ROLLOVER_LVL_INT_0      67
#define  CSLR_R5FSS0_CORE0_INTR_MCAN0_MCAN_LVL_INT_0                 68
#define  CSLR_R5FSS0_CORE0_INTR_MCAN0_MCAN_LVL_INT_1                 69
#define  CSLR_R5FSS0_CORE0_INTR_MCAN1_EXT_TS_ROLLOVER_LVL_INT_0      70
#define  CSLR_R5FSS0_CORE0_INTR_MCAN1_MCAN_LVL_INT_0                 71
#define  CSLR_R5FSS0_CORE0_INTR_MCAN1_MCAN_LVL_INT_1                 72
#define  CSLR_R5FSS0_CORE0_INTR_UART0_IRQ                            73
#define  CSLR_R5FSS0_CORE0_INTR_UART1_IRQ                            74
#define  CSLR_R5FSS0_CORE0_INTR_UART2_IRQ                            75
#define  CSLR_R5FSS0_CORE0_INTR_UART3_IRQ                            76
#define  CSLR_R5FSS0_CORE0_INTR_UART4_IRQ                            77
#define  CSLR_R5FSS0_CORE0_INTR_UART5_IRQ                            78
#define  CSLR_R5FSS0_CORE0_INTR_I2C0_IRQ                             79
#define  CSLR_R5FSS0_CORE0_INTR_I2C1_IRQ                             80
#define  CSLR_R5FSS0_CORE0_INTR_I2C2_IRQ                             81
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_SHA_S_INT                       82
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_SHA_P_INT                       83
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_TRNG_INT                        84
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_PKEV4_INT                       85
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_AES_S_INT                       86
#define  CSLR_R5FSS0_CORE0_INTR_DTHE_AES_P_INT                       87
#define  CSLR_R5FSS0_CORE0_INTR_OSPI0_INT                            88
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INTG                           89
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_0                          90
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_1                          91
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_2                          92
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_3                          93
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_4                          94
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_5                          95
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_6                          96
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INT_7                          97
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_ERRINT                         98
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_MPINT                          99
#define  CSLR_R5FSS0_CORE0_INTR_TPTC0_ERINT_0                        100
#define  CSLR_R5FSS0_CORE0_INTR_TPTC0_ERINT_1                        101
#define  CSLR_R5FSS0_CORE0_INTR_MCRC0_INT                            102
#define  CSLR_R5FSS0_CORE0_INTR_MPU_ADDR_ERRAGG                      103
#define  CSLR_R5FSS0_CORE0_INTR_MPU_PROT_ERRAGG                      104
#define  CSLR_R5FSS0_CORE0_INTR_PBIST_DONE                           105
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_INTAGGR                        106
#define  CSLR_R5FSS0_CORE0_INTR_TPCC0_ERRAGGR                        107
#define  CSLR_R5FSS0_CORE0_INTR_DCC0_DONE                            108
#define  CSLR_R5FSS0_CORE0_INTR_DCC1_DONE                            109
#define  CSLR_R5FSS0_CORE0_INTR_DCC2_DONE                            110
#define  CSLR_R5FSS0_CORE0_INTR_DCC3_DONE                            111
#define  CSLR_R5FSS0_CORE0_INTR_MCSPI0_INTR                          112
#define  CSLR_R5FSS0_CORE0_INTR_MCSPI1_INTR                          113
#define  CSLR_R5FSS0_CORE0_INTR_MCSPI2_INTR                          114
#define  CSLR_R5FSS0_CORE0_INTR_MCSPI3_INTR                          115
#define  CSLR_USB20_MAIN0_INT                                        116
#define  CSLR_USB20_MAIN1_INT                                        117
#define  CSLR_USB20_MAIN2_INT                                        118
#define  CSLR_USB20_MAIN3_INT                                        119
#define  CSLR_USB20_MISC_INT                                         120
#define  CSLR_USB20_PHY_WAKEUP_WUOUT                                 121
#define  CSLR_USB20_SLVP_SWAKEUP                                     122
#define  CSLR_R5FSS0_CORE0_INTR_MMC0_INTR                            123
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_INTR_0                          124
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_INTR_1                          125
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_INTR_2                          126
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_INTR_3                          127
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_OVERFLOW_INT0                   128
#define  CSLR_R5FSS0_CORE0_INTR_RTI0_OVERFLOW_INT1                   129
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_INTR_0                          130
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_INTR_1                          131
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_INTR_2                          132
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_INTR_3                          133
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_OVERFLOW_INT0                   134
#define  CSLR_R5FSS0_CORE0_INTR_RTI1_OVERFLOW_INT1                   135
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_INTR_0                          136
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_INTR_1                          137
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_INTR_2                          138
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_INTR_3                          139
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_OVERFLOW_INT0                   110
#define  CSLR_R5FSS0_CORE0_INTR_RTI2_OVERFLOW_INT1                   141
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_INTR_0                          142
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_INTR_1                          143
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_INTR_2                          144
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_INTR_3                          145
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_OVERFLOW_INT0                   146
#define  CSLR_R5FSS0_CORE0_INTR_RTI3_OVERFLOW_INT1                   147
#define  CSLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_CFG                     148
#define  CSLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_HI                      149
#define  CSLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_LOW                     150
#define  CSLR_R5FSS0_CORE0_INTR_ERRPIN_MON_LVL_INTR                  151
#define  CSLR_R5FSS0_CORE0_INTR_MMR_ACC_ERRAGG                       152
#define  CSLR_R5FSS0_CORE0_INTR_SW_IRQ                               153
#define  CSLR_R5FSS0_CORE0_INTR_RTI_WDT0_NMI                         154
#define  CSLR_R5FSS0_CORE0_INTR_DEBUGSS_TXDATA_AVAIL                 155
#define  CSLR_R5FSS0_CORE0_INTR_TSENSE_H                             156
#define  CSLR_R5FSS0_CORE0_INTR_TSENSE_L                             157
#define  CSLR_R5FSS0_CORE0_INTR_MBOX_READ_REQ                        158
#define  CSLR_R5FSS0_CORE0_INTR_MBOX_READ_ACK                        159
#define  CSLR_R5FSS0_CORE0_INTR_SOC_TIMESYNCXBAR1_OUT_2              160
#define  CSLR_R5FSS0_CORE0_INTR_SOC_TIMESYNCXBAR1_OUT_3              161
#define  CSLR_R5FSS0_CORE0_INTR_SOC_TIMESYNCXBAR1_OUT_4              162
#define  CSLR_R5FSS0_CORE0_INTR_SOC_TIMESYNCXBAR1_OUT_5              163
#define  CSLR_R5FSS0_CORE0_INTR_GPIO_INTRXBAR_OUT_14                 164
#define  CSLR_R5FSS0_CORE0_INTR_GPIO_INTRXBAR_OUT_15                 165
#define  CSLR_R5FSS0_CORE0_INTR_GPIO_INTRXBAR_OUT_16                 166
#define  CSLR_R5FSS0_CORE0_INTR_GPIO_INTRXBAR_OUT_17                 167
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_0                 168
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_1                 169
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_2                 170
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_3                 171
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_4                 172
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_5                 173
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_6                 174
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_7                 175
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_8                 176
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_9                 177
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_10                178
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_11                179
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_12                180
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_13                181
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_14                182
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_15                183
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_16                184
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_17                185
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_18                186
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_19                187
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_20                188
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_21                189
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_22                190
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_23                191
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_24                192
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_25                193
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_26                194
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_27                195
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_28                196
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_29                197
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_30                198
#define  CSLR_R5FSS0_CORE0_CONTROLSS_INTRXBAR0_OUT_31                199
#define  CSLR_R5FSS0_CORE0_INTR_FSS_VBUSM_TIMEOUT                    200
#define  CSLR_R5FSS0_CORE0_INTR_OTFA_ERROR                           201
#define  CSLR_R5FSS0_CORE0_INTR_FOTA_STAT_INTR                  	 202
#define  CSLR_R5FSS0_CORE0_INTR_FOTA_STAT_ERR_INTR	                 203
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_COMMRX_0                       204
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_COMMTX_0                       205
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_CTI_INT                   206
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU1_CTI_INT                   207
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_VALFIQ                    208
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_VALIRQ                    209
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_LIVELOCK_1                     210
#define  CSLR_R5FSS0_CORE0_INTR_R5SS1_LIVELOCK_1                     211
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CORE0_FPU_EXP                  212
#define  CSLR_R5FSS0_CORE0_INTR_AHB_WRITE_ERR                        213
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_RL2_ERR_INTR              214
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU1_RL2_ERR_INTR              215
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_TMU_LVF                   216
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_TMU_LUF                   217
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU0_PMU_INT                   218
#define  CSLR_R5FSS0_CORE0_GPMC_SINTR                                219
#define  CSLR_R5FSS0_CORE0_ELM_SINTR                                 220
#define  CSLR_R5FSS0_CORE0_INTR_OSPI1_INT                            221
#define  CSLR_R5FSS0_CORE0_INTR_R5SS0_CPU1_PMU_INT                   222


#ifdef __cplusplus
}
#endif
#endif /* CSLR_R5FSS0_CORE0_INTERRUPT_MAP_H_ */
