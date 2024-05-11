/*
    Author:
        Silence
    
    Description:
        Attempts to load cargo into vehicle
    
    Params:
        _vehicle <OBJECT>
        _cargo   <OBJECT>
    
    Usage:
        [_vehicle, _cargo] call A3UC_fnc_tryLoadCargo;
    
    Return:
        Nothing or 0
*/

params ["_vehicle", "_cargo"];

private _return = [_vehicle, _cargo] call A3A_Logistics_fnc_canLoad;

if (_return isEqualType 0) exitWith {["Unknown error occured. Aborting cargo load.", _fnc_scriptName] call A3UC_fnc_log};

_return spawn A3A_Logistics_fnc_load;