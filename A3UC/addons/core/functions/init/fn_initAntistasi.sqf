/*
    Author:
        Silence
    
    Description:
        Runs after Antistasi client init, doing things we want (only if mission is Antistasi)
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_initAntistasi;
    
    Return:
        N/A
*/

["Waiting for Antistasi client init to finish.", _fnc_scriptName] call A3UC_fnc_log;

waitUntil {sleep 1; !(isNil "initClientDone")}; // wait until antistasi has done client init

["Antistasi client init has finished.", _fnc_scriptName] call A3UC_fnc_log;

[] call A3UC_fnc_validateLoadedMods;