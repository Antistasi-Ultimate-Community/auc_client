/*
    Author:
        Silence
    
    Description:
        Checks if current mission has the A3A flag
    
    Params:
        N/A
    
    Usage:
        private _isAntistasi = call A3UC_fnc_isAntistasi;
    
    Return:
        true/false <BOOL>
*/

if ( ( isClass (missionConfigFile >> "A3A") ) ) exitWith {true};

false;