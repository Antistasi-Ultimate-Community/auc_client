params [
    ["_forbiddenMods", A3UC_forbiddenMods]
];

["Validating loaded mods.", _fnc_scriptName] call A3UC_fnc_log;

private _check = [_forbiddenMods] call A3U_fnc_hasAddon;

if (_check isEqualTo false) exitWith {false};

["Detected forbidden mods.", _fnc_scriptName] call A3UC_fnc_log;
["forbidden_mods", format["%1 has loaded some addons in the A3UC_forbiddenMods variable.", (name player)]] call A3UC_fnc_kickPlayer;

true;