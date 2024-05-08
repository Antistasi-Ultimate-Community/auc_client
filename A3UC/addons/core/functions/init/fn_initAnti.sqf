["Waiting for Antistasi client init to finish.", _fnc_scriptName] call A3UC_fnc_log;

waitUntil {sleep 1; !(isNil "initClientDone")}; // wait until antistasi has done client init

["Antistasi client init has finished.", _fnc_scriptName] call A3UC_fnc_log;

[] call A3UC_fnc_validateLoadedMods;