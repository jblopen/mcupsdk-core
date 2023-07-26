/*
 *  Copyright (c) 2022 Texas Instruments Incorporated
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
 *  \file     sdl_dcc_funcTest.c
 *
 *  \brief    This Test application demonstrates comparison of 2 clock
 *              sources.
 *
 *  \details    Different clock sources are provided to Counter 1 (Test Clock)
 *              and Counter 0 (Reference Clock).
 *              This application configures the DCC module to generate
 *              interrupt, when Counter 1 reaches 0.
 *              1. When Counter 0 + Valid Counter & Counter 1 reaches 0 at same
 *                   time, Completion Interrupt is generated.
 *              2. Error Interrupt is generated when
 *                  2.1. Counter 1 reaches 0 before Counter 0 reaches 0
 *
 *              Other Conditions where an error interrupt can be generated by
 *              DCC but not demonstrated by this demo application.
 *                  2.2. Counter 1 reaches 0 after Counter 1 & VALID0 reaches 0
 *                  2.3. Source sources to Counter 0 & Counter 1 are not present
 **/

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */

#include "dcc_test_main.h"
#include <kernel/dpl/HwiP.h>

/*===========================================================================*/
/*                         Declarations                                      */
/*===========================================================================*/
/**
 *
 * \brief   This function returns clock frequencies
 *
 * \param   dccInst     Instance of DCC
 * \param   clk0Src     Clock source for counter 0
 * \param   clk1Src     Clock source for counter 1
 * \param   clk0Freq    Clock frequency for counter 0 in KHz
 * \param   clk1Freq    Clock frequency for counter 1 in KHz
 *
 * \retval  status      Negative number in case of errors
 */
static int32_t SDL_DCCAppGetClkfreqKHz(uint32_t dccInst,
                                    uint32_t clk0Src, uint32_t clk1Src,
                                    uint32_t *clk0Freq, uint32_t *clk1Freq);
/**
 * \brief   This function returns least integral ratio for given clocks.
 *
 * \param   refClkFreq      Reference clock frequency in KHz.
 * \param   testClkFreq     Test clock frequency in KHz.
 * \param   refClkRatioNum  Reference clock ratio number.
 * \param   testClkRatioNum Test clock ratio number.
 *
 * \retval  None.
 */
static void SDL_DCCAppGetClkRatio(uint32_t  refClkFreq,
                              uint32_t  testClkFreq,
                              uint32_t *refClkRatioNum,
                              uint32_t *testClkRatioNum);

/**
 * \brief   This function returns seed value for COUNT1.
 *
 * \param   refClkFreq      Reference clock frequency in KHz.
 * \param   testClkFreq     Test clock frequency in KHz.
 * \param   refClkRatioNum  Reference clock ratio number.
 * \param   testClkRatioNum Test clock ratio number.
 * \param   drfitPer        Allowed drift in test clock in percentage.
 * \param   configParams    DCC configuration parameters.
 *                          Refer enum #SDL_DCC_config.
 *
 * \retval  None.
 */
static void SDL_DCCAppSetSeedVals(uint32_t           refClkFreq,
                              uint32_t           testClkFreq,
                              uint32_t           refClkRatioNum,
                              uint32_t           testClkRatioNum,
                              uint32_t           drfitPer,
                              SDL_DCC_config  *configParams);

/**
 * \brief   This function register ISR for a given instance of DCC
 *
 *
 * \param   dccInst     Instance of DCC
 *
 * \retval  SDL_PASS on successful interrupt handler registration.
 */
static int32_t SDL_DCCAppRegisterIsr(uint32_t dccInst);

/**
 * \brief   ISR for done interrupt, set a global flag
 *
 * \retval  None
 */
static void  SDL_DCCA_Isr(void *args);
HwiP_Params DCCAHwiParams;
HwiP_Object DCCAHwiObj;
/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */
volatile uint32_t isrFlag = 0u;
/**< Flag used to indicate occurrence of the completion interrupt */
/* ========================================================================== */
/*                          Function Definitions                              */
/* ========================================================================== */


