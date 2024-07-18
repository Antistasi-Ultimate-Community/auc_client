/*
    Author:
        Silence
    
    Description:
        Creates a global Antistasi hint based on the params returned by AUC_fnc_customHintDialog
    
    Params:
        _any <ARRAY>
    
    Usage:
        ["Test Header", "Test Message"] call AUC_fnc_customHint;
    
    Return:
        [_header, _message] <ARRAY>
*/

private _array = _this#0;
private _header = _array#1;
private _message = _array#2;
private _preview = _array#3;

[format["header: %1 | message: %2 | Preview: %3", _header, _message, _preview], _fnc_scriptName] call AUC_fnc_log;

if (_preview isEqualTo true) then {
    [_header, _message] call A3A_fnc_customHint;
} else {
    [_header, _message] remoteExec ["A3A_fnc_customHint", 0, false];
};

[_header, _message];