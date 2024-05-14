/*
    Author:
        Silence
    
    Description:
        Checks if _unit is a member
    
    Params:
        _unit <OBJECT>
    
    Usage:
        [player] call A3UC_fnc_canAddMember;
    
    Return:
        true/false <BOOL>
*/

params ["_unit"];

if !([_unit] call A3A_fnc_isMember) exitWith {true};

false;