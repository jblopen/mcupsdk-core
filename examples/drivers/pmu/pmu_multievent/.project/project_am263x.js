let path = require('path');

let device = "am263x";

const files = {
    common: [
        "pmu_multievent.c",
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
    ],
};

const libs_nortos_r5f = {
    common: [
        "nortos.am263x.r5f.ti-arm-clang.${ConfigName}.lib",
        "drivers.am263x.r5f.ti-arm-clang.${ConfigName}.lib",
    ],
};

const lnkfiles = {
    common: [
        "linker.cmd",
    ]
};

const syscfgfile = "../example.syscfg"

const readmeDoxygenPageTag = "EXAMPLES_DRIVERS_PMU_MULTIEVENT";

const templates_nortos_r5f =
[
    {
        input: ".project/templates/am263x/common/linker_r5f.cmd.xdt",
        output: "linker.cmd",
    },
    {
        input: ".project/templates/am263x/nortos/main_nortos.c.xdt",
        output: "../main.c",
        options: {
            entryFunction: " pmu_multievent",
        },
    }
];

const buildOptionCombos = [
    { device: device, cpu: "r5fss0-0", cgt: "ti-arm-clang", board: "am263x-cc", os: "nortos"},
    { device: device, cpu: "r5fss0-1", cgt: "ti-arm-clang", board: "am263x-cc", os: "nortos"},
    { device: device, cpu: "r5fss1-0", cgt: "ti-arm-clang", board: "am263x-cc", os: "nortos"},
    { device: device, cpu: "r5fss1-1", cgt: "ti-arm-clang", board: "am263x-cc", os: "nortos"},
    { device: device, cpu: "r5fss0-0", cgt: "ti-arm-clang", board: "am263x-lp", os: "nortos"},
    { device: device, cpu: "r5fss0-1", cgt: "ti-arm-clang", board: "am263x-lp", os: "nortos"},
    { device: device, cpu: "r5fss1-0", cgt: "ti-arm-clang", board: "am263x-lp", os: "nortos"},
    { device: device, cpu: "r5fss1-1", cgt: "ti-arm-clang", board: "am263x-lp", os: "nortos"},
];

function getComponentProperty() {
    let property = {};

    property.dirPath = path.resolve(__dirname, "..");
    property.type = "executable";
    property.name = " pmu_multievent";
    property.isInternal = false;
    property.buildOptionCombos = buildOptionCombos;

    return property;
}

function getComponentBuildProperty(buildOption) {
    let build_property = {};

    build_property.files = files;
    build_property.filedirs = filedirs;
    build_property.lnkfiles = lnkfiles;
    build_property.syscfgfile = syscfgfile;
    build_property.readmeDoxygenPageTag = readmeDoxygenPageTag;

    if(buildOption.cpu.match(/r5f*/)) {
        build_property.libdirs = libdirs_nortos;
        build_property.libs = libs_nortos_r5f;
        build_property.templates = templates_nortos_r5f;
    }

    return build_property;
}

module.exports = {
    getComponentProperty,
    getComponentBuildProperty,
};
