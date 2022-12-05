["S.O.G.","sog_switch_melee","Switch to Melee", {
    (call CBA_fnc_currentUnit) selectWeapon "vn_melee_muzzle";
    true
},
{false},
[DIK_T, [false, true, false]], false] call CBA_fnc_addKeybind;