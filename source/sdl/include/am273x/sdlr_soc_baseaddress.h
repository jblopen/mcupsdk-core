/********************************************************************
*
* SOC memory map header file
*
* Copyright (C) 2022 Texas Instruments Incorporated.
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
*/
#ifndef SDLR_SOC_BASEADDRESS_H
#define SDLR_SOC_BASEADDRESS_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Global addresses in unified address space */
#define SDL_MSS_SPIA_RAM_U_BASE                 (0x2000000U)
#define SDL_MSS_SPIA_RAM_U_SIZE                 (0x0000100U)
#define SDL_MSS_SPIB_RAM_U_BASE                 (0x2020000U)
#define SDL_MSS_SPIB_RAM_U_SIZE                 (0x0000100U)
#define SDL_MSS_MCANA_MSG_RAM_U_BASE            (0x2040000U)
#define SDL_MSS_MCANA_MSG_RAM_U_SIZE            (0x0011000U)
#define SDL_MSS_VIM_R5A_U_BASE                  (0x2080000U)
#define SDL_MSS_VIM_R5B_U_BASE                  (0x20A0000U)
#define SDL_MSS_IOMUX_U_BASE                    (0x20C0000U)
#define SDL_MSS_RCM_U_BASE                      (0x2100000U)
#define SDL_MSS_CTRL_U_BASE                     (0x2120000U)
#define SDL_MSS_TOPRCM_U_BASE                   (0x2140000U)
#define SDL_MSS_DEBUGSS_U_BASE                  (0x2A00000U)
#define SDL_MSS_PCR1_U_BASE                     (0x2F78000U)
#define SDL_TOP_PBIST_U_BASE                    (0x2F79400U)
#define SDL_MSS_R5SS_STC_U_BASE                 (0x2F79800U)
#define SDL_MSS_DCCA_U_BASE                     (0x2F79C00U)
#define SDL_MSS_DCCB_U_BASE                     (0x2F79D00U)
#define SDL_MSS_DCCC_U_BASE                     (0x2F79E00U)
#define SDL_MSS_DCCD_U_BASE                     (0x2F79F00U)
#define SDL_MSS_RTIA_U_BASE                     (0x2F7A000U)
#define SDL_MSS_RTIB_U_BASE                     (0x2F7A100U)
#define SDL_MSS_RTIC_U_BASE                     (0x2F7A200U)
#define SDL_MSS_WDT_U_BASE                      (0x2F7A300U)
#define SDL_MSS_ESM_U_BASE                      (0x2F7A400U)
#define SDL_TOP_EFUSE_FARM_U_BASE               (0x2F7A800U)
#define SDL_MSS_CCMR_U_BASE                     (0x2F7AC00U)
#define SDL_MSS_I2C_U_BASE                      (0x2F7B000U)
#define SDL_MSS_GIO_U_BASE                      (0x2F7B400U)
#define SDL_MSS_ECC_AGG_R5A_U_BASE              (0x2F7B800U)
#define SDL_MSS_ECC_AGG_R5B_U_BASE              (0x2F7BC00U)
#define SDL_MSS_ECC_AGG_MSS_U_BASE              (0x2F7C000U)
#define SDL_MSS_SPIA_U_BASE                     (0x2F7E800U)
#define SDL_MSS_SPIB_U_BASE                     (0x2F7EA00U)
#define SDL_MSS_SCIA_U_BASE                     (0x2F7EC00U)
#define SDL_MSS_SCIB_U_BASE                     (0x2F7ED00U)
#define SDL_MSS_MCANA_ECC_U_BASE                (0x2F7F800U)
#define SDL_MSS_MCANA_CFG_U_BASE                (0x2F7FC00U)
#define SDL_MSS_MCANB_MSG_RAM_U_BASE            (0x3040000U)
#define SDL_MSS_MCANB_MSG_RAM_U_SIZE            (0x0011000U)
#define SDL_TOP_AURORA_TX_U_BASE                (0x3060000U)
#define SDL_TOP_MDO_INFRA_U_BASE                (0x3080000U)
#define SDL_MSS_GPADC_PKT_RAM_U_BASE            (0x30C0000U)
#define SDL_MSS_GPADC_PKT_RAM_U_SIZE            (0x0000800U)
#define SDL_TOP_CTRL_U_BASE                     (0x30E0000U)
#define SDL_MSS_TPCC_A_U_BASE                   (0x3100000U)
#define SDL_MSS_TPCC_B_U_BASE                   (0x3120000U)
#define SDL_MSS_TPTC_A0_U_BASE                  (0x3140000U)
#define SDL_MSS_TPTC_A1_U_BASE                  (0x3160000U)
#define SDL_MSS_TPTC_B0_U_BASE                  (0x3180000U)
#define SDL_MSS_PCR2_U_BASE                     (0x3F78000U)
#define SDL_MSS_ETPWMA_U_BASE                   (0x3F78C00U)
#define SDL_MSS_ETPWMB_U_BASE                   (0x3F78D00U)
#define SDL_MSS_ETPWMC_U_BASE                   (0x3F78E00U)
#define SDL_MSS_GPADC_REG_U_BASE                (0x3F79800U)
#define SDL_MSS_DMM_A_U_BASE                    (0x3F79C00U)
#define SDL_MSS_DMM_B_U_BASE                    (0x3F79E00U)
#define SDL_MSS_MCANB_ECC_U_BASE                (0x3F7F800U)
#define SDL_MSS_MCANB_CFG_U_BASE                (0x3F7FC00U)
#define SDL_RCSS_RCM_U_BASE                     (0x5000000U)
#define SDL_RCSS_CTRL_U_BASE                    (0x5020000U)
#define SDL_RCSS_SPIA_RAM_U_BASE                (0x5040000U)
#define SDL_RCSS_SPIA_RAM_U_SIZE                (0x0000100U)
#define SDL_RCSS_SPIB_RAM_U_BASE                (0x5060000U)
#define SDL_RCSS_SPIB_RAM_U_SIZE                (0x0000100U)
#define SDL_RCSS_CSI2A_U_BASE                   (0x5080000U)
#define SDL_RCSS_CSI2B_U_BASE                   (0x50A0000U)
#define SDL_RCSS_SCI_A_U_BASE                   (0x50C0000U)
#define SDL_RCSS_TPCC_A_U_BASE                  (0x5100000U)
#define SDL_RCSS_TPTC_A0_U_BASE                 (0x5160000U)
#define SDL_RCSS_TPTC_A1_U_BASE                 (0x5180000U)
#define SDL_RCSS_MCASP_A_U_BASE                 (0x51E0000U)
#define SDL_RCSS_MCASP_B_U_BASE                 (0x5200000U)
#define SDL_RCSS_MCASP_C_U_BASE                 (0x5220000U)
#define SDL_RCSS_ATL_U_BASE                     (0x5240000U)
#define SDL_RCSS_PCR_U_BASE                     (0x5F78000U)
#define SDL_RCSS_ECAP_U_BASE                    (0x5F79C00U)
#define SDL_RCSS_GIO_U_BASE                     (0x5F7B400U)
#define SDL_RCSS_SPIA_U_BASE                    (0x5F7E800U)
#define SDL_RCSS_SPIB_U_BASE                    (0x5F7EA00U)
#define SDL_RCSS_I2CA_U_BASE                    (0x5F7EC00U)
#define SDL_RCSS_I2CB_U_BASE                    (0x5F7F000U)
#define SDL_DSS_RCM_U_BASE                      (0x6000000U)
#define SDL_DSS_CTRL_U_BASE                     (0x6020000U)
#define SDL_DSS_CBUFF_U_BASE                    (0x6040000U)
#define SDL_DSS_HWA_PARAM_U_BASE                (0x6060000U)
#define SDL_DSS_HWA_CFG_U_BASE                  (0x6062000U)
#define SDL_DSS_HWA_WINDOW_RAM_U_BASE           (0x6064000U)
#define SDL_DSS_HWA_WINDOW_RAM_U_SIZE           (0x0002000U)
#define SDL_DSS_HWA_MULT_RAM_U_BASE             (0x6068000U)
#define SDL_DSS_HWA_MULT_RAM_U_SIZE             (0x0002000U)
#define SDL_DSS_HWA_DEROT_RAM_U_BASE            (0x606C000U)
#define SDL_DSS_HWA_DEROT_RAM_U_SIZE            (0x0000100U)
#define SDL_DSS_HWA_SHUFFLE_RAM_U_BASE          (0x606E000U)
#define SDL_DSS_HWA_SHUFFLE_RAM_U_SIZE          (0x0000200U)
#define SDL_DSS_HWA_2DSTAT_ITER_VAL_RAM_U_BASE  (0x6080000U)
#define SDL_DSS_HWA_2DSTAT_ITER_VAL_RAM_U_SIZE  (0x0001000U)
#define SDL_DSS_HWA_2DSTAT_ITER_IDX_RAM_U_BASE  (0x6082000U)
#define SDL_DSS_HWA_2DSTAT_ITER_IDX_RAM_U_SIZE  (0x0000800U)
#define SDL_DSS_HWA_2DSTAT_SMPL_VAL_RAM_U_BASE  (0x6084000U)
#define SDL_DSS_HWA_2DSTAT_SMPL_VAL_RAM_U_SIZE  (0x0000400U)
#define SDL_DSS_HWA_2DSTAT_SMPL_IDX_RAM_U_BASE  (0x6086000U)
#define SDL_DSS_HWA_2DSTAT_SMPL_IDX_RAM_U_SIZE  (0x0000200U)
#define SDL_DSS_HWA_HIST_RAM_U_BASE             (0x6088000U)
#define SDL_DSS_HWA_HIST_RAM_U_SIZE             (0x0002000U)
#define SDL_DSS_HWA_HIST_THRESH_RAM_U_BASE      (0x608C000U)
#define SDL_DSS_HWA_HIST_THRESH_RAM_U_SIZE      (0x0000100U)
#define SDL_DSS_ECC_AGG_U_BASE                  (0x60A0000U)
#define SDL_DSS_ECC_AGG_U_SIZE                  (0x00000210)
#define SDL_DSS_TPCC_A_U_BASE                   (0x6100000U)
#define SDL_DSS_TPCC_B_U_BASE                   (0x6120000U)
#define SDL_DSS_TPCC_C_U_BASE                   (0x6140000U)
#define SDL_DSS_TPTC_A0_U_BASE                  (0x6160000U)
#define SDL_DSS_TPTC_A1_U_BASE                  (0x6180000U)
#define SDL_DSS_TPTC_B0_U_BASE                  (0x61A0000U)
#define SDL_DSS_TPTC_B1_U_BASE                  (0x61C0000U)
#define SDL_DSS_TPTC_C0_U_BASE                  (0x61E0000U)
#define SDL_DSS_TPTC_C1_U_BASE                  (0x6200000U)
#define SDL_DSS_TPTC_C2_U_BASE                  (0x6220000U)
#define SDL_DSS_TPTC_C3_U_BASE                  (0x6240000U)
#define SDL_DSS_TPTC_C4_U_BASE                  (0x6260000U)
#define SDL_DSS_TPTC_C5_U_BASE                  (0x6280000U)
#define SDL_DSS_PCR_U_BASE                      (0x6F78000U)
#define SDL_DSS_DSP_PBIST_U_BASE                (0x6F79000U)
#define SDL_DSS_DSP_STC_U_BASE                  (0x6F79200U)
#define SDL_DSS_CM4_STC_U_BASE                  (0x6F79400U)
#define SDL_DSS_DCCA_U_BASE                     (0x6F79C00U)
#define SDL_DSS_DCCB_U_BASE                     (0x6F79D00U)
#define SDL_DSS_RTIA_U_BASE                     (0x6F7A000U)
#define SDL_DSS_RTIB_U_BASE                     (0x6F7A100U)
#define SDL_DSS_WDT_U_BASE                      (0x6F7A200U)
#define SDL_DSS_SCIA_U_BASE                     (0x6F7B000U)
#define SDL_DSS_CMC_CFG_U_BASE                  (0x6F7C000U)
#define SDL_DSS_ESM_U_BASE                      (0x6F7D000U)
#define SDL_MSS_CPSW_U_BASE                     (0x7000000U)
#define SDL_MSS_L2_U_BASE                       (0x10200000U)
#define SDL_MSS_L2_U_SIZE                       (0x000F0000U)
#define SDL_HSM_ROM_U_BASE                      (0x20000000U)
#define SDL_HSM_ROM_U_SIZE                      (0x00010000U)
#define SDL_HSM_RAM_U_BASE                      (0x20020000U)
#define SDL_HSM_RAM_U_SIZE                      (0x00030000U)
#define SDL_DSS_CM4_RAM_U_BASE                  (0x28000000U)
#define SDL_DSS_CM4_RAM_U_SIZE                  (0x00010000U)
#define SDL_HSM_SOC_CTRL_U_BASE                 (0x40000000U)
#define SDL_MPU_MSS_L2_BANKA_U_BASE             (0x40020000U)
#define SDL_MPU_MSS_L2_BANKB_U_BASE             (0x40040000U)
#define SDL_MPU_DTHE_U_BASE                     (0x40060000U)
#define SDL_MPU_MSS_MBOX_U_BASE                 (0x40080000U)
#define SDL_MPU_MSS_PCRA_U_BASE                 (0x400A0000U)
#define SDL_MPU_MSS_QSPI_U_BASE                 (0x400C0000U)
#define SDL_MPU_MSS_CR5A_AXIS_U_BASE            (0x400E0000U)
#define SDL_MPU_MSS_CR5B_AXIS_U_BASE            (0x40100000U)
#define SDL_MPU_DSS_L3_BANKA_U_BASE             (0x40120000U)
#define SDL_MPU_DSS_L3_BANKB_U_BASE             (0x40140000U)
#define SDL_MPU_DSS_L3_BANKC_U_BASE             (0x40160000U)
#define SDL_MPU_DSS_L3_BANKD_U_BASE             (0x40180000U)
#define SDL_MPU_DSS_HWA_DMA0_U_BASE             (0x401A0000U)
#define SDL_MPU_DSS_HWA_DMA1_U_BASE             (0x401C0000U)
#define SDL_MPU_DSS_HWA_PROC_U_BASE             (0x401E0000U)
#define SDL_MPU_DSS_MBOX_U_BASE                 (0x40200000U)
#define SDL_MPU_HSM_BASE                        (0x40220000U)
#define SDL_HSM_SOC_PCR_U_BASE                  (0x40F78000U)
#define SDL_HSM_STC_U_BASE                      (0x40F78C00U)
#define SDL_HSM_PBIST_U_BASE                    (0x40F79000U)
#define SDL_HSM_ECC_AGGR_U_BASE                 (0x40F79400U)
#define SDL_HSM_MBOX_U_BASE                     (0x44000000U)
#define SDL_HSM_SEC_MGR_U_BASE                  (0x46000000U)
#define SDL_HSM_SEC_RAM_U_BASE                  (0x46050000U)
#define SDL_HSM_SEC_RAM_U_SIZE                  (0x00002800U)
#define SDL_HSM_CTRL_U_BASE                     (0x47000000U)
#define SDL_HSM_TPCCA_U_BASE                    (0x47020000U)
#define SDL_HSM_TPTCA0_U_BASE                   (0x47040000U)
#define SDL_HSM_TPTCA1_U_BASE                   (0x47060000U)
#define SDL_HSM_PCR_U_BASE                      (0x47F78000U)
#define SDL_HSM_RTIA_U_BASE                     (0x47F78C00U)
#define SDL_HSM_WDT_U_BASE                      (0x47F78D00U)
#define SDL_HSM_DCCA_U_BASE                     (0x47F79000U)
#define SDL_HSM_ESM_U_BASE                      (0x47F79400U)
#define SDL_HSM_DMTA_U_BASE                     (0x47F79800U)
#define SDL_HSM_DMTB_U_BASE                     (0x47F79900U)
#define SDL_HSM_DMTC_U_BASE                     (0x47F79A00U)
#define SDL_HSM_DMTD_U_BASE                     (0x47F79B00U)
#define SDL_DSS_CM4_MBOX_U_BASE                 (0x48000000U)
#define SDL_DSS_CM4_CTRL_U_BASE                 (0x48020000U)
#define SDL_DSS_L2_U_BASE                       (0x80800000U)
#define SDL_DSS_L2_U_SIZE                       (0x00060000U)
#define SDL_DSS_L1P_U_BASE                      (0x80E00000U)
#define SDL_DSS_L1P_U_SIZE                      (0x00008000U)
#define SDL_DSS_L1D_U_BASE                      (0x80F00000U)
#define SDL_DSS_L1D_U_SIZE                      (0x00008000U)
#define SDL_DSS_HWA_DMA0_U_BASE                 (0x82000000U)
#define SDL_DSS_HWA_DMA0_U_SIZE                 (0x00020000U)
#define SDL_DSS_HWA_DMA1_U_BASE                 (0x82100000U)
#define SDL_DSS_HWA_DMA1_U_SIZE                 (0x00020000U)
#define SDL_DSS_MAILBOX_U_BASE                  (0x83100000U)
#define SDL_DSS_MAILBOX_U_SIZE                  (0x00001000U)
#define SDL_DSS_CBUFF_FIFO_U_BASE               (0x83200000U)
#define SDL_DSS_MCRC_U_BASE                     (0x83300000U)
#define SDL_DSS_MDO_FIFO_U_BASE                 (0x83400000U)
#define SDL_DSS_MDO_FIFO_U_SIZE                 (0x00004000U)
#define SDL_DSS_CMC_UCOMP0_U_BASE               (0x85000000U)
#define SDL_DSS_CMC_UCOMP1_U_BASE               (0x85001000U)
#define SDL_DSS_CMC_UCOMP2_U_BASE               (0x85002000U)
#define SDL_DSS_CMC_UCOMP3_U_BASE               (0x85003000U)
#define SDL_DSS_CMC_COMP_U_BASE                 (0x85080000U)
#define SDL_DSS_L3_U_BASE                       (0x88000000U)
#define SDL_DSS_L3_U_SIZE                       (0x00390000U)
#define SDL_RCSS_ICSSM_DATARAMA_U_BASE          (0xA0000000U)
#define SDL_RCSS_ICSSM_DATARAMB_U_BASE          (0xA0002000U)
#define SDL_RCSS_ICSSM_DATARAMC_U_BASE          (0xA0010000U)
#define SDL_RCSS_ICSSM_INTC_U_BASE              (0xA0020000U)
#define SDL_RCSS_ICSSM_PRU0_CTRL_U_BASE         (0xA0022000U)
#define SDL_RCSS_ICSSM_PRU0_DEBUG_U_BASE        (0xA0022400U)
#define SDL_RCSS_ICSSM_CFG_U_BASE               (0xA0026000U)
#define SDL_RCSS_ICSSM_ECC_CFG_U_BASE           (0xA0027000U)
#define SDL_RCSS_ICSSM_UART_0_U_BASE            (0xA0028000U)
#define SDL_RCSS_ICSSM_IEP_U_BASE               (0xA002E000U)
#define SDL_RCSS_ICSSM_ECAP_U_BASE              (0xA0030000U)
#define SDL_RCSS_ICSSM_MII_RT_CFG_U_BASE        (0xA0032000U)
#define SDL_RCSS_ICSSM_MII_MDIO_U_BASE          (0xA0032400U)
#define SDL_RCSS_ICSSM_IRAMA_U_BASE             (0xA0034000U)
#define SDL_RCSS_ICSSM_IRAMB_U_BASE             (0xA0038000U)
#define SDL_RCSS_ICSSM_VBUSP_U_BASE             (0xA0040000U)
#define SDL_RCSS_MCASPA_DATA_U_BASE             (0xA0080000U)
#define SDL_RCSS_MCASPB_DATA_U_BASE             (0xA0080400U)
#define SDL_RCSS_MCASPC_DATA_U_BASE             (0xA0080C00U)
#define SDL_MSS_TCMA_CR5A_U_BASE                (0xC1000000U)
#define SDL_MSS_TCMA_CR5A_U_SIZE                (0x00008000U)
#define SDL_MSS_TCMB_CR5A_U_BASE                (0xC1800000U)
#define SDL_MSS_TCMB_CR5A_U_SIZE                (0x00008000U)
#define SDL_MSS_ICACHE_CR5A_U_BASE              (0xC2000000U)
#define SDL_MSS_DCACHE_CR5A_U_BASE              (0xC2800000U)
#define SDL_MSS_TCMA_CR5B_U_BASE                (0xC3000000U)
#define SDL_MSS_TCMA_CR5B_U_SIZE                (0x00004000U)
#define SDL_MSS_TCMB_CR5B_U_BASE                (0xC3800000U)
#define SDL_MSS_TCMB_CR5B_U_SIZE                (0x00004000U)
#define SDL_MSS_ICACHE_CR5B_U_BASE              (0xC4000000U)
#define SDL_MSS_DCACHE_CR5B_U_BASE              (0xC4800000U)
#define SDL_MSS_MBOX_U_BASE                     (0xC5000000U)
#define SDL_MSS_MAILBOX_U_SIZE                  (0x00002000U)
#define SDL_MSS_RETRAM_U_BASE                   (0xC5010000U)
#define SDL_MSS_MCRC_U_BASE                     (0xC5020000U)
#define SDL_MSS_GPADC_DATA_RAM_U_BASE           (0xC5030000U)
#define SDL_MSS_GPADC_DATA_RAM_U_SIZE           (0x00000800U)
#define SDL_EXT_FLASH_U_BASE                    (0xC6000000U)
#define SDL_MSS_QSPI_U_BASE                     (0xC8000000U)
#define SDL_HSM_DTHE_U_BASE                     (0xCE000000U)
#define SDL_HSM_SHA_U_BASE                      (0xCE004000U)
#define SDL_HSM_AES_U_BASE                      (0xCE006000U)
#define SDL_HSM_TRNG_U_BASE                     (0xCE00A000U)
#define SDL_HSM_PKA_U_BASE                      (0xCE010000U)
#define SDL_HSM_PKA_RAM_U_BASE                  (0xCE014000U)
#define SDL_HSM_PKA_RAM_U_SIZE                  (0x00020000U)


