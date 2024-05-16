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
        [
            "COMBO","Info (Click Me!)",
            [
                ["br1", "br2", "preview"],
                ["Use <br/> for line breaks.", "This is line 1<br/><br/>This is line 2!", "When using preview, only you will see it."],
                0
            ]
        ],
        ["EDIT", "Header"],
        ["EDIT:MULTI", "Text"],
        ["CHECKBOX", "Preview", true]
    ],
    {_this call AUC_fnc_customHint},
    {},
    []
] call zen_dialog_fnc_create;