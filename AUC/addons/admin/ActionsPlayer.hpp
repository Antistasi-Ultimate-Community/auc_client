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
        statement = "[_hoveredEntity] call AUC_fnc_addMember";
        icon = ICON_PLAYER;
        priority = 2;
    };