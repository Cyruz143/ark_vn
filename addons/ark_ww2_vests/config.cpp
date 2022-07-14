#include "script_component.hpp"

class CfgPatches {
    class ark_ww2_vests {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "ark_vests",
            "fow_main",
            "fow_characters",
            "WW2_Core_c_IF_ZZZ_LastLoaded_c"
        };
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

#include "cfgWeapons.hpp"