/* HWA DMA Bank definitions */
#define SDL_DSS_HWA_BANK_SIZE   (0x4000U)

#define SDL_DSS_HWA_DMA0_RAM_BANK0_BASE     SDL_DSS_HWA_DMA0_U_BASE
#define SDL_DSS_HWA_DMA0_RAM_BANK1_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK0_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK2_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK1_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK3_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK2_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK4_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK3_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK5_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK4_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK6_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK5_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA0_RAM_BANK7_BASE     (SDL_DSS_HWA_DMA0_RAM_BANK6_BASE + SDL_DSS_HWA_BANK_SIZE)

#define SDL_DSS_HWA_DMA1_RAM_BANK0_BASE     SDL_DSS_HWA_DMA1_U_BASE
#define SDL_DSS_HWA_DMA1_RAM_BANK1_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK0_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK2_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK1_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK3_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK2_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK4_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK3_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK5_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK4_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK6_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK5_BASE + SDL_DSS_HWA_BANK_SIZE)
#define SDL_DSS_HWA_DMA1_RAM_BANK7_BASE     (SDL_DSS_HWA_DMA1_RAM_BANK6_BASE + SDL_DSS_HWA_BANK_SIZE)

#ifdef __cplusplus
}
#endif
#endif /* SDLR_SOC_BASEADDRESS_H_ */
