#include "..\..\script_component.hpp"

AUC_clientVersion = QUOTE(VERSION);

if (isNil "AUC_serverVersion") then {AUC_serverVersion = "none"};

if (AUC_clientVersion != AUC_serverVersion || {AUC_serverVersion isEqualTo "none"}) then {
    private _message = format["%1 has a version mismatch with the AUC Client Mod. Client: %2 | Server: %3. Please repair the AUC Client Mod in your launcher.", (name player), AUC_clientVersion, AUC_serverVersion];

    [_message] remoteExec ["AUC_server_fnc_message", 2];

    [
        "kick_update", player, format [
            "Player has version mismatch. Client: %1 | Server: %2", 
            AUC_clientVersion, 
            AUC_serverVersion
        ]
    ] remoteExec ["AUC_server_fnc_kickPlayer", 2];
};