/*
    Author:
        Silence
    
    Description:
        Logs a message to server
    
    Params:
        _message <STRING>
        _file    <STRING> <DEFAULT: _fnc_scriptName>
        _target  <STRING> <DEFAULT: "local">
    
    Usage:
        ["This is a log message."] call AUC_fnc_log;
    
    Return:
        N/A
*/

params [
    "_message", 
    ["_file", _fnc_scriptName],
    ["_target", "server"]
];

if (_target isEqualTo "server") then {
    [_message, _file] remoteExec ["AUC_server_fnc_log", 2];
} else {
    diag_log (" | AUC Client Addon" + " | File: " + _file + " | " + _message + " | ");
};