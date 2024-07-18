/*
    Author:
        Silence
    
    Description:
        Runs the pre init related functions
    
    Params:
        N/A
    
    Usage:
        call AUC_fnc_initPre;
    
    Return:
        N/A
*/

private _continue = call AUC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["preInit aborted.", _fnc_scriptName] call AUC_fnc_log
};

call AUC_fnc_initVars;
 
["preInit complete.", _fnc_scriptName] call AUC_fnc_log;