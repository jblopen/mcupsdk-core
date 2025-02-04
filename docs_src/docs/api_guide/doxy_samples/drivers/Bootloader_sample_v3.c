
//! [include]
#include <stdio.h>
#include <drivers/bootloader.h>
//! [include]


Bootloader_Handle gBootloaderHandle;
Bootloader_BootImageInfo gBootImageInfo;


void open(void)
{
//! [open]

    gBootloaderHandle = Bootloader_open(0, NULL);
    DebugP_assert(gBootloaderHandle != NULL);
//! [open]
}

void bootcores_am263x(void)
{
//! [bootcores_am263x]
    int32_t status = SystemP_SUCCESS;

	status = Bootloader_parseMultiCoreAppImage(gBootloaderHandle, &gBootImageInfo);

	if(SystemP_SUCCESS == status && gBootloaderHandle != NULL)
    {
        if(status == SystemP_SUCCESS)
        {
            gBootImageInfo.cpuInfo[CSL_CORE_ID_R5FSS0_1].clkHz = Bootloader_socCpuGetClkDefault(CSL_CORE_ID_R5FSS0_1);
            status = Bootloader_bootCpu(gBootloaderHandle, &gBootImageInfo.cpuInfo[CSL_CORE_ID_R5FSS0_1]);   

            gBootImageInfo.cpuInfo[CSL_CORE_ID_R5FSS0_0].clkHz = Bootloader_socCpuGetClkDefault(CSL_CORE_ID_R5FSS0_0);
            /* Reset self cluster, both Core0. Init RAMs and run the app  */
            status |= Bootloader_bootSelfCpu(gBootloaderHandle, &gBootImageInfo);
        }
    }

//! [bootcores_am263x]
}

void close(void)
{
//! [close]
    Bootloader_close(gBootloaderHandle);
//! [close]
}