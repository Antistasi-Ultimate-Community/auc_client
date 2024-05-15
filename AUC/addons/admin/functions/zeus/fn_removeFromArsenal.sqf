params [
    ["_classname", ""]
];

if (_classname isEqualTo "") exitWith {false};

private _arsenalTab = _classname call jn_fnc_arsenal_itemType;
[_arsenalTab, _classname, -1] call jn_fnc_arsenal_removeItem;

true;