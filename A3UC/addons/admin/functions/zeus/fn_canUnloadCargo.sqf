/*
    Author:
        Silence
    
    Description:
        Checks if vehicle can unload cargo
    
    Params:
        _vehicle <OBJECT> <Default: objNull>
    
    Usage:
        [cursorObject] call A3UC_fnc_canUnloadCargo;
    
    Return:
        true/false <BOOL>
*/

params [["_vehicle", objNull]];

if (_cargo isEqualTo objNull) exitWith {false};

if (_vehicle getVariable ["LoadingCargo", false] isEqualTo true) exitWith {false};

private _loaded = _vehicle getVariable ["Cargo", []];
if ((count _loaded) > 0) exitWith {true};

false;