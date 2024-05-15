params [
    ["_unit", ObjNull]
];

if (_unit isEqualTo ObjNull) exitWith {false};

_unit setVariable ["eligible",true,true];
[_unit] remoteExec ["A3A_fnc_makePlayerBossIfEligible", 2];