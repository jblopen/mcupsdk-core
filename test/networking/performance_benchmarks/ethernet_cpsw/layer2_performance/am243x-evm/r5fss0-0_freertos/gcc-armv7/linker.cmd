__TI_STACK_SIZE = 8192;
__TI_HEAP_SIZE = 1024;
ENTRY(_vectors)
__IRQ_STACK_SIZE = 256;
__FIQ_STACK_SIZE = 256;
__SVC_STACK_SIZE = 4096;
__ABORT_STACK_SIZE = 256;
__UNDEFINED_STACK_SIZE = 256;
MEMORY
{
    R5F_VECS : ORIGIN = 0x00000000 , LENGTH = 0x00000040
    R5F_TCMA : ORIGIN = 0x00000040 , LENGTH = 0x00007FC0
    R5F_TCMB0 : ORIGIN = 0x41010000 , LENGTH = 0x00008000
    MSRAM : ORIGIN = 0x70080000 , LENGTH = 0x110000
    FLASH : ORIGIN = 0x60100000 , LENGTH = 0x80000
}
SECTIONS
{
    .vectors : ALIGN (8) {} > R5F_VECS
    .text.hwi : ALIGN (8) {} > MSRAM
    .text.cache : ALIGN (8) {} > MSRAM
    .text.mpu : ALIGN (8) {} > MSRAM
    .text.boot : ALIGN (8) {} > MSRAM
    .text:abort : ALIGN (8) {} > MSRAM
    .text : ALIGN (8) {} > MSRAM
    .rodata : ALIGN (8) {} > MSRAM
    .data : ALIGN (8) {} > MSRAM
    .bss : {
        __bss_start__ = .;
        __BSS_START = .;
        *(.bss)
        *(.bss.*)
        . = ALIGN (8);
        __BSS_END = .;
        __bss_end__ = .;
        . = ALIGN (8);
    } > MSRAM
    .irqstack : ALIGN(16) {
        __IRQ_STACK_START = .;
        . = . + __IRQ_STACK_SIZE;
        __IRQ_STACK_END = .;
        . = ALIGN (8);
    } > MSRAM
    .fiqstack : ALIGN(16) {
        __FIQ_STACK_START = .;
        . = . + __FIQ_STACK_SIZE;
        __FIQ_STACK_END = .;
    } > MSRAM
    .svcstack : ALIGN(16) {
        __SVC_STACK_START = .;
        . = . + __SVC_STACK_SIZE;
        __SVC_STACK_END = .;
    } > MSRAM
    .abortstack : ALIGN(16) {
        __ABORT_STACK_START = .;
        . = . + __ABORT_STACK_SIZE;
        __ABORT_STACK_END = .;
    } > MSRAM
    .undefinedstack : ALIGN(16) {
        __UNDEFINED_STACK_START = .;
        . = . + __UNDEFINED_STACK_SIZE;
        __UNDEFINED_STACK_END = .;
    } > MSRAM
    .heap (NOLOAD) : {
        end = .;
        KEEP(*(.heap))
        . = . + __TI_HEAP_SIZE;
    } > MSRAM
    .stack (NOLOAD) : ALIGN(16) {
        __TI_STACK_BASE = .;
        KEEP(*(.stack))
        . = . + __TI_STACK_SIZE;
        __STACK_END = .;
    } > MSRAM
    .enet_dma_mem (NOLOAD) : {
        *(.ENET_DMA_DESC_MEMPOOL)
        *(.ENET_DMA_RING_MEMPOOL)
        *(.ENET_DMA_PKT_MEMPOOL)
    } > MSRAM
    .ARM.exidx : ALIGN (8) {} > MSRAM
    .init_array : ALIGN (8) {} > MSRAM
    .fini_array : ALIGN (8) {} > MSRAM
}
