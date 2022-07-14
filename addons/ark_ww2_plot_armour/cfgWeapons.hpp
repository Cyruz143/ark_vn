class CfgWeapons {
    class Vest_Camo_Base;
    class V_PlateCarrier1_blk: Vest_Camo_Base {
        class ItemInfo;
    };

    class V_PlateCarrier1_blk_invis: V_PlateCarrier1_blk {
        author = "ARK";
        displayName = "Carrier Lite (Invisible)";
        picture = "\a3\ui_f\data\Map\Markers\System\dummy_ca.paa";
        class ItemInfo: ItemInfo {
            uniformModel = "\A3\Weapons_F\empty.p3d";
        };
    };
};