/*
    Author:
        Silence
    
    Description:
        Checks if the init functions can run in current environment
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_canRunInit;
    
    Return:
        true/false <BOOL>
*/

["Init check starting.", _fnc_scriptName] call A3UC_fnc_log;

if (is3DEN) exitWith {
    ["Current environment: 3DEN. Aborting.", _fnc_scriptName] call A3UC_fnc_log;
    false
};

if !(isClass (missionConfigFile >> "A3A")) exitWith {
    ["Current environment: Not Antistasi. Aborting.", _fnc_scriptName] call A3UC_fnc_log;
    false
};

true;