/*
    Author:
        Silence
    
    Description:
        Kicks a player back to lobby with given reason and logs to the server with a message
    
    Params:
        _reason  <STRING>
        _message <STRING> <DEFAULT: "N/A">
    
    Usage:
        ["forbidden_mods", "Player loaded forbidden mods."] call A3UC_fnc_NAME;
    
    Return:
        _return <TYPE>
*/

params [
    "_reason",
    ["_message", "N/A"]
];

[(format["Kicking %3. Reason: %1. Note: %2", _reason, _message, (name player)]), _fnc_scriptName, "server"] call A3UC_fnc_log;

[_reason, false, 1, false, false] call BIS_fnc_endMission;