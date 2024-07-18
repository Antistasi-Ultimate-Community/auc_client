/*
    Author:
        Silence
    
    Description:
        Creates a Zeus Enhanced modular dialog and kicks the player you right clicked on with given params
    
    Params:
        _unit <OBJECT>
    
    Usage:
        [player] call AUC_fnc_kickPlayerZeus;
    
    Return:
        N/A
*/

params ["_unit"];

[
    "Kick Player To Lobby",
    [
        [
            "COMBO","Kick Reason",
            [
                ["end1", "kick_generic", "kick_forbidden_mods"],
                ["DEBUG: Use if others fail.", "Generic", "Forbidden Mods"],
                1
            ]
        ],
        ["EDIT", "Log Note"]
    ],
    {[((_this select 0) select 0), ((_this select 1) select 0), ((_this select 0) select 1)] remoteExec ["AUC_server_fnc_kickPlayer", 2]},
    {},
    [_unit]
] call zen_dialog_fnc_create;

[(format["%1 opened the kick menu and is attempting to kick %2.", (name player), (name _unit)]), _fnc_scriptName, "server"] call AUC_fnc_log;