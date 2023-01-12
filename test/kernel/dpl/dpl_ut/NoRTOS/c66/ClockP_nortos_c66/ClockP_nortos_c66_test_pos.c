/* Copyright (c) 2023 Texas Instruments Incorporated
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
 *  \file     nortos_c66_test_pos.c
 *
 *  \brief    This file contains Nortos C66 API unit test code.
 *
 *  \details  nortos unit tests
 **/
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <kernel/dpl/SystemP.h>
#include <kernel/dpl/HwiP.h>
#include <kernel/dpl/CacheP.h>
#include <kernel/dpl/SemaphoreP.h>
#include <kernel/dpl/TaskP.h>
#include <kernel/dpl/ClockP.h>
#include <kernel/dpl/HeapP.h>
#include <kernel/dpl/CycleCounterP.h>
#include <kernel/dpl/EventP.h>
#include <kernel/dpl/QueueP.h>
#include <kernel/nortos/dpl/common/ClockP_nortos_priv.h>
#include <drivers/soc.h>
#include <unity.h>
#include "ti_drivers_open_close.h"

#define BASE_ADDRESS_MAX (12U)
void test_posClockP_timerClearOverflowInt(void *args)
{
    int32_t    testStatus = SystemP_SUCCESS;
	uint32_t   timerBaseAddr = 0;

    for (timerBaseAddr = 1; timerBaseAddr < BASE_ADDRESS_MAX; timerBaseAddr++)
	{
        /* positive test of ClockP_timerClearOverflowInt API */
        if (testStatus == SystemP_SUCCESS)
        {
           ClockP_timerClearOverflowInt(timerBaseAddr);
        }

		if (testStatus != SystemP_SUCCESS)
        {
            DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
            testStatus = SystemP_FAILURE;
        }

		/* positive test of ClockP_getTimerCount API */
        if (testStatus == SystemP_SUCCESS)
        {
			if(ClockP_getTimerCount(timerBaseAddr) == 0)
			{
			    testStatus = SystemP_FAILURE;
            }
        }
        if (testStatus != SystemP_SUCCESS)
        {
            DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
            testStatus = SystemP_FAILURE;
        }
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_posClockP_init(void *args)
{
	int32_t    testStatus = SystemP_SUCCESS;
	/* positive test of ClockP_init API */
    if (testStatus == SystemP_SUCCESS)
    {
		ClockP_init();

    }
    if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
    TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_pos_main(void *args)
{
    Drivers_open();
    UNITY_BEGIN();

	RUN_TEST(test_posClockP_timerClearOverflowInt, 1672,NULL);
	RUN_TEST(test_posClockP_init, 1672,NULL);

    UNITY_END();
    Drivers_close();
}
