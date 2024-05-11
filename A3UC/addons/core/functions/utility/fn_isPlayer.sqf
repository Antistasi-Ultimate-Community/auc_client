/*
    Author:
        Silence
    
    Description:
        Checks if provided argument is a player
    
    Params:
        _unit <OBJECT>
    
    Usage:
        [player] call A3UC_fnc_isPlayer;
    
    Return:
        true/false <BOOL>
*/

params ["_unit"];

if (isPlayer _unit) exitWith {true};

false;