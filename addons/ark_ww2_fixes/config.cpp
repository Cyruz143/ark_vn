class CfgPatches {
    class ark_ww2_fixes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "ark_main",
            "acre_main",
            "WW2_Core_f_WW2_System_Infantry_f",
            "WW2_Core_c_IF_ZZZ_LastLoaded_c"
        };
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgFunctions {
    class WW2 {
        class functions {
            delete openBolt;
            delete openBoltStart;
            delete openBoltActivate;
            delete openBoltDeactivate;
            delete openBoltHandler;
            delete caseEjection;
            delete createCaseObject;
            delete bolt_onReload;
        };
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ww2_fixes {
        clientinit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_ww2_fixes\client_postinit.sqf';";
    };
};

