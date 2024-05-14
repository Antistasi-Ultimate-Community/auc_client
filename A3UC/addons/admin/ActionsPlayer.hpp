    class A3UC_KickPlayer
    {
        displayName = "Kick Player To Lobby";
        condition = "[_hoveredEntity] call A3UC_fnc_canKickPlayer";
        statement = "[_hoveredEntity] call A3UC_fnc_kickPlayerZeus";
        icon = ICON_PLAYER;
        priority = 1;
    };
    class A3UC_AddMember
    {
        displayName = "Add Player To Member";
        condition = "[_hoveredEntity] call A3UC_fnc_canAddMember";
        statement = "[_hoveredEntity] call A3UC_fnc_addMember";
        icon = ICON_PLAYER;
        priority = 2;
    };