/*
    Author:
        Silence
    
    Description:
        Checks if provided argument is a vehicle
    
    Params:
        _vehicle <OBJECT>
    
    Usage:
        [cursorObject] call A3UC_fnc_isVehicle;
    
    Return:
        true/false <BOOL>
*/

params ["_vehicle"];

if (_vehicle isEqualType objNull) then {_vehicle = typeOf _vehicle};
if (_vehicle isKindOf "CAManBase") exitWith {false}; // object is player/unit

// TO-DO: Add a check for statics and exit with false

if (isClass (configFile >> 'CfgVehicles' >> _vehicle) && {_vehicle isKindOf "AllVehicles"}) exitWith {true};

false;