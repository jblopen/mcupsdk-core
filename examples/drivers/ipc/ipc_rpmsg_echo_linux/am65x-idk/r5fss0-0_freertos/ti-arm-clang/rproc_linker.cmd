
/* This is the stack that is used by code running within main()
 * In case of NORTOS,
 * - This means all the code outside of ISR uses this stack
 * In case of FreeRTOS
 * - This means all the code until vTaskStartScheduler() is called in main()
 *   uses this stack.
 * - After vTaskStartScheduler() each task created in FreeRTOS has its own stack
 */
--stack_size=16384
/* This is the heap size for malloc() API in NORTOS and FreeRTOS
 * This is also the heap used by pvPortMalloc in FreeRTOS
 */
--heap_size=32768
-e_vectors  /* This is the entry of the application, _vector MUST be plabed starting address 0x0 */

/* This is the size of stack when R5 is in IRQ mode
 * In NORTOS,
 * - Here interrupt nesting is enabled
 * - This is the stack used by ISRs registered as type IRQ
 * In FreeRTOS,
 * - Here interrupt nesting is disabled
 * - This is stack that is used initally when a IRQ is received
 * - But then the mode is switched to SVC mode and SVC stack is used for all user ISR callbacks
 * - Hence in FreeRTOS, IRQ stack size is less and SVC stack size is more
 */
__IRQ_STACK_SIZE = 256;
/* This is the size of stack when R5 is in IRQ mode
 * - In both NORTOS and FreeRTOS nesting is disabled for FIQ
 */
__FIQ_STACK_SIZE = 256;
__SVC_STACK_SIZE = 4096; /* This is the size of stack when R5 is in SVC mode */
__ABORT_STACK_SIZE = 256;  /* This is the size of stack when R5 is in ABORT mode */
__UNDEFINED_STACK_SIZE = 256;  /* This is the size of stack when R5 is in UNDEF mode */

SECTIONS
{
    /* This has the R5F entry point and vector table, this MUST be at 0x0 */
    .vectors:{} palign(8) > R5F_VECS

    /* This has the R5F boot code until MPU is enabled,  this MUST be at a address < 0x80000000
     * i.e this cannot be placed in DDR
     */
    GROUP {
        .text.hwi: palign(8)
        .text.cache: palign(8)
        .text.mpu: palign(8)
        .text.boot: palign(8)
        .text:abort: palign(8) /* this helps in loading symbols when using XIP mode */
    } > MCU_MSRAM

    /* This is rest of code. This can be placed in DDR if DDR is available and needed */
    GROUP {
        .text:   {} palign(8)   /* This is where code resides */
        .rodata: {} palign(8)   /* This is where const's go */
    } > DDR_1

    GROUP {
        /* This is the resource table used by linux to know where the IPC "VRINGs" are located */
        .resource_table: {} palign(4096)
    } > DDR_0
    /* This is rest of initialized data. This can be placed in DDR if DDR is available and needed */
    GROUP {
        .data:   {} palign(8)   /* This is where initialized globals and static go */
    } > DDR_1

    /* This is rest of uninitialized data. This can be placed in DDR if DDR is available and needed */
    GROUP {
        .bss:    {} palign(8)   /* This is where uninitialized globals go */
        RUN_START(__BSS_START)
        RUN_END(__BSS_END)
        .sysmem: {} palign(8)   /* This is where the malloc heap goes */
        .stack:  {} palign(8)   /* This is where the main() stack goes */
    } > DDR_1

    /* This is where the stacks for different R5F modes go */
    GROUP {
        .irqstack: {. = . + __IRQ_STACK_SIZE;} align(8)
        RUN_START(__IRQ_STACK_START)
        RUN_END(__IRQ_STACK_END)
        .fiqstack: {. = . + __FIQ_STACK_SIZE;} align(8)
        RUN_START(__FIQ_STACK_START)
        RUN_END(__FIQ_STACK_END)
        .svcstack: {. = . + __SVC_STACK_SIZE;} align(8)
        RUN_START(__SVC_STACK_START)
        RUN_END(__SVC_STACK_END)
        .abortstack: {. = . + __ABORT_STACK_SIZE;} align(8)
        RUN_START(__ABORT_STACK_START)
        RUN_END(__ABORT_STACK_END)
        .undefinedstack: {. = . + __UNDEFINED_STACK_SIZE;} align(8)
        RUN_START(__UNDEFINED_STACK_START)
        RUN_END(__UNDEFINED_STACK_END)
    } > DDR_1

    /* Sections needed for C++ projects */
    GROUP {
        .ARM.exidx:  {} palign(8)   /* Needed for C++ exception handling */
        .init_array: {} palign(8)   /* Contains function pointers called before main */
        .fini_array: {} palign(8)   /* Contains function pointers called after main */
    } > DDR_1

    /* General purpose user shared memory, used in some examples */
    .bss.user_shared_mem (NOLOAD) : {} > USER_SHM_MEM
    /* this is used when Debug log's to shared memory are enabled, else this is not used */
    .bss.log_shared_mem  (NOLOAD) : {} > LOG_SHM_MEM
    /* this is used only when IPC RPMessage is enabled, else this is not used */
    .bss.ipc_vring_mem   (NOLOAD) : {} > RTOS_NORTOS_IPC_SHM_MEM
}

MEMORY
{
    R5F_VECS  : ORIGIN = 0x00 , LENGTH = 0x00000040
    MCU_MSRAM : ORIGIN = 0x40 , LENGTH = 0x00007FC0
    R5F_TCMB0 : ORIGIN = 0x41010000 , LENGTH = 0x00008000

    /* when using multi-core application's i.e more than one R5F/M4F active, make sure
     * this memory does not overlap with other R5F's
     */
    MSRAM     : ORIGIN = 0x70000000 , LENGTH = 0x80000

    /* This section can be used to put XIP section of the application in flash, make sure this does not overlap with
     * other CPUs. Also make sure to add a MPU entry for this section and mark it as cached and code executable
     */
    FLASH     : ORIGIN = 0x60100000 , LENGTH = 0x80000

    /* when using multi-core application's i.e more than one R5F/M4F active, make sure
     * this memory does not overlap with other R5F's
     */
    /* Resource table must be placed at the start of DDR_0 when R5 cores are early booting with Linux */
    DDR_0       : ORIGIN = 0xA0100000 , LENGTH = 0x1000
    DDR_1       : ORIGIN = 0xA0101000 , LENGTH = 0xEFF000

    /* shared memory segments */
    /* On R5F,
     * - make sure there is a MPU entry which maps below regions as non-cache
     */
    USER_SHM_MEM            : ORIGIN = 0xA5000000, LENGTH = 0x80
    LOG_SHM_MEM             : ORIGIN = 0xA5000000 + 0x80, LENGTH = 0x00004000 - 0x80
    RTOS_NORTOS_IPC_SHM_MEM : ORIGIN = 0xA2000000, LENGTH = 0x00200000
    LINUX_IPC_SHM_MEM       : ORIGIN = 0xA0000000 , LENGTH = 0x100000
}
