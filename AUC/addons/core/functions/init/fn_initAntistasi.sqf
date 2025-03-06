/*
    Author:
        Silence
    
    Description:
        Runs after Antistasi client init, doing things we want (only if mission is Antistasi)
    
    Params:
        N/A
    
    Usage:
        call AUC_fnc_initAntistasi;
    
    Return:
        N/A
*/

["Waiting for Antistasi client init to finish.", _fnc_scriptName] call AUC_fnc_log;

waitUntil {sleep 1; !(isNil "initClientDone")}; // wait until antistasi has done client init

private _unit = player;
private _uid = getPlayerUID _unit;

if (_uid in AUC_allowedMembers) then { // ideally this should be running on the server but quite frankly I don't want to endure that pain
    [_unit] remoteExecCall ["AUC_server_fnc_addMember", 2]
};

call AUC_fnc_validateLoadedMods;

["Antistasi client init has finished.", _fnc_scriptName] call AUC_fnc_log;