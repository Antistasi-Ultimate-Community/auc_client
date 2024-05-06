params [
    ["_reason", "forbidden_mods"]
];

[(format["Kicking player. Reason: %1.", _reason]), _fnc_scriptName] call A3UC_fnc_log;

[_reason, false, 1, false, false] call BIS_fnc_endMission