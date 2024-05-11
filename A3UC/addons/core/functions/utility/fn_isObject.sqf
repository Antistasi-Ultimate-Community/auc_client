/*
    Author:
        Silence
    
    Description:
        Checks if provided argument is an object
    
    Params:
        _object <OBJECT>
    
    Usage:
        [cursorObject] call A3UC_fnc_isObject;
    
    Return:
        true/false <BOOL>
*/

params ["_object"];

if (_object isEqualType objNull) then {_object = typeOf _object};
if (_object isKindOf "CAManBase") exitWith {false}; // object is player/unit
if ([_object] call A3UC_fnc_isVehicle) exitWith {false}; // object is vehicle

if (isClass (configFile >> 'CfgVehicles' >> _object)) exitWith {true};

false;