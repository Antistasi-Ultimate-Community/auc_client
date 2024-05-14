/*
    Author:
        Silence
    
    Description:
        Runs the post init related functions
    
    Params:
        N/A
    
    Usage:
        call AUC_fnc_initPost;
    
    Return:
        N/A
*/

private _continue = call AUC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["postInit aborted.", _fnc_scriptName] call AUC_fnc_log
};

[] spawn AUC_fnc_initAntistasi;
 
["postInit complete.", _fnc_scriptName] call AUC_fnc_log;