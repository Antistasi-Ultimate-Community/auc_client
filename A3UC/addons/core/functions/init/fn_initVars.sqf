["Initialising variables.", _fnc_scriptName] call A3UC_fnc_log;

A3UC_forbiddenMods = ["A3_Functions_F"]; // list of CfgPatches names

// Perhaps we should retrieve this variable from the server addon to try and maintain data security? 
// Then again, if someones going through that much effort to load a forbidden mod... They're stupid because they can just unload this mod!