int32_t SDL_DCC_funcTest(void)
{
    int32_t retVal, i, srcClk, testClk;
    uint32_t clk0Freq, clk1Freq, refClkRatioNum, testClkRatioNum;
    SDL_DCC_config configParams;
	SDL_DCC_staticRegs staticRegs;

	/* Steps
    1. Determine the clock frequencies for the sources
    2. Figure out the seed values for successful completion
    3. Configure Interrupts for normal completion
    4. Configure DCC instance
    5. Enable DCC
    6. Wait for normal completion
    7. Change reference clock source to higher frequency source (to simulate
        clock change)
    8. Configure DCC and Enable
    9. Wait for error notification
    */

    DebugP_log("\r\n" APP_DCC_STR ": Start\r\n");

    DebugP_log("\nINSTANCE: DCC0\r\n");

	/* This loop cycling for 2 clock sources to achieve qualification testing.
		case 0:  Test clock   = MAIN PLLCTRL (MAIN_SYSCLK0)
		         Source clock = HFOSC0
		case 1:  Test clock   = MAIN PLLCTRL (MAIN_SYSCLK0)
		         Source clock = HFOSC1
	*/
	for(i=0; i<2; i++)
	{
		switch(i)
		{
			case 0:
                #if defined (SOC_AM263X)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_0;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC5;
                    DebugP_log("\n Reference clock source: XTALCLK \r\n");
					DebugP_log(" Test clock source: RCCLK32K CLOCK \r\n");
                #endif
                #if defined (SOC_AWR294X)
                    #if defined (R5F_INPUTS)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_0;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC6;
                    DebugP_log("\r\n Reference clock source: XTALCLK \r\n");
					DebugP_log(" Test clock source: MCANA CLOCK \r\n");
                    #endif
                    #if defined (C66_INPUTS)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_0;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC4;
                    DebugP_log("\r\n Reference clock source: XTALCLK \r\n");
					DebugP_log(" Test clock source: DSS_WDG CLOCK \r\n");
                    #endif
                #endif
			break;

			case 1:
                #if defined (SOC_AM263X)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_2;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC0;
					DebugP_log("\r\n Reference clock source: RCCLK10M\r\n");
					DebugP_log(" Test clock source: SYS_CLK\r\n");
                #endif
                #if defined (SOC_AWR294X)
                    #if defined (R5F_INPUTS)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_0;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC6;
                    DebugP_log("\r\n Reference clock source: XTALCLK \r\n");
					DebugP_log(" Test clock source: MCANA CLOCK \r\n");
                    #endif
                    #if defined (C66_INPUTS)
					srcClk = SDL_DCC_CLK0_SRC_CLOCK0_0;
					testClk = SDL_DCC_CLK1_SRC_CLOCKSRC2;
                    DebugP_log("\r\n Reference clock source: XTALCLK \r\n");
					DebugP_log(" Test clock source: DSS_WDG CLOCK \r\n");
                    #endif
                #endif
			break;
		}

		/* Step 1 Determine the clock frequencies for the sources */
		retVal = SDL_DCCAppGetClkfreqKHz(APP_DCC_MODULE_INST,
                                   srcClk,
                                   testClk,
                                   &clk0Freq, &clk1Freq);

		if (SDL_PASS == retVal)
		{
			/* Step 2 Figure out the seed values for successful completion */
			/* Get clock ratio */
			SDL_DCCAppGetClkRatio(clk0Freq,
								clk1Freq,
								&refClkRatioNum,
								&testClkRatioNum);

			configParams.mode    = APP_DCC_MODE;
			configParams.clk0Src = srcClk;
			configParams.clk1Src = testClk;

			/* Get the seed values for given clock selections and allowed drift */
			SDL_DCCAppSetSeedVals(clk0Freq,
								clk1Freq,
								refClkRatioNum,
								testClkRatioNum,
								APP_DCC_TEST_CLOCK_SRC_1_DRIFT,
								&configParams);

			/* Step 3 Configure Interrupts for normal completion */
			SDL_DCCAppRegisterIsr(APP_DCC_MODULE_INST);

			/* Step 4 Configure DCC instance */
			retVal = SDL_DCC_configure(DCC_INST_NUM, &configParams);

			if (SDL_PASS == retVal)
			{
				retVal = SDL_DCC_verifyConfig(DCC_INST_NUM, &configParams);
			}
			else
			{
				retVal = SDL_EFAIL;
			}

			if (SDL_PASS == retVal)
			{
				/* Clear the interrupt flag */
				isrFlag = 0U;

				DebugP_log(APP_DCC_STR ": DCC configured \r\n");

				SDL_DCC_getStaticRegs(DCC_INST_NUM, &staticRegs);

				DebugP_log(APP_DCC_STR ": Enabling DCC\r\n");

				/* Step 5 Enable DCC */
				SDL_DCC_enable(DCC_INST_NUM);

				DebugP_log(APP_DCC_STR ": Waiting for some time to perform Continuous mode \r\n");

				volatile int32_t i = 0;
				/* Wait for the ESM interrupt to report the error */
				do {
					i++;
					if (i > 0x0FFFFFFF)
					{
						/* Timeout for the wait */
						break;
					}
				} while (isrFlag == DCC_NO_INTERRUPT);


				if (isrFlag == DCC_INTERRUPT)
				{
					DebugP_log(APP_DCC_STR ": DCC Generated Error interrupt when it is not expected \r\n");
					isrFlag = DCC_NO_INTERRUPT;
					retVal = SDL_EFAIL;
				}
				else
				{
					DebugP_log(APP_DCC_STR ": DCC module is disabled \r\n");

					/* Step 6 Disable DCC */
					SDL_DCC_disable(DCC_INST_NUM);
					retVal = SDL_PASS;
				}
			}
		}
	}

	DebugP_log("\r\n Reference clock source: XTAK CLOCK \r\n");
	DebugP_log(" Test clock source: MSS_RTIA_CLK \r\n");


    retVal = SDL_DCCAppGetClkfreqKHz(APP_DCC_MODULE_INST,
                                     APP_DCC_REF_CLOCK_SRC_0,
                                     APP_DCC_TEST_CLOCK_SRC_1,
                                     &clk0Freq, &clk1Freq);

    /* Step 7. Change reference clock source to higher frequency source
               OR change the clock ratios to introduce the error
     */
    if (retVal == SDL_PASS)
    {
        /* Step 8. Configure DCC and Enable */
        /* Change reference clock source to higher frequency source */
        DebugP_log(APP_DCC_STR ": Changing the clock source \r\n");

        configParams.clk1Src = APP_DCC_TEST_CLOCK_SRC_1_HIGHER;

        retVal = SDL_DCC_configure(DCC_INST_NUM, &configParams);
        DebugP_log(APP_DCC_STR ": Enabling DCC and waiting for "
                        "Error interrupt \r\n");

	    /* Enable ERROR interrupt */
	    SDL_DCC_enableIntr(DCC_INST_NUM, SDL_DCC_INTERRUPT_ERR);
        SDL_DCC_enable(DCC_INST_NUM);

        /* Step 9. Wait for error notification */

		volatile int32_t i = 0;
		/* Wait for the ESM interrupt to report the error */
		do {
			i++;
			if (i > 0x0FFFFFFF)
			{
				/* Timeout for the wait */
				break;
			}
		} while (isrFlag == DCC_NO_INTERRUPT);


		if (isrFlag == DCC_INTERRUPT)
		{
			DebugP_log(APP_DCC_STR ": DCC Generated Error interrupt \r\n");
			DebugP_log(APP_DCC_STR ": Indicating clock drift/change \r\n");
			isrFlag = DCC_NO_INTERRUPT;

			/* Disabling the DCC */
			SDL_DCC_disable(DCC_INST_NUM);
		}
		else
		{
			DebugP_log(APP_DCC_STR ": Could not generate Error interrupt \r\n");
			retVal = SDL_EFAIL;
		}
    }

    else
    {
        DebugP_log(APP_DCC_STR ": Error : Could not derive clock "
                        "frequency!!!\r\r\n");
    }

    return retVal;
}

