/*
    Author:
        Silence
    
    Description:
        Initialises variables for the A3UC space
    
    Params:
        N/A
    
    Usage:
        call A3UC_fnc_initVars;
    
    Return:
        N/A
*/

["Initialising variables.", _fnc_scriptName] call A3UC_fnc_log;

A3UC_forbiddenMods = [ // list of CfgPatches names to block
    "nks_arsenal", //Nks Arsenal (Personal ACE + Virtual arsenals)
    "DCONVirtualGarage", //DCON's Multiplayer Vehicle Spawner
    "LootToVehicle", //Loot to vehicle
    "bear_antistasi_looter" //Loot to Vehicle for ACE and Antistasi
];

// Perhaps we should retrieve this variable from the server addon to try and maintain data security? 
// Then again, if someones going through that much effort to load a forbidden mod... They're stupid because they can just unload this mod!