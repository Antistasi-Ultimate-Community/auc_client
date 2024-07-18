#include "..\..\script_component.hpp"

AUC_clientVersion = QUOTE(VERSION);

private _versionFormatted = format["auc_client_%1", getPlayerUID player];

[_versionFormatted, [AUC_clientVersion, profileNameSteam], true] remoteExec ["AUC_server_fnc_sendVarToServer", 2];