/*
 *  Copyright (C) 2021 Texas Instruments Incorporated
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
#include <kernel/dpl/ClockP.h>
#include <drivers/dac.h>
#include "ti_drivers_config.h"
#include "ti_drivers_open_close.h"
#include "ti_board_open_close.h"

/*
 * This example uses the DAC module to generate a square wave on
 * the DAC output
 *
 * The voltage can be specified by the user. The max value can be 4095.
 *
 * User can also configure the run time by changing the APP_NUM_ITER macro.
 * Frequency can also be changed by changing the time period macro.
 *
 * This example also showcases how to initialize and configure the
 * DAC module.
 */

/* DAC Maximum Output Voltage */
#define APP_DAC_OUT_VOLTAGE_MAX    (4095U)
/* DAC Minimum Output Voltage */
#define APP_DAC_OUT_VOLTAGE_MIN    (0U)
/* DAC Square wave time period (in us) */
/* This value should be greater than or equal to 4us */
#define APP_DAC_TIME_PERIOD    (4U)
/* Program sleep time between successive Voltage switches */
#define APP_DAC_SLEEP_TIME    (APP_DAC_TIME_PERIOD/2U)
/* No of iterations to run app for 10 seconds */
#define APP_NUM_ITER    (2500000U)

void dac_square_wave_main(void *args)
{
    uint32_t baseAddr = CONFIG_DAC0_BASE_ADDR;
    uint32_t loopCnt = APP_NUM_ITER;

    /* Open drivers to open the UART driver for console */
    Drivers_open();
    Board_driversOpen();

    

    DebugP_log("DAC Square Wave Test Started ...\r\n");

    while(loopCnt > 0)
    {
        /* Set output to max voltage */
        DAC_setShadowValue(baseAddr, APP_DAC_OUT_VOLTAGE_MAX);
        ClockP_usleep(APP_DAC_SLEEP_TIME);
        /* Set output to min voltage */
        DAC_setShadowValue(baseAddr, APP_DAC_OUT_VOLTAGE_MIN);
        ClockP_usleep(APP_DAC_SLEEP_TIME);
        loopCnt--;
    }

    /* Set DAC Output to 0 */
    DAC_setShadowValue(baseAddr, 0);

    DebugP_log("DAC Sqaure Wave Test Passed!!\r\n");
    DebugP_log("All tests have passed!!\r\n");

    Board_driversClose();
    Drivers_close();
}
