/*
    Author:
        Silence
    
    Description:
        Checks if _unit is alive and if they are a player
    
    Params:
        _unit <OBJECT>
    
    Usage:
        [player] call AUC_fnc_canKickPlayer;
    
    Return:
        true/false <BOOL>
*/

params ["_unit"];

if (alive _unit && {[_unit] call AUC_fnc_isPlayer}) exitWith {true};

false;