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

#include <drivers/pinmux.h>

Pinmux_PerCfg_t gPruicssPinMuxCfg[] = {
            /* PRU_ICSSG1_MDIO0 pin config */
    /* PRG1_MDIO0_MDC -> PRG1_MDIO0_MDC (Y6) */
    {
        PIN_PRG1_MDIO0_MDC,
        ( PIN_MODE(0) | PIN_PULL_DISABLE )
    },
    /* PRG1_MDIO0_MDIO -> PRG1_MDIO0_MDIO (AA6) */
    {
        PIN_PRG1_MDIO0_MDIO,
        ( PIN_MODE(0) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRU_ICSSG1_IEP0 pin config */
    /* PRG1_IEP0_EDC_LATCH_IN0 -> PRG1_PRU0_GPO18 (V7) */
    {
        PIN_PRG1_PRU0_GPO18,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_IEP0_EDC_SYNC_OUT0 -> PRG1_PRU0_GPO19 (W7) */
    {
        PIN_PRG1_PRU0_GPO19,
        ( PIN_MODE(2) | PIN_PULL_DISABLE )
    },
    /* PRU_ICSSG1_RGMII2 pin config */
    /* PRG1_RGMII2_RD0 -> PRG1_PRU1_GPO0 (W11) */
    {
        PIN_PRG1_PRU1_GPO0,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_RD1 -> PRG1_PRU1_GPO1 (V11) */
    {
        PIN_PRG1_PRU1_GPO1,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_RD2 -> PRG1_PRU1_GPO2 (AA12) */
    {
        PIN_PRG1_PRU1_GPO2,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_RD3 -> PRG1_PRU1_GPO3 (Y12) */
    {
        PIN_PRG1_PRU1_GPO3,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_RXC -> PRG1_PRU1_GPO6 (U11) */
    {
        PIN_PRG1_PRU1_GPO6,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_RX_CTL -> PRG1_PRU1_GPO4 (W12) */
    {
        PIN_PRG1_PRU1_GPO4,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TD0 -> PRG1_PRU1_GPO11 (AA10) */
    {
        PIN_PRG1_PRU1_GPO11,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TD1 -> PRG1_PRU1_GPO12 (V10) */
    {
        PIN_PRG1_PRU1_GPO12,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TD2 -> PRG1_PRU1_GPO13 (U10) */
    {
        PIN_PRG1_PRU1_GPO13,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TD3 -> PRG1_PRU1_GPO14 (AA11) */
    {
        PIN_PRG1_PRU1_GPO14,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TXC -> PRG1_PRU1_GPO16 (Y10) */
    {
        PIN_PRG1_PRU1_GPO16,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII2_TX_CTL -> PRG1_PRU1_GPO15 (Y11) */
    {
        PIN_PRG1_PRU1_GPO15,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRU_ICSSG1_RGMII1 pin config */
    /* PRG1_RGMII1_RD0 -> PRG1_PRU0_GPO0 (Y7) */
    {
        PIN_PRG1_PRU0_GPO0,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_RD1 -> PRG1_PRU0_GPO1 (U8) */
    {
        PIN_PRG1_PRU0_GPO1,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_RD2 -> PRG1_PRU0_GPO2 (W8) */
    {
        PIN_PRG1_PRU0_GPO2,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_RD3 -> PRG1_PRU0_GPO3 (V8) */
    {
        PIN_PRG1_PRU0_GPO3,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_RXC -> PRG1_PRU0_GPO6 (AA7) */
    {
        PIN_PRG1_PRU0_GPO6,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_RX_CTL -> PRG1_PRU0_GPO4 (Y8) */
    {
        PIN_PRG1_PRU0_GPO4,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TD0 -> PRG1_PRU0_GPO11 (AA8) */
    {
        PIN_PRG1_PRU0_GPO11,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TD1 -> PRG1_PRU0_GPO12 (U9) */
    {
        PIN_PRG1_PRU0_GPO12,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TD2 -> PRG1_PRU0_GPO13 (W9) */
    {
        PIN_PRG1_PRU0_GPO13,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TD3 -> PRG1_PRU0_GPO14 (AA9) */
    {
        PIN_PRG1_PRU0_GPO14,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TXC -> PRG1_PRU0_GPO16 (V9) */
    {
        PIN_PRG1_PRU0_GPO16,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },
    /* PRG1_RGMII1_TX_CTL -> PRG1_PRU0_GPO15 (Y9) */
    {
        PIN_PRG1_PRU0_GPO15,
        ( PIN_MODE(2) | PIN_INPUT_ENABLE | PIN_PULL_DISABLE )
    },

    {PINMUX_END, PINMUX_END}
};
