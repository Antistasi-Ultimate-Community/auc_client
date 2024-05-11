/*
    Author:
        Silence
    
    Description:
        Creates a "line select" zeus enhanced thing for A3UC_fnc_tryLoadCargo
    
    Params:
        _object <OBJECT>
    
    Usage:
        N/A (Unless using it via Zeus)
    
    Return:
        N/A
*/

private _object = _this select 0;

[_object, {
    params ["_successful", "_object", "_position"];

    if (_successful) then {
        curatorMouseOver params ["_type", "_entity"];

        if (_type == "OBJECT" && {_entity isKindOf "AllVehicles"} && {!([_entity] call A3UC_fnc_isPlayer)}) then {
            [_entity, _object] call A3UC_fnc_tryLoadCargo;
        } else {
            ["Error during cargo loading. This is probably accidental and has been handled safely.", _fnc_scriptName, "server"] call A3UC_fnc_log;
        };
    };
}, [], "Cargo To Vehicle"] call zen_common_fnc_selectPosition;