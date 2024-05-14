/*
    Author:
        Silence
    
    Description:
        Runs the post init related functions
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_initPost;
    
    Return:
        N/A
*/

private _continue = call A3UC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["postInit aborted.", _fnc_scriptName] call A3UC_fnc_log
};

[] spawn A3UC_fnc_initAntistasi;
 
["postInit complete.", _fnc_scriptName] call A3UC_fnc_log;