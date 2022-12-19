/********************************************************************
*
* R5FSS0_CORE0 INTERRUPT MAP. header file
*
* Copyright (C) 2023 Texas Instruments Incorporated.
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
#ifndef SDLR_R5FSS0_CORE0_INTERRUPT_MAP_H_
#define SDLR_R5FSS0_CORE0_INTERRUPT_MAP_H_


#ifdef __cplusplus
extern "C"
{
#endif

/*
* List of intr sources for receiver: R5FSS0_CORE0
*/

#define SDLR_R5FSS0_CORE0_INTR_RTI8_INTR_WWD_0                                                     (0U)
#define SDLR_R5FSS0_CORE0_INTR_DMSC0_AES_0_HIB_PUBLIC_0                                            (1U)
#define SDLR_R5FSS0_CORE0_INTR_DMSC0_AES_0_HIB_SECURE_0                                            (2U)
#define SDLR_R5FSS0_CORE0_INTR_DMSC0_DBG_AUTH_0_DEBUG_AUTH_INTR_0                                  (3U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE0_EXP_INTR_0                                             (4U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_COMMON0_COMMRX_LEVEL_0_0                                     (5U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_COMMON0_COMMTX_LEVEL_0_0                                     (6U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_72                              (8U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_73                              (9U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_74                              (10U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_75                              (11U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_76                              (12U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_77                              (13U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_78                              (14U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_79                              (15U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX0_FSI_RX_OINT1_0                                               (16U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX0_FSI_RX_OINT2_0                                               (17U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX1_FSI_RX_OINT1_0                                               (18U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX1_FSI_RX_OINT2_0                                               (19U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX2_FSI_RX_OINT1_0                                               (20U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX2_FSI_RX_OINT2_0                                               (21U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX3_FSI_RX_OINT1_0                                               (22U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX3_FSI_RX_OINT2_0                                               (23U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX4_FSI_RX_OINT1_0                                               (24U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX4_FSI_RX_OINT2_0                                               (25U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX5_FSI_RX_OINT1_0                                               (26U)
#define SDLR_R5FSS0_CORE0_INTR_FSIRX5_FSI_RX_OINT2_0                                               (27U)
#define SDLR_R5FSS0_CORE0_INTR_FSITX0_FSI_TX_OINT1_0                                               (28U)
#define SDLR_R5FSS0_CORE0_INTR_FSITX0_FSI_TX_OINT2_0                                               (29U)
#define SDLR_R5FSS0_CORE0_INTR_FSITX1_FSI_TX_OINT1_0                                               (30U)
#define SDLR_R5FSS0_CORE0_INTR_FSITX1_FSI_TX_OINT2_0                                               (31U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_0                                      (32U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_1                                      (33U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_2                                      (34U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_3                                      (35U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_4                                      (36U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_5                                      (37U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_6                                      (38U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_7                                      (39U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_8                                      (40U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_9                                      (41U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_10                                     (42U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_11                                     (43U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_12                                     (44U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_13                                     (45U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_14                                     (46U)
#define SDLR_R5FSS0_CORE0_INTR_MAIN_GPIOMUX_INTROUTER0_OUTP_15                                     (47U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_16                                        (48U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_17                                        (49U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_18                                        (50U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_19                                        (51U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_20                                        (52U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_21                                        (53U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_22                                        (54U)
#define SDLR_R5FSS0_CORE0_INTR_CMP_EVENT_INTROUTER0_OUTP_23                                        (55U)
#define SDLR_R5FSS0_CORE0_INTR_DMSC0_CORTEX_M3_0_SEC_OUT_0                                         (56U)
#define SDLR_R5FSS0_CORE0_INTR_DMSC0_CORTEX_M3_0_SEC_OUT_1                                         (57U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE0_PMU_0                                                  (58U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE0_VALFIQ_0                                               (59U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE0_VALIRQ_0                                               (60U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_I2C0_POINTRPEND_0                                               (61U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_I2C1_POINTRPEND_0                                               (62U)
#define SDLR_R5FSS0_CORE0_INTR_MCSPI3_INTR_SPI_0                                                   (63U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_40                              (64U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_41                              (65U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_42                              (66U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_43                              (67U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_44                              (68U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_45                              (69U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_46                              (70U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_47                              (71U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_48                              (72U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_49                              (73U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_50                              (74U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_51                              (75U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_52                              (76U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_53                              (77U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_54                              (78U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_55                              (79U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_56                              (80U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_57                              (81U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_58                              (82U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_59                              (83U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_60                              (84U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_61                              (85U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_62                              (86U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_63                              (87U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_64                              (88U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_65                              (89U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_66                              (90U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_67                              (91U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_68                              (92U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_69                              (93U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_70                              (94U)
#define SDLR_R5FSS0_CORE0_INTR_DMASS0_INTAGGR_0_INTAGGR_VINTR_PEND_71                              (95U)
#define SDLR_R5FSS0_CORE0_INTR_MAILBOX0_MAILBOX_CLUSTER_0_MAILBOX_CLUSTER_PEND_0                   (96U)
#define SDLR_R5FSS0_CORE0_INTR_MAILBOX0_MAILBOX_CLUSTER_1_MAILBOX_CLUSTER_PEND_0                   (97U)
#define SDLR_R5FSS0_CORE0_INTR_MAILBOX0_MAILBOX_CLUSTER_2_MAILBOX_CLUSTER_PEND_0                   (98U)
#define SDLR_R5FSS0_CORE0_INTR_MAILBOX0_MAILBOX_CLUSTER_3_MAILBOX_CLUSTER_PEND_0                   (99U)
#define SDLR_R5FSS0_CORE0_INTR_MAILBOX0_MAILBOX_CLUSTER_6_MAILBOX_CLUSTER_PEND_0                   (100U)
#define SDLR_R5FSS0_CORE0_INTR_GLUELOGIC_MAINRESET_REQUEST_GLUE_MAIN_RESETZ_SYNC_STRETCH_0         (101U)
#define SDLR_R5FSS0_CORE0_INTR_GLUELOGIC_MAINRESET_REQUEST_GLUE_MAIN_PORZ_SYNC_STRETCH_0           (102U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_DPA_PULSE_0                                              (103U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCU_GPIOMUX_INTROUTER0_OUTP_0                                   (104U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCU_GPIOMUX_INTROUTER0_OUTP_1                                   (105U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCU_GPIOMUX_INTROUTER0_OUTP_2                                   (106U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCU_GPIOMUX_INTROUTER0_OUTP_3                                   (107U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM0_EPWM_ETINT_0                                                  (108U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM0_EPWM_TRIPZINT_0                                               (109U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM1_EPWM_ETINT_0                                                  (110U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM1_EPWM_TRIPZINT_0                                               (111U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM2_EPWM_ETINT_0                                                  (112U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM2_EPWM_TRIPZINT_0                                               (113U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM3_EPWM_ETINT_0                                                  (114U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM3_EPWM_TRIPZINT_0                                               (115U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM4_EPWM_ETINT_0                                                  (116U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM4_EPWM_TRIPZINT_0                                               (117U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM5_EPWM_ETINT_0                                                  (118U)
#define SDLR_R5FSS0_CORE0_INTR_CTRL_MMR0_ACCESS_ERR_0                                              (119U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_0                                     (120U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_1                                     (121U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_2                                     (122U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_3                                     (123U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_4                                     (124U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_5                                     (125U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_6                                     (126U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_HOST_INTR_PEND_7                                     (127U)
#define SDLR_R5FSS0_CORE0_INTR_ADC0_GEN_LEVEL_0                                                    (128U)
#define SDLR_R5FSS0_CORE0_INTR_CPTS0_EVNT_PEND_0                                                   (129U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_CTRL_MMR0_ACCESS_ERR_0                                          (130U)
#define SDLR_R5FSS0_CORE0_INTR_PADCFG_CTRL0_ACCESS_ERR_0                                           (131U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_PADCFG_CTRL0_ACCESS_ERR_0                                       (132U)
#define SDLR_R5FSS0_CORE0_INTR_GLUELOGIC_CBASS_INTR_OR_GLUE_MAIN_CBASS_AGG_ERR_INTR_0              (133U)
#define SDLR_R5FSS0_CORE0_INTR_CPSW0_EVNT_PEND_0                                                   (134U)
#define SDLR_R5FSS0_CORE0_INTR_CPSW0_MDIO_PEND_0                                                   (135U)
#define SDLR_R5FSS0_CORE0_INTR_CPSW0_STAT_PEND_0                                                   (136U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_DCC0_INTR_DONE_LEVEL_0                                          (137U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM5_EPWM_TRIPZINT_0                                               (139U)
#define SDLR_R5FSS0_CORE0_INTR_ECAP0_ECAP_INT_0                                                    (140U)
#define SDLR_R5FSS0_CORE0_INTR_ECAP1_ECAP_INT_0                                                    (141U)
#define SDLR_R5FSS0_CORE0_INTR_ECAP2_ECAP_INT_0                                                    (142U)
#define SDLR_R5FSS0_CORE0_INTR_EQEP0_EQEP_INT_0                                                    (143U)
#define SDLR_R5FSS0_CORE0_INTR_EQEP1_EQEP_INT_0                                                    (144U)
#define SDLR_R5FSS0_CORE0_INTR_EQEP2_EQEP_INT_0                                                    (145U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM6_EPWM_ETINT_0                                                  (146U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM6_EPWM_TRIPZINT_0                                               (147U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM7_EPWM_ETINT_0                                                  (148U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM7_EPWM_TRIPZINT_0                                               (149U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM8_EPWM_ETINT_0                                                  (150U)
#define SDLR_R5FSS0_CORE0_INTR_DDR16SS0_DDRSS_CONTROLLER_0                                         (151U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER0_INTR_PEND_0                                                  (152U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER1_INTR_PEND_0                                                  (153U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER2_INTR_PEND_0                                                  (154U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER3_INTR_PEND_0                                                  (155U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER4_INTR_PEND_0                                                  (156U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER5_INTR_PEND_0                                                  (157U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER6_INTR_PEND_0                                                  (158U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER7_INTR_PEND_0                                                  (159U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER8_INTR_PEND_0                                                  (160U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER9_INTR_PEND_0                                                  (161U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER10_INTR_PEND_0                                                 (162U)
#define SDLR_R5FSS0_CORE0_INTR_TIMER11_INTR_PEND_0                                                 (163U)
#define SDLR_R5FSS0_CORE0_INTR_ELM0_ELM_POROCPSINTERRUPT_LVL_0                                     (164U)
#define SDLR_R5FSS0_CORE0_INTR_MMCSD0_EMMCSS_INTR_0                                                (165U)
#define SDLR_R5FSS0_CORE0_INTR_MMCSD1_EMMCSDSS_INTR_0                                              (166U)
#define SDLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_CFG_LVL_0                                              (167U)
#define SDLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_HI_LVL_0                                               (168U)
#define SDLR_R5FSS0_CORE0_INTR_ESM0_ESM_INT_LOW_LVL_0                                              (169U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_ISO_RESET_PROTCOL_ACK_0                                  (170U)
#define SDLR_R5FSS0_CORE0_INTR_FSS0_OSPI_0_OSPI_LVL_INTR_0                                         (171U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_ISO_RESET_PROTCOL_ACK_0                                  (172U)
#define SDLR_R5FSS0_CORE0_INTR_GICSS0_GIC_PWR0_WAKE_REQUEST_0                                      (173U)
#define SDLR_R5FSS0_CORE0_INTR_GICSS0_GIC_PWR0_WAKE_REQUEST_1                                      (174U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE0_CTI_0                                                  (175U)
#define SDLR_R5FSS0_CORE0_INTR_R5FSS0_CORE1_CTI_0                                                  (176U)
#define SDLR_R5FSS0_CORE0_INTR_DDPA0_DDPA_INTR_0                                                   (177U)
#define SDLR_R5FSS0_CORE0_INTR_EPWM8_EPWM_TRIPZINT_0                                               (178U)
#define SDLR_R5FSS0_CORE0_INTR_SERDES_10G0_PHY_PWR_TIMEOUT_LVL_0                                   (180U)
#define SDLR_R5FSS0_CORE0_INTR_DDR16SS0_DDRSS_PLL_FREQ_CHANGE_REQ_0                                (181U)
#define SDLR_R5FSS0_CORE0_INTR_GLUELOGIC_DCC_DONE_GLUE_MAIN_DCC_DONE_0                             (182U)
#define SDLR_R5FSS0_CORE0_INTR_VTM0_THERM_LVL_GT_TH1_INTR_0                                        (183U)
#define SDLR_R5FSS0_CORE0_INTR_VTM0_THERM_LVL_GT_TH2_INTR_0                                        (184U)
#define SDLR_R5FSS0_CORE0_INTR_VTM0_THERM_LVL_LT_TH0_INTR_0                                        (185U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN0_MCANSS_EXT_TS_ROLLOVER_LVL_INT_0                              (186U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN0_MCANSS_MCAN_LVL_INT_0                                         (187U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN0_MCANSS_MCAN_LVL_INT_1                                         (188U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN1_MCANSS_EXT_TS_ROLLOVER_LVL_INT_0                              (189U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN1_MCANSS_MCAN_LVL_INT_0                                         (190U)
#define SDLR_R5FSS0_CORE0_INTR_MCAN1_MCANSS_MCAN_LVL_INT_1                                         (191U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCRC64_0_INT_MCRC_0                                             (192U)
#define SDLR_R5FSS0_CORE0_INTR_I2C0_POINTRPEND_0                                                   (193U)
#define SDLR_R5FSS0_CORE0_INTR_I2C1_POINTRPEND_0                                                   (194U)
#define SDLR_R5FSS0_CORE0_INTR_I2C2_POINTRPEND_0                                                   (195U)
#define SDLR_R5FSS0_CORE0_INTR_I2C3_POINTRPEND_0                                                   (196U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_PWR_STATE_PULSE_0                                        (197U)
#define SDLR_R5FSS0_CORE0_INTR_GLUELOGIC_GLUE_EXT_INTN_OUT_0                                       (198U)
#define SDLR_R5FSS0_CORE0_INTR_SA2_UL0_SA_UL_PKA_0                                                 (199U)
#define SDLR_R5FSS0_CORE0_INTR_SA2_UL0_SA_UL_TRNG_0                                                (200U)
#define SDLR_R5FSS0_CORE0_INTR_DEBUGSS0_AQCMPINTR_LEVEL_0                                          (201U)
#define SDLR_R5FSS0_CORE0_INTR_DEBUGSS0_CTM_LEVEL_0                                                (202U)
#define SDLR_R5FSS0_CORE0_INTR_PSC0_PSC_ALLINT_0                                                   (203U)
#define SDLR_R5FSS0_CORE0_INTR_MCSPI0_INTR_SPI_0                                                   (204U)
#define SDLR_R5FSS0_CORE0_INTR_MCSPI1_INTR_SPI_0                                                   (205U)
#define SDLR_R5FSS0_CORE0_INTR_MCSPI2_INTR_SPI_0                                                   (206U)
#define SDLR_R5FSS0_CORE0_INTR_MCSPI4_INTR_SPI_0                                                   (207U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCSPI0_INTR_SPI_0                                               (208U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_MCSPI1_INTR_SPI_0                                               (209U)
#define SDLR_R5FSS0_CORE0_INTR_UART0_USART_IRQ_0                                                   (210U)
#define SDLR_R5FSS0_CORE0_INTR_UART1_USART_IRQ_0                                                   (211U)
#define SDLR_R5FSS0_CORE0_INTR_UART2_USART_IRQ_0                                                   (212U)
#define SDLR_R5FSS0_CORE0_INTR_UART3_USART_IRQ_0                                                   (213U)
#define SDLR_R5FSS0_CORE0_INTR_UART4_USART_IRQ_0                                                   (214U)
#define SDLR_R5FSS0_CORE0_INTR_UART5_USART_IRQ_0                                                   (215U)
#define SDLR_R5FSS0_CORE0_INTR_UART6_USART_IRQ_0                                                   (216U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_UART0_USART_IRQ_0                                               (217U)
#define SDLR_R5FSS0_CORE0_INTR_MCU_UART1_USART_IRQ_0                                               (218U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_HOST_SYSTEM_ERROR_0                                            (219U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_0                                                          (220U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_1                                                          (221U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_2                                                          (222U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_3                                                          (223U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_4                                                          (224U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_5                                                          (225U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_6                                                          (226U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_IRQ_7                                                          (227U)
#define SDLR_R5FSS0_CORE0_INTR_USB0_OTGIRQ_0                                                       (228U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_CPTS_PEND_0                                              (229U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_DOWNSTREAM_PULSE_0                                       (230U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_FLR_PULSE_0                                              (231U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_ERROR_PULSE_0                                            (232U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_HOT_RESET_PULSE_0                                        (233U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_LEGACY_PULSE_0                                           (234U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_LINK_STATE_PULSE_0                                       (235U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_LOCAL_LEVEL_0                                            (236U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_PHY_LEVEL_0                                              (237U)
#define SDLR_R5FSS0_CORE0_INTR_PCIE0_PCIE_PTM_VALID_PULSE_0                                        (238U)
#define SDLR_R5FSS0_CORE0_INTR_GPMC0_GPMC_SINTERRUPT_0                                             (239U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_RX_SOF_INTR_REQ_0                                    (240U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_RX_SOF_INTR_REQ_1                                    (241U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_TX_SOF_INTR_REQ_0                                    (242U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_TX_SOF_INTR_REQ_1                                    (243U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_RX_SOF_INTR_REQ_0                                    (244U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_RX_SOF_INTR_REQ_1                                    (245U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_TX_SOF_INTR_REQ_0                                    (246U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG0_PR1_TX_SOF_INTR_REQ_1                                    (247U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_0                                     (248U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_1                                     (249U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_2                                     (250U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_3                                     (251U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_4                                     (252U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_5                                     (253U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_6                                     (254U)
#define SDLR_R5FSS0_CORE0_INTR_PRU_ICSSG1_PR1_HOST_INTR_PEND_7                                     (255U)

#ifdef __cplusplus
}
#endif
#endif /* SDLR_R5FSS0_CORE0_INTERRUPT_MAP_H_ */

