/*
 *  Copyright (C) 2018-2024 Texas Instruments Incorporated
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

#include <kernel/dpl/DebugP.h>
#include <kernel/dpl/SemaphoreP.h>
#include <kernel/dpl/HwiP.h>
#include <kernel/nortos/dpl/common/printf.h>

int32_t _DebugP_log(char *format, ...);
extern uint32_t gDebugLogZone;

static uint32_t gDebugLogIsInitDone = 0;
static SemaphoreP_Object gDebugLogLockObj;

void _DebugP_logZone(uint32_t logZone, char *format, ...)
{
    /* cannot be used in ISR */
    if((HwiP_inISR()) == 0U )
    {
        if(gDebugLogIsInitDone == 0U)
        {
            int32_t status;

            status = SemaphoreP_constructMutex(&gDebugLogLockObj);
            DebugP_assertNoLog(status == SystemP_SUCCESS);

            gDebugLogIsInitDone = 1;
        }

        if( ( gDebugLogZone & logZone ) == logZone )
        {
            va_list va;

            SemaphoreP_pend(&gDebugLogLockObj, SystemP_WAIT_FOREVER);
            va_start(va, format);
            vprintf_(format, va);
            va_end(va);
            SemaphoreP_post(&gDebugLogLockObj);
        }
    }
}
int32_t _DebugP_log(char *format, ...)
{
    /* cannot be used in ISR */
    if(HwiP_inISR() == 0U )
    {
        if(gDebugLogIsInitDone==0U)
        {
            int32_t status;

            status = SemaphoreP_constructMutex(&gDebugLogLockObj);
            DebugP_assertNoLog(status == SystemP_SUCCESS);

            gDebugLogIsInitDone = 1;
        }

        {
            va_list va;

            SemaphoreP_pend(&gDebugLogLockObj, SystemP_WAIT_FOREVER);
            va_start(va, format);
            vprintf_(format, va);
            va_end(va);
            SemaphoreP_post(&gDebugLogLockObj);
        }
    }
    return 0;
}


