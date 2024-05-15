/*
    Author:
        Silence
    
    Description:
        Kicks a player back to lobby with given reason and logs to the server with a message
    
    Params:
        _reason  <STRING>
        _target  <OBJECT> <DEFAULT: ObjNull>
        _message <STRING> <DEFAULT: "">
    
    Usage:
        ["forbidden_mods", "Player loaded forbidden mods."] call AUC_fnc_kickPlayer;
    
    Return:
        _return <TYPE>
*/

params [
    "_reason",
    ["_target", ObjNull],
    ["_message", ""]
];

if (_target isEqualTo ObjNull) exitWith {false};

[(format["Kicking %3. Reason: %1. Note: %2", _reason, _message, (name _target)]), _fnc_scriptName, "server"] call AUC_fnc_log;

// [_reason, false, 1, false, false] call BIS_fnc_endMission;
[_reason, false, 1, false, false] remoteExecCall ["BIS_fnc_endMission", _target];

true;