/* ========================================================================== */
/*                 Internal Function Definitions                              */
/* ========================================================================== */

static int32_t SDL_DCCAppGetClkfreqKHz(uint32_t dccInst,
                                        uint32_t clk0Src, uint32_t clk1Src,
                                        uint32_t *clk0Freq, uint32_t *clk1Freq)
{
    int32_t retVal;
    switch (dccInst)
    {
        case DCC_INST_BASE:


            *clk0Freq = APP_DCC_REF_CLOCK_FREQ_IN_KHZ;
            retVal = SDL_PASS;


            *clk1Freq = APP_DCC_TEST_CLOCK_FREQ_IN_KHZ;

            retVal = SDL_PASS;

        break;

        default :
            DebugP_log(APP_DCC_STR ": Error : DCC Instance not supported in"
                        " this example !!!\r\r\n");
			retVal = SDL_EFAIL;
        break;
    }
    return (retVal);
}

static void SDL_DCCAppGetClkRatio(uint32_t  refClkFreq,
                              uint32_t  testClkFreq,
                              uint32_t *refClkRatioNum,
                              uint32_t *testClkRatioNum)
{
    uint32_t loopCnt, hcf = 1U;

    for (loopCnt = 1;
         (loopCnt <= refClkFreq) || (loopCnt <= testClkFreq);
         loopCnt++)
    {
        if ((refClkFreq % loopCnt == 0) && (testClkFreq % loopCnt == 0))
        {
            hcf = loopCnt;
        }
    }
    *refClkRatioNum  = (refClkFreq / hcf);
    *testClkRatioNum = (testClkFreq / hcf);
}

static void SDL_DCCAppSetSeedVals(uint32_t           refClkFreq,
                              uint32_t           testClkFreq,
                              uint32_t           refClkRatioNum,
                              uint32_t           testClkRatioNum,
                              uint32_t           drfitPer,
                              SDL_DCC_config *configParams)
{
    uint32_t maxFreqKHz, maxCntLimit;
    uint32_t maxRefCnt, minRefCnt;
    uint64_t mulVar;

    /* Find maximum frequency between test and reference clock */
    if (refClkFreq > testClkFreq)
    {
        maxFreqKHz  = refClkFreq;
        maxCntLimit = APP_DCC_SRC0_MAX_VAL;
    }
    else
    {
        maxFreqKHz  = testClkFreq;
        maxCntLimit = APP_DCC_SRC1_MAX_VAL;
    }
    /* Calculate seed values for 0% drift */
    if (maxFreqKHz == refClkFreq)
    {
        configParams->clk0Seed = maxCntLimit / refClkRatioNum;
        configParams->clk0Seed = configParams->clk0Seed * refClkRatioNum;
        mulVar = ((uint64_t) (configParams->clk0Seed) *
                  (uint32_t) (testClkRatioNum));
        configParams->clk1Seed   = (uint32_t) (mulVar / refClkRatioNum);
        configParams->clk0ValidSeed = refClkRatioNum;
    }
    else
    {
        configParams->clk1Seed = maxCntLimit / testClkRatioNum;
        configParams->clk1Seed = configParams->clk1Seed * testClkRatioNum;
        mulVar = ((uint64_t) (configParams->clk1Seed) *
                  (uint32_t) (refClkRatioNum));
        configParams->clk0Seed   = (uint32_t) (mulVar / testClkRatioNum);
        configParams->clk0ValidSeed = 1U;
    }
    /* Applying allowed drift */
    if (((APP_DCC_SRC0_MAX_VAL + APP_DCC_SRC0_VALID_MAX_VAL) <
         (configParams->clk0Seed * (100U + drfitPer) / 100U)))
    {
        /* Seed values with drift exceeds maximum range */
        DebugP_log(APP_DCC_STR ": Seed values with drift exceeds"
                        " allowed range\r\n");
        DebugP_log(APP_DCC_STR ": Application will run with 0% "
                        " allowed drift\r\n");
    }
    else if (100U < drfitPer)
    {
        /* Error percentage is greater than 100 */
        DebugP_log(APP_DCC_STR ": Warning Wrong drift %,Not applying drift\r\n");
        DebugP_log(APP_DCC_STR ": Application will run with 0% drift\r\n");
    }
    else
    {
        maxRefCnt = (configParams->clk0Seed * (100U + drfitPer) / 100U);
        minRefCnt = (configParams->clk0Seed * (100U - drfitPer) / 100U);
        if (APP_DCC_SRC0_VALID_MAX_VAL < (maxRefCnt - minRefCnt))
        {
            DebugP_log(APP_DCC_STR ": Warning Seed value for valid count "
                        "exceeds allowed range.\r\n");
            DebugP_log(APP_DCC_STR "Application will run with 0% allowed"
                        " drift.\r\n");
        }
        else
        {
            if (maxRefCnt == minRefCnt)
            {
                configParams->clk0ValidSeed = 1U;
            }
            else
            {
                configParams->clk0Seed   = minRefCnt;
                configParams->clk0ValidSeed = (maxRefCnt - minRefCnt);
            }
        }
    }
    DebugP_log(APP_DCC_STR ": Seed values calculation done.\r\n");
}

static int32_t SDL_DCCAppRegisterIsr(uint32_t dccInst)
{
    int32_t retVal = SDL_EFAIL;


    switch (dccInst)
    {
        case DCC_INST_BASE  :

            HwiP_Params_init(&DCCAHwiParams);

            DCCAHwiParams.callback = SDL_DCCA_Isr;

            retVal = SDL_PASS;
        break;

        default :
            DebugP_log(APP_DCC_STR ": Error : DCC Instance not supported in"
                        " this test !!!\r\n");
        break;
    }
    if (SDL_PASS == retVal)
    {
        DCCAHwiParams.intNum = DCC_DONE_INTR_NUM;
        DCCAHwiParams.isPulse = 0U;
        HwiP_construct(&DCCAHwiObj, &DCCAHwiParams);
    }
    return (retVal);
}

static void SDL_DCCA_Isr(void *args)
{
    SDL_DCC_clearIntr(DCC_INST_NUM, SDL_DCC_INTERRUPT_DONE);
    isrFlag  = 1U;
}


#if defined (SOC_AM263X)
int32_t SDL_ESM_applicationCallbackFunction(SDL_ESM_Inst esmInst, SDL_ESM_IntType esmIntrType,
                                            uint32_t grpChannel,  uint32_t index, uint32_t intSrc, void *arg)
{
    int32_t retVal = SDL_PASS;

    DebugP_log("\r\nInterrupt is generated to ESM\r\n");
    DebugP_log("    ESM Call back function called : instType 0x%x, intType 0x%x, " \
                "grpChannel 0x%x, index 0x%x, intSrc 0x%x \r\n",
                esmInst, esmIntrType, grpChannel, index, intSrc);
    DebugP_log("    Take action \r\n\r\n");

    isrFlag = DCC_INTERRUPT;

     /* Clear DCC event */
    SDL_DCC_clearIntr(DCC_INST_NUM, SDL_DCC_INTERRUPT_ERR);

    return retVal;
}

#elif defined (SOC_AWR294X)
int32_t SDL_ESM_applicationCallbackFunction(SDL_ESM_Inst esmInst,
                                            int grpChannel, int intSrc, void *arg)
{
    int32_t retVal = SDL_PASS;

    DebugP_log("\r\nInterrupt is generated to ESM\r\n");
    DebugP_log("    ESM Call back function called : instType 0x%x, intType 0x%x, " \
                "grpChannel 0x%x, intSrc 0x%x \r\n",
                esmInst, grpChannel, intSrc);
    DebugP_log("    Take action \r\n\r\n");

    isrFlag = DCC_INTERRUPT;

    /* Clear DCC event */
    SDL_DCC_clearIntr(DCC_INST_NUM, SDL_DCC_INTERRUPT_ERR);

    return retVal;
}

#endif
/********************************* End of file ******************************/
