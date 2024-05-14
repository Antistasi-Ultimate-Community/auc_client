/*
    Author:
        Silence
    
    Description:
        Creates a Zeus Enhanced modular dialog then passes the params to AUC_fnc_customHint
    
    Params:
        N/A
    
    Usage:
        call AUC_fnc_customHintDialog;
    
    Return:
        N/A
*/

[
    "Antistasi Custom Hint",
    [
        ["EDIT", "Header"],
        ["EDIT", "Text"]
    ],
    {_this call AUC_fnc_customHint},
    {},
    []
] call zen_dialog_fnc_create;