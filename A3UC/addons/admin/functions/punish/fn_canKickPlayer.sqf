/*
    Author:
        Silence
    
    Description:
        Checks if _unit is alive and if they are a player
    
    Params:
        _unit <OBJECT>
    
    Usage:
        [player] call A3UC_fnc_canKickPlayer;
    
    Return:
        true/false <BOOL>
*/

params ["_unit"];

if (alive _unit && {[_unit] call A3UC_fnc_isPlayer}) exitWith {true};

false;