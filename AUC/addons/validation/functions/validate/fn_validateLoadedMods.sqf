/*
    Author:
        Silence
    
    Description:
        Checks if client has CfgPatches entries loaded from array
    
    Params:
        _forbiddenMods <ARRAY> <Default: AUC_forbiddenMods>
    
    Usage:
        call AUC_fnc_validateLoadedMods;
    
    Return:
        true/false <BOOL>
*/

params [
    ["_forbiddenMods", AUC_forbiddenMods]
];

// If they're local hosting or in SP, don't run validation checks
if (isServer && {hasInterface} || {!(isMultiplayer)}) exitWith {false};

["Validating loaded mods.", _fnc_scriptName] call AUC_fnc_log;

private _shouldKick = false;

{
    if (isClass (configFile >> "CfgPatches" >> _x)) then {
        _shouldKick = true;
    };
} forEach AUC_forbiddenMods;

if !(_shouldKick) exitWith {false};

["Detected forbidden mods.", _fnc_scriptName] call AUC_fnc_log;
["kick_forbidden_mods", player, format["%1 has loaded some addons in the AUC_forbiddenMods variable.", (name player)]] remoteExec ["AUC_server_fnc_kickPlayer", 2];

private _message = format["Kicking %1. They have loaded some forbidden addons.", (name player)];

[_message] remoteExec ["AUC_server_fnc_message", 2];

true;