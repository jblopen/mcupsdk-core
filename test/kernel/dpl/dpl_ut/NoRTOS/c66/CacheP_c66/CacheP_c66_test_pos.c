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
 *  \file     CacheP_c66_test_pos.c
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
#include <drivers/soc.h>
#include <unity.h>
#include "ti_drivers_open_close.h"


CacheP_Size size_cache;
const CacheP_Size size_CacheP;

int32_t    testStatus = SystemP_SUCCESS;
uint32_t type = 0;
uint32_t size = 0;
void *addr;
void *baseAddr;
uint32_t value = 0;

void test_posCacheP_init(void *args)
{
    /* positive test of CacheP_init API */
    if (testStatus == SystemP_SUCCESS)
    {
		CacheP_init();
    }

	if (testStatus != SystemP_SUCCESS)
    {
		testStatus = SystemP_FAILURE;
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);

    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_enable(void *args)
{
	/* positive test of CacheP_enable API */
   if (testStatus == SystemP_SUCCESS)
    {
		CacheP_enable(type);
    }

	if (testStatus != SystemP_SUCCESS)
    {
		testStatus = SystemP_FAILURE;
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_posCacheP_disable(void *args)
{
	/* positive test of CacheP_disable API */
    if (testStatus == SystemP_SUCCESS)
    {
		CacheP_disable(type);
    }

	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_posCacheP_getEnabled(void *args)
{
	/* positive test of CacheP_getEnabled API */
    if (testStatus == SystemP_SUCCESS)
    {
		if(CacheP_getEnabled () != 0U)
		{
			testStatus = SystemP_FAILURE;
		}
    }

	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
         testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_wbAll(void *args)
{
	/* positive test of CacheP_wbAll API */
	if (testStatus == SystemP_SUCCESS)
    {
		CacheP_wbAll(type);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_wbInvAll(void *args)
{
	/* positive test of CacheP_wbInvAll API */
	if (testStatus == SystemP_SUCCESS)
    {
		CacheP_wbInvAll(type);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_wb(void *args)
{
	/* positive test of CacheP_wb API */
	if (testStatus == SystemP_SUCCESS)
    {
		size = 50U;
		CacheP_wb(&addr, size, type);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_inv(void *args)
{
	/* positive test of CacheP_inv API */
	if (testStatus == SystemP_SUCCESS)
    {
		size = 50U;
		CacheP_inv(&addr, size, type);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_posCacheP_wbInv(void *args)
{
	/* positive test of CacheP_wbInv API */
	if (testStatus == SystemP_SUCCESS)
    {
		CacheP_wbInv(&addr, size, type);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
         testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}
void test_posCacheP_setSize(void *args)
{
	/* positive test of CacheP_setSize API */
	if (testStatus == SystemP_SUCCESS)
    {
		CacheP_setSize(&size_CacheP);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_getSize(void *args)
{
	/* positive test of CacheP_getSize API */
	if (testStatus == SystemP_SUCCESS)
    {
		CacheP_getSize(&size_cache);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_setMar(void *args)
{
	/* positive test of CacheP_setMar API */
	if (testStatus == SystemP_SUCCESS)
    {
		size = 10U;
		CacheP_setMar(&baseAddr,10U,value);
    }
	if (testStatus != SystemP_SUCCESS)
    {
        DebugP_log("nortos_c66_pos_Test: failure on line no. %d \n", __LINE__);
        testStatus = SystemP_FAILURE;
    }
	TEST_ASSERT_EQUAL_INT32(testStatus,SystemP_SUCCESS);
}

void test_posCacheP_getMar(void *args)
{
	/* positive test of CacheP_getMar API */
	if (testStatus == SystemP_SUCCESS)
    {
		if(CacheP_getMar(&baseAddr) == 0)
		{
			testStatus = SystemP_FAILURE;
		}
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
    RUN_TEST(test_posCacheP_getMar, 282, NULL);
	RUN_TEST(test_posCacheP_setMar, 282, NULL);
	RUN_TEST(test_posCacheP_getSize, 282, NULL);
	RUN_TEST(test_posCacheP_setSize, 282, NULL);
	RUN_TEST(test_posCacheP_wbInv, 282, NULL);
	RUN_TEST(test_posCacheP_inv, 282, NULL);
	RUN_TEST(test_posCacheP_wb, 282, NULL);
	RUN_TEST(test_posCacheP_wbInvAll, 282, NULL);
	RUN_TEST(test_posCacheP_getEnabled, 282, NULL);
	RUN_TEST(test_posCacheP_wbAll, 282, NULL);
	RUN_TEST(test_posCacheP_disable, 282, NULL);
	RUN_TEST(test_posCacheP_enable, 282,NULL);
	RUN_TEST(test_posCacheP_init, 282, NULL);

    UNITY_END();
    Drivers_close();

 }
