/*
    Author:
        Silence
    
    Description:
        Creates a Zeus Enhanced modular dialog then passes the params to A3UC_fnc_customHint
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_customHintDialog;
    
    Return:
        N/A
*/

[
    "Antistasi Custom Hint",
    [
        ["EDIT", "Header"],
        ["EDIT", "Text"]
    ],
    {_this call A3UC_fnc_customHint},
    {},
    []
] call zen_dialog_fnc_create;