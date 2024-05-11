/*
    Author:
        Silence
    
    Description:
        Runs the pre init related functions
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_initPre;
    
    Return:
        N/A
*/

private _continue = call A3UC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["preInit aborted.", _fnc_scriptName] call A3UC_fnc_log
};

call A3UC_fnc_initVars;
 
["preInit complete.", _fnc_scriptName] call A3UC_fnc_log;