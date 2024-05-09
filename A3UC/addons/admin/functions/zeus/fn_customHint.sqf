private _array = _this#0;
private _header = _array#0;
private _message = _array#1;

[format["header was %1, message was %2", _header, _message], _fnc_scriptName] call A3UC_fnc_log;

[_header, _message] remoteExec ["A3A_fnc_customHint", 0, false];