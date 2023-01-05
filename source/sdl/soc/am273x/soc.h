/*
 *  Copyright (C) 2023 Texas Instruments Incorporated
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
 */

#ifndef SDL_SOC_AM273X_H_
#define SDL_SOC_AM273X_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/**
 *  \defgroup SDL_SOC_MODULE APIs for SOC Specific Functions
 *  \ingroup SDL_MODULE
 *
 * For more details and example usage, see \ref SDL_SOC_PAGE
 *
 *  @{
 */
#include <sdl/sdlr.h>
#include <kernel/dpl/SystemP.h>
#include <sdl/include/am273x/sdlr_dss_ctrl.h>
#include <sdl/include/am273x/sdlr_dss_rcm.h>
#include <sdl/include/am273x/sdlr_mss_ctrl.h>
#include <sdl/include/am273x/sdlr_mss_rcm.h>
#include <sdl/include/am273x/sdlr_mss_toprcm.h>
#include <sdl/include/am273x/sdlr_soc_baseaddress.h>


/**
 *  \anchor SDL_SOC_DomainId_t
 *  \name SDL_SOC Domain ID
 *  @{
 */
#define SDL_SOC_DOMAIN_ID_MSS_TOP_RCM       (0U)
#define SDL_SOC_DOMAIN_ID_MSS_RCM           (1U)
#define SDL_SOC_DOMAIN_ID_DSS_RCM           (2U)
#define SDL_SOC_DOMAIN_ID_RSS_RCM           (3U)
#define SDL_SOC_DOMAIN_ID_MSS_CTRL          (4U)
#define SDL_SOC_DOMAIN_ID_DSS_CTRL          (5U)
#define SDL_SOC_DOMAIN_ID_RSS_CTRL          (6U)
#define SDL_SOC_DOMAIN_ID_MSS_IOMUX         (7U)
/** @} */




/**
 * \brief Lock control module partition to prevent writes into control MMRs
 *
 * \param domainId    [in] See SDL_SOC_DomainId_t
 */
void SDL_SOC_controlModuleLockMMR(uint32_t domainId);

/**
 * \brief Unlock control module partition to allow writes into control MMRs
 *
 * \param domainId    [in] See SDL_SOC_DomainId_t
 */
void SDL_SOC_controlModuleUnlockMMR(uint32_t domainId);



/** @} */

#ifdef __cplusplus
}
#endif

#endif
