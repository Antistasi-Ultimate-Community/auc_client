params [
    "_reason",
    ["_message", ""]
];

[(format["Kicking %3. Reason: %1. Note: %2", _reason, _message, (name player)]), _fnc_scriptName, "server"] call A3UC_fnc_log;

[_reason, false, 1, false, false] call BIS_fnc_endMission;