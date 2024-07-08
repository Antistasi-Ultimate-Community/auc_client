#include "..\..\script_component.hpp"

AUC_clientVersion = QUOTE(VERSION);

private _versionFormatted = format["auc_client_version_%1", getPlayerUID player];

[_versionFormatted, AUC_clientVersion, true] remoteExec ["AUC_server_fnc_sendVarToServer", 2];