private _continue = call A3UC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["postInit aborted.", _fnc_scriptName] call A3UC_fnc_log
};

[] spawn A3UC_fnc_initAnti;
 
["postInit complete.", _fnc_scriptName] call A3UC_fnc_log;