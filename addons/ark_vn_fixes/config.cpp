class CfgPatches {
    class ark_vn_fixes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.10;
        requiredAddons[] = {
            "ark_main",
            "weapons_f_vietnam_c"
        };
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

#include "CfgWeapons.hpp"

class Extended_PreInit_EventHandlers {
    class ADDON {
        clientinit = "call compileScript ['x\ark\addons\ark_vn_fixes\client_preinit.sqf'];";
    };
};