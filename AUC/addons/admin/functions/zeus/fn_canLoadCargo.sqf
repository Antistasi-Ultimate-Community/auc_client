/*
    Author:
        Silence
    
    Description:
        Checks if object has cargo related configs
    
    Params:
        _cargo <OBJECT> <Default: objNull>
    
    Usage:
        [cursorObject] call AUC_fnc_canLoadCargo;
    
    Return:
        true/false <BOOL>
*/

params [["_cargo", objNull]];

if (_cargo isEqualTo objNull) exitWith {false};
if (_cargo getVariable ["AttachmentOffset", []] isNotEqualTo []) exitWith {false};

private _cargoConfig = [_cargo] call A3A_Logistics_fnc_getCargoConfig;
if !(isNull _cargoConfig) exitWith {true};

false;