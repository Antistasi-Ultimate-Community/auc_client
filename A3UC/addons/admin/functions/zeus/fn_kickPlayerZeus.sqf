params ["_unit"];

[
    "Kick Player To Lobby",
    [
        [
            "COMBO","Kick Reason",
            [
                ["kick_generic", "kick_forbidden_mods"],
                ["Generic", "Forbidden Mods"],
                0
            ]
        ],
        ["EDIT", "Log Note"]
    ],
    {[(_this select 0) select 0, (_this select 0) select 1] remoteExec ["A3UC_fnc_kickPlayer", (_this select 1) select 0]},
    {},
    [_unit]
] call zen_dialog_fnc_create;

[(format["%1 opened the kick menu and is attempting to kick %2.", (name player), (name _unit)]), _fnc_scriptName, "server"] call A3UC_fnc_log;