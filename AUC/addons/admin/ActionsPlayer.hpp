    class AUC_KickPlayer
    {
        displayName = "Kick Player To Lobby";
        condition = "[_hoveredEntity] call AUC_fnc_canKickPlayer";
        statement = "[_hoveredEntity] call AUC_fnc_kickPlayerZeus";
        icon = ICON_PLAYER;
        priority = 1;
    };
    class AUC_AddMember
    {
        displayName = "Add Player To Member";
        condition = "[_hoveredEntity] call AUC_fnc_canAddMember";
        statement = "[_hoveredEntity] remoteExec [""AUC_server_fnc_addMember"", 2]";
        icon = ICON_PLAYER;
        priority = 2;
    };
    class AUC_ForceCommander
    {
        displayName = "Set As Commander";
        condition = "alive _hoveredEntity";
        statement = "[_hoveredEntity] remoteExec [""AUC_server_fnc_forceCommander"", 2]";
        icon = ICON_PLAYER;
        priority = 3;
    };