/*
    Author:
        Silence
    
    Description:
        Checks if provided argument is a static turret
    
    Params:
        _object <OBJECT>
    
    Usage:
        [cursorObject] call AUC_fnc_isStatic;
    
    Return:
        true/false <BOOL>
*/

params ["_object"];

if (_object isEqualType objNull) then {_object = typeOf _object};
if (_object isKindOf "CAManBase") exitWith {false}; // object is player/unit
if (_object isKindOf "Logic") exitWith {false}; // object is logic/module
if (_object isKindOf "VirtualMan_F") exitWith {false}; // object is playable logic

// Things we want to be "objects"
if (_object isKindOf "StaticWeapon") exitWith {true};

false;