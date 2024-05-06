private _continue = call A3UC_fnc_canRunInit;

if (_continue isEqualTo false) exitWith {
    ["postInit aborted.", _fnc_scriptName] call A3UC_fnc_log
};

waitUntil {sleep 1; !(isNil "initClientDone")}; // wait until antistasi has done client init

[] call A3UC_fnc_validateLoadedMods;
 
["postInit complete.", _fnc_scriptName] call A3UC_fnc_log;