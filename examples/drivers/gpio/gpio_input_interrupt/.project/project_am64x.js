let path = require('path');

let device = "am64x";

const files = {
    common: [
        "gpio_input_interrupt.c",
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

const libdirs = {
    common: [
        "${MCU_PLUS_SDK_PATH}/source/kernel/nortos/lib",
        "${MCU_PLUS_SDK_PATH}/source/drivers/lib",
        "${MCU_PLUS_SDK_PATH}/source/board/lib",
    ],
};

const libs_r5f = {
    common: [
        "nortos.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.r5f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const libs_a53 = {
    common: [
        "nortos.am64x.a53.gcc-aarch64.${ConfigName}.lib",
        "drivers.am64x.a53.gcc-aarch64.${ConfigName}.lib",
    ],
};

const libs_nortos_m4f = {
    common: [
        "nortos.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
        "board.am64x.m4f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const lnkfiles = {
    common: [
        "linker.cmd",
    ]
};

const syscfgfile = "../example.syscfg"

const readmeDoxygenPageTag = "EXAMPLES_DRIVERS_GPIO_INPUT_INTERRUPT";

const templates_nortos_r5f =
[
    {
        input: ".project/templates/am64x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "gpio_input_interrupt_main",
        },
    },
];

const templates_nortos_a53 =
[
    {
        input: ".project/templates/am64x/common/linker_a53.cmd.xdt",
        output: "linker.cmd",
    },
    {
        input: ".project/templates/am64x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "gpio_input_interrupt_main",
        },
    },
];

const templates_nortos_m4f =
[
    {
        input: ".project/templates/am64x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: "gpio_input_interrupt_main",
        },
    }
];

const buildOptionCombos = [
    { device: "am64x", cpu: "r5fss0-0", cgt: "ti-arm-clang", board: "am64x-evm", os: "nortos"},
    { device: "am64x", cpu: "a53ss0-0", cgt: "gcc-aarch64", board: "am64x-evm", os: "nortos"},
    { device: "am64x", cpu: "m4fss0-0", cgt: "ti-arm-clang", board: "am64x-evm", os: "nortos"},
];

function getComponentProperty() {
    let property = {};

    property.dirPath = path.resolve(__dirname, "..");
    property.type = "executable";
    property.name = "gpio_input_interrupt";
    property.isInternal = false;
    property.buildOptionCombos = buildOptionCombos;

    return property;
}

function getComponentBuildProperty(buildOption) {
    let build_property = {};

    build_property.files = files;
    build_property.filedirs = filedirs;
    build_property.libdirs = libdirs;
    build_property.lnkfiles = lnkfiles;
    build_property.syscfgfile = syscfgfile;
    build_property.readmeDoxygenPageTag = readmeDoxygenPageTag;

    if(buildOption.cpu.match(/r5f*/)) {
        build_property.libs = libs_r5f;
        build_property.templates = templates_nortos_r5f;
    }
    if(buildOption.cpu.match(/a53*/)) {
        build_property.libs = libs_a53;
        build_property.templates = templates_nortos_a53;
    }
    if(buildOption.cpu.match(/m4f*/)) {
        build_property.templates = templates_nortos_m4f;
        build_property.libs = libs_nortos_m4f;
    }

    return build_property;
}

module.exports = {
    getComponentProperty,
    getComponentBuildProperty,
};
