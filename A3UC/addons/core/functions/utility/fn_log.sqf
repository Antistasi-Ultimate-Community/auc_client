params [
    "_message", 
    ["_file", _fnc_scriptName],
    ["_target", "local"]
];

if (_target isEqualTo "server" && {!(isServer)}) exitWith {
    diag_log (format["%1 was called with server flag, redirecting to server.", _file]);
    [_message, _file, "server"] remoteExec ["A3UC_fnc_log", 2];
};

diag_log (" | AUC Client" + " | File: " + _file + " | " + _message + " | ")

//| AUC Client | File: _file | _message |