/********************************************************************
*
* DSS ESM INTR Map Header file
*
* Copyright (C) 2020 Texas Instruments Incorporated.
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
#ifndef SDLR_INTR_ESM_DSS_H_
#define SDLR_INTR_ESM_DSS_H_

#ifdef __cplusplus
extern "C"
{
#endif


/* List of intr sources for receiver: esm group 1 */

#define SDL_DSS_ESMG1_DSS_TPCC_A_INTAGG_ERR           0
#define SDL_DSS_ESMG1_DSS_TPCC_B_INTAGG_ERR           1
#define SDL_DSS_ESMG1_DSS_TPCC_A_INTAGG_ERR           0
#define SDL_DSS_ESMG1_DSS_TPCC_B_INTAGG_ERR           1
#define SDL_DSS_ESMG1_DSS_TPCC_C_INTAGG_ERR           2
#define SDL_DSS_ESMG1_DSS_DSP_L1P_PARITY              3
#define SDL_DSS_ESMG1_DSS_DSP_L2_SEC_ERR              4
#define SDL_DSS_ESMG1_DSS_DSP_EDC_SEC_ERR             5
#define SDL_DSS_ESMG1_DSS_DSP_L2_DED_ERR              6
#define SDL_DSS_ESMG1_DSS_DSP_EDC_DED_ERR             7
#define SDL_DSS_ESMG1_DSS_CM4_STC_ERR DSS_            9
#define SDL_DSS_ESMG1_DSS_DSP_STC_ERR                10
#define SDL_DSS_ESMG1_DSS_CBUFF_SBE_ERR              11
#define SDL_DSS_ESMG1_DSS_CBUFF_DBE_ERR              12
#define SDL_DSS_ESMG1_DSS_CBUFF_SAFETY_ERR           13
#define SDL_DSS_ESMG1_DSS_DSP_PBIST_ERR              14
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_SEC_AGG         15
#define SDL_DSS_ESMG1_RCSS_SPIA_SBE_ERR              16
#define SDL_DSS_ESMG1_RCSS_SPIA_UERR                 17
#define SDL_DSS_ESMG1_RCSS_SPIB_SBE_ERR              18
#define SDL_DSS_ESMG1_RCSS_SPIB_UERR                 19
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_SEC_AGG        20
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA0_RD      21
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA1_RD      22
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA0_WR      23
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA1_WR      24
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_CSI2A_MDMA     25
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_CSI2B_MDMA     26
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPA         30
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPB         31

#define SDL_DSS_ESMG1_DSS_L3RAM0_MPU_ADDR_ERR        32
#define SDL_DSS_ESMG1_DSS_L3RAM1_MPU_ADDR_ERR        33
#define SDL_DSS_ESMG1_DSS_L3RAM2_MPU_ADDR_ERR        34
#define SDL_DSS_ESMG1_DSS_L3RAM3_MPU_ADDR_ERR        35

#define SDL_DSS_ESMG1_DSS_HWA_DMA0_MPU_ADDR_ERR      36
#define SDL_DSS_ESMG1_DSS_HWA_DMA1_MPU_ADDR_ERR      37

#define SDL_DSS_ESMG1_DSS_HWA_PROC_MPU_ADDR_ERR      38
#define SDL_DSS_ESMG1_DSS_DSS_MAILBOX_MPU_ADDR_ERR   39

#define SDL_DSS_ESMG1_DSS_L3RAM0_MPU_PROT_ERR        40
#define SDL_DSS_ESMG1_DSS_L3RAM1_MPU_PROT_ERR        41
#define SDL_DSS_ESMG1_DSS_L3RAM2_MPU_PROT_ERR        42
#define SDL_DSS_ESMG1_DSS_L3RAM3_MPU_PROT_ERR        43

#define SDL_DSS_ESMG1_DSS_HWA_DMA0_MPU_PROT_ERR      44
#define SDL_DSS_ESMG1_DSS_HWA_DMA1_MPU_PROT_ERR      45
#define SDL_DSS_ESMG1_DSS_HWA_PROC_MPU_PROT_ERR      46
#define SDL_DSS_ESMG1_DSS_DSS_MAILBOX_MPU_PROT_ERR   47

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_DSP_MDMA        48
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM0          49
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM1          50
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM2          51
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM3          52

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_DSP_SDMA        53

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA0_RD       54
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA1_RD       55
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB0_RD       56
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB1_RD       57
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC0_RD       58
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC1_RD       59
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC2_RD       60
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC3_RD       61
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC4_RD       62
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC5_RD       63

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA0_WR       64
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA1_WR       65
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB0_WR       66
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB1_WR       67
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC0_WR       68
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC1_WR       69
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC2_WR       70
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC3_WR       71
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC4_WR       72
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC5_WR       73

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_COMP        74
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_MCRC            75
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_PCR             76
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CBUFF           77
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_DMA0        78
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_DMA1        79
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_CM4M        80
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_CM4S        81
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_MAILBOX         82
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPC         83
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_PCR            84
#define SDL_DSS_ESMG1_RCSS_TPCC_A_INTAGG_ERR         85
#define SDL_DSS_ESMG1_DSS_DSP_STC_ERR                10
#define SDL_DSS_ESMG1_DSS_CBUFF_SBE_ERR              11
#define SDL_DSS_ESMG1_DSS_CBUFF_DBE_ERR              12
#define SDL_DSS_ESMG1_DSS_CBUFF_SAFETY_ERR           13
#define SDL_DSS_ESMG1_DSS_DSP_PBIST_ERR              14
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_SEC_AGG         15
#define SDL_DSS_ESMG1_RCSS_SPIA_SBE_ERR              16
#define SDL_DSS_ESMG1_RCSS_SPIA_UERR                 17
#define SDL_DSS_ESMG1_RCSS_SPIB_SBE_ERR              18
#define SDL_DSS_ESMG1_RCSS_SPIB_UERR                 19
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_SEC_AGG        20
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA0_RD      21
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA1_RD      22
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA0_WR      23
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_TPTCA1_WR      24
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_CSI2A_MDMA     25
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_CSI2B_MDMA     26
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPA         30
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPB         31

#define SDL_DSS_ESMG1_DSS_L3RAM0_MPU_ADDR_ERR        32
#define SDL_DSS_ESMG1_DSS_L3RAM1_MPU_ADDR_ERR        33
#define SDL_DSS_ESMG1_DSS_L3RAM2_MPU_ADDR_ERR        34
#define SDL_DSS_ESMG1_DSS_L3RAM3_MPU_ADDR_ERR        35

#define SDL_DSS_ESMG1_DSS_HWA_DMA0_MPU_ADDR_ERR      36
#define SDL_DSS_ESMG1_DSS_HWA_DMA1_MPU_ADDR_ERR      37

#define SDL_DSS_ESMG1_DSS_HWA_PROC_MPU_ADDR_ERR      38
#define SDL_DSS_ESMG1_DSS_DSS_MAILBOX_MPU_ADDR_ERR   39

#define SDL_DSS_ESMG1_DSS_L3RAM0_MPU_PROT_ERR        40
#define SDL_DSS_ESMG1_DSS_L3RAM1_MPU_PROT_ERR        41
#define SDL_DSS_ESMG1_DSS_L3RAM2_MPU_PROT_ERR        42
#define SDL_DSS_ESMG1_DSS_L3RAM3_MPU_PROT_ERR        43

#define SDL_DSS_ESMG1_DSS_HWA_DMA0_MPU_PROT_ERR      44
#define SDL_DSS_ESMG1_DSS_HWA_DMA1_MPU_PROT_ERR      45
#define SDL_DSS_ESMG1_DSS_HWA_PROC_MPU_PROT_ERR      46
#define SDL_DSS_ESMG1_DSS_DSS_MAILBOX_MPU_PROT_ERR   47

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_DSP_MDMA        48
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM0          49
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM1          50
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM2          51
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_L3RAM3          52

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_DSP_SDMA        53

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA0_RD       54
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA1_RD       55
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB0_RD       56
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB1_RD       57
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC0_RD       58
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC1_RD       59
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC2_RD       60
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC3_RD       61
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC4_RD       62
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC5_RD       63

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA0_WR       64
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCA1_WR       65
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB0_WR       66
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCB1_WR       67
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC0_WR       68
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC1_WR       69
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC2_WR       70
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC3_WR       71
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC4_WR       72
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_TPTCC5_WR       73

#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_COMP        74
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_MCRC            75
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_PCR             76
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CBUFF           77
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_DMA0        78
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_DMA1        79
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_CM4M        80
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_HWA_CM4S        81
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_MAILBOX         82
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_MCASPC         83
#define SDL_DSS_ESMG1_RCSS_BUS_SAFETY_PCR            84
#define SDL_DSS_ESMG1_RCSS_TPCC_A_INTAGG_ERR         85
#define SDL_DSS_ESMG1_RCSS_SCIA_ERR                  86
#define SDL_DSS_ESMG1_RCSS_CSI2A_CTX_MEM_PARITY_ERR  87
#define SDL_DSS_ESMG1_RCSS_CSI2A_FIFO_MEM_PARITY_ERR 88
#define SDL_DSS_ESMG1_RCSS_CSI2B_CTX_MEM_PARITY_ERR  89
#define SDL_DSS_ESMG1_RCSS_CSI2B_FIFO_MEM_PARITY_ERR 90
#define SDL_DSS_ESMG1_DSS_ECC_AGG_UERR               91
#define SDL_DSS_ESMG1_DSS_ECC_AGG_SERR               92
#define SDL_DSS_ESMG1_DSS_HWA_GRP1_ERR               93
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK0_DED           97
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK1_DED           98
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK2_DED           99
#define SDL_DSS_ESMG1_DSS_ECC_AGG_UERR               91
#define SDL_DSS_ESMG1_DSS_ECC_AGG_SERR               92
#define SDL_DSS_ESMG1_DSS_HWA_GRP1_ERR               93
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK0_DED           97
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK1_DED           98
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK2_DED           99
#define SDL_DSS_ESMG1_DSS_ECC_L3_BANK3_DED           100
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB0_EVEN 101
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB0_ODD  102
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB1_EVEN 103
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB1_ODD  104
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB2_EVEN 105
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB2_ODD  106
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB3_EVEN 107
#define SDL_DSS_ESMG1_DSS_DSP_L2_PARITY_ERR_VB3_ODD  108
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_UCOMP0      109
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_UCOMP1      110
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_UCOMP2      111
#define SDL_DSS_ESMG1_DSS_BUS_SAFETY_CMC_UCOMP3      112

/* List of intr sources for receiver: esm group 2 */

#define SDL_DSS_ESMG2_DSS_WDT_NMI_REQ                0
#define SDL_DSS_ESMG2_DSS_DCCA_ERR                   1
#define SDL_DSS_ESMG2_DSS_DCCB_ERR                   2
#define SDL_DSS_ESMG2_DSS_WDT_NMI_REQ                0
#define SDL_DSS_ESMG2_DSS_DCCA_ERR                   1
#define SDL_DSS_ESMG2_DSS_DCCB_ERR                   2
#define SDL_DSS_ESMG2_DSS_HWA_GRP2_ERR               3
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB0_EVEN 4
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB0_ODD  5
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB1_EVEN 6
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB1_ODD  7
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB2_EVEN 8
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB2_ODD  9
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB3_EVEN 10
#define SDL_DSS_ESMG2_DSS_DSP_L2_PARITY_ERR_VB3_ODD  11
#define SDL_DSS_ESMG2_DSS_DSP_L2_DED_ERR             12
#define SDL_DSS_ESMG2_DSS_DSP_EDC_DED_ERR            13

/* List of intr sources for receiver: esm group 3 */

#ifdef __cplusplus
}
#endif
#endif /* SDLR_INTR_ESM_DSS_H_*/
