params [
    ["_forbiddenMods", A3UC_forbiddenMods]
];

["Validating loaded mods.", _fnc_scriptName] call A3UC_fnc_log;

private _check = [_forbiddenMods] call A3U_fnc_hasAddon;

if (_check isEqualTo false) exitWith {false};

["Detected forbidden mods.", _fnc_scriptName] call A3UC_fnc_log;
["forbidden_mods"] call A3UC_fnc_kickPlayer;

true;