/********************************************************************
*
* MCU_R5 MEMORYMAP header file
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
#ifndef CSLR_SOC_R5_BASEADDRESS_H_
#define CSLR_SOC_R5_BASEADDRESS_H_

#include <drivers/hw_include/cslr.h>

#include <ti/csl/soc/am261x/src/cslr_soc_baseaddress.h>
#ifdef __cplusplus
extern "C"
{
#endif



#define CSL_R5_ROM_BASE                     (0x00000000U)
#define CSL_R5_ROM_SIZE                     (0x00020000ul)  /* 128 KB */

#define CSL_MSS_TCMA_RAM_BASE               (0x00020000U)
#define CSL_MSS_TCMA_RAM_SIZE               (0x00010000ul)  /* 64KB */

#define CSL_MSS_TMU_BASE                    (0x00060000U)
#define CSL_MSS_TMU_SIZE                    (0x00080000ul)   /* 128KB */

#define CSL_MSS_TCMB_RAM_BASE               (0x00080000U)
#define CSL_MSS_TCMB_RAM_SIZE               (0x00030000ul)  /* 128KB */


#ifdef __cplusplus
}
#endif
#endif /* CSLR_SOC_R5_BASEADDRESS_H_ */
