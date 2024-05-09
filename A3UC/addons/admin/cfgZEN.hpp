    class A3UC_Zeus
    {
        displayName = "Antistasi Ultimate";
        condition = "true";
        icon = QPATHTOFOLDER(zeus_logo_ca.paa);
        priority = 1;
        class A3UC_CustomHint
        {
            displayName = "Antistasi Hint";
            statement = "call A3UC_fnc_customHintDialog";
            icon = "\a3\modules_f_curator\data\portraitdiary_ca.paa";
            priority = 20;
        };
        class A3UC_KickPlayer
        {
            displayName = "Kick Player To Lobby";
            condition = "_hoveredEntity isKindOf 'CAManBase'";
            statement = "[_hoveredEntity] call A3UC_fnc_kickPlayerZeus";
            icon = "\a3\modules_f_curator\data\portraitdiary_ca.paa";
            priority = 19;
        };
    };