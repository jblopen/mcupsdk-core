/*
 *  Copyright (C) 2024 Texas Instruments Incorporated
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
/**
 *  \file am65x/sciclient_soc_priv.h
 *
 *  \brief Private AM65x specific SOC file
 */

#include <drivers/sciclient/soc/am65x/sciclient_irq_rm.h>
#include <drivers/sciclient/include/am65x/sciclient_fmwMsgParams.h>
#include <drivers/sciclient/sciclient_priv.h>
#include <drivers/sciclient/csl_sec_proxy.h>
#include <drivers/hw_include/cslr_soc.h>

/** \brief This structure contains configuration parameters for
*       the sec_proxy IP */
CSL_SecProxyCfg gSciclientSecProxyCfg =
{
    (CSL_sec_proxyRegs *)CSL_MCU_NAVSS0_SEC_PROXY0_CFG_BASE,
    /*< pSecProxyRegs */
    (CSL_sec_proxy_scfgRegs *)CSL_MCU_NAVSS0_SEC_PROXY0_CFG_SCFG_BASE,
    /*< pSecProxyScfgRegs */
    (CSL_sec_proxy_rtRegs *)CSL_MCU_NAVSS0_SEC_PROXY0_CFG_RT_BASE,
    /*< pSecProxyRtRegs */
    (uint64_t)CSL_MCU_NAVSS0_SEC_PROXY0_TARGET_DATA_BASE,
    /*< proxyTargetAddr */
    0                                          // maxMsgSize
};

/**
 *  \brief   API to get the right core context.
 *
 *  \param   contextType    Context type(Secure or Non Secure).
 *  \param   coreId         ID of the Core on which the driver is running
 *
 *  \return  context    Context found.
 */

uint32_t Sciclient_getContext(uint32_t contextType, uint32_t coreId)
{
    uint32_t retVal = SCICLIENT_CONTEXT_MAX_NUM;

    switch (coreId)
    {

    case CSL_CORE_ID_R5FSS0_0:
        if(contextType == SCICLIENT_SECURE_CONTEXT)
        {
            retVal = SCICLIENT_CONTEXT_R5_SEC_0;
        }
        else
        {
            retVal = SCICLIENT_CONTEXT_R5_NONSEC_0;
        }
        break;

    case CSL_CORE_ID_R5FSS0_1:
        if(contextType == SCICLIENT_SECURE_CONTEXT)
        {
            retVal = SCICLIENT_CONTEXT_R5_SEC_1;
        }
        else
        {
            retVal = SCICLIENT_CONTEXT_R5_NONSEC_1;
        }
        break;

    default:
        break;
    }
    return retVal;
}

uint32_t Sciclient_getDevId(uint32_t coreId)
{
    uint32_t retVal = UINT32_MAX;

    switch (coreId)
    {
 
    case CSL_CORE_ID_R5FSS0_0:
        retVal = TISCI_DEV_MCU_ARMSS0_CPU0;
        break;

    case CSL_CORE_ID_R5FSS0_1:
        retVal = TISCI_DEV_MCU_ARMSS0_CPU1;
        break;

    default:
        break;
    }
    return retVal;
}