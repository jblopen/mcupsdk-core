let path = require('path');

let device = "am64x";

const files = {
    common: [
        "ipc_spinlock_sharedmem.c",
        "main.c",
    ],
};

/* Relative to where the makefile will be generated
 * Typically at <example_folder>/<BOARD>/<core_os_combo>/<compiler>
 */
const filedirs = {
    common: [
        "..",       /* core_os_combo base */
        "../../..", /* Example base */
    ],
};

const libdirs_nortos = {
    common: [
        "${MCU_PLUS_SDK_PATH}/source/kernel/nortos/lib",
        "${MCU_PLUS_SDK_PATH}/source/drivers/lib",
        "${MCU_PLUS_SDK_PATH}/source/board/lib",
    ],
};

const libdirs_freertos = {
    common: [
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/lib",
        "${MCU_PLUS_SDK_PATH}/source/drivers/lib",
        "${MCU_PLUS_SDK_PATH}/source/board/lib",
    ],
};

const includes_freertos_r5f = {
    common: [
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/FreeRTOS-Kernel/include",
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/portable/TI_ARM_CLANG/ARM_CR5F",
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/config/am64x/r5f",
    ],
};

const includes_freertos_m4f = {
    common: [
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/FreeRTOS-Kernel/include",
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/portable/TI_ARM_CLANG/ARM_CM4F",
        "${MCU_PLUS_SDK_PATH}/source/kernel/freertos/config/am64x/m4f",
    ],
};

const libs_nortos_r5f = {
    common: [
        "nortos.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const libs_freertos_r5f = {
    common: [
        "freertos.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const libs_nortos_m4f = {
    common: [
        "nortos.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const libs_freertos_m4f = {
    common: [
        "freertos.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const lnkfiles = {
    common: [
        "linker.cmd",
    ]
};

const syscfgfile = "../example.syscfg";

const readmeDoxygenPageTag = "EXAMPLES_DRIVERS_IPC_SPINLOCK_SHAREDMEM";

const templates_nortos_r5f =
[
    {
        input: ".project/templates/am64x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "ipc_spinlock_sharedmem_main",
        },
    }
];

const templates_freertos_r5f =
[
    {
        input: ".project/templates/am64x/freertos/main_freertos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "ipc_spinlock_sharedmem_main",
        },
    }
];


const templates_nortos_m4f =
[
    {
        input: ".project/templates/am64x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "ipc_spinlock_sharedmem_main",
        },
    }
];

const templates_freertos_m4f =
[
    {
        input: ".project/templates/am64x/freertos/main_freertos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "ipc_spinlock_sharedmem_main",
        },
    }
];

const buildOptionCombos = [
    { device: device, cpu: "r5fss0-0", cgt: "ti-arm-clang", board: "am64x-evm", os: "freertos", isPartOfSystemProject: true},
    { device: device, cpu: "r5fss0-1", cgt: "ti-arm-clang", board: "am64x-evm", os: "nortos", isPartOfSystemProject: true},
];

const systemProject = {
    name: "ipc_spinlock_sharedmem",
    tag: "freertos_nortos",
    skipProjectSpec: false,
    readmeDoxygenPageTag: readmeDoxygenPageTag,
    board: "am64x-evm",
    projects: [
        { device: device, cpu: "r5fss0-0", cgt: "ti-arm-clang", board: "am64x-evm", os: "freertos"},
        { device: device, cpu: "r5fss0-1", cgt: "ti-arm-clang", board: "am64x-evm", os: "nortos"},
    ],

};

function getComponentProperty(device) {
    let property = {};

    property.dirPath = path.resolve(__dirname, "..");
    property.type = "executable";
    property.name = "ipc_spinlock_sharedmem";
    property.isInternal = false;
    property.buildOptionCombos = buildOptionCombos;

    return property;
}

function getComponentBuildProperty(buildOption) {
    let build_property = {};

    build_property.files = files;
    build_property.filedirs = filedirs;
    build_property.libdirs = libdirs_nortos;
    build_property.lnkfiles = lnkfiles;
    build_property.syscfgfile = syscfgfile;
    build_property.readmeDoxygenPageTag = readmeDoxygenPageTag;

    if(buildOption.cpu.match(/r5f*/)) {
        if(buildOption.os.match(/freertos*/) )
        {
            build_property.includes = includes_freertos_r5f;
            build_property.libdirs = libdirs_freertos;
            build_property.libs = libs_freertos_r5f;
            build_property.templates = templates_freertos_r5f;
        }
        else
        {
            build_property.libs = libs_nortos_r5f;
            build_property.templates = templates_nortos_r5f;
        }
    }
    if(buildOption.cpu.match(/m4f*/)) {
        if(buildOption.os.match(/freertos*/) )
        {
            build_property.includes = includes_freertos_m4f;
            build_property.libdirs = libdirs_freertos;
            build_property.libs = libs_freertos_m4f;
            build_property.templates = templates_freertos_m4f;
        }
        else
        {
            build_property.libs = libs_nortos_m4f;
            build_property.templates = templates_nortos_m4f;
        }
    }

    return build_property;
}

function getSystemProjects(device)
{
    return [systemProject];
}

module.exports = {
    getComponentProperty,
    getComponentBuildProperty,
    getSystemProjects,
};
