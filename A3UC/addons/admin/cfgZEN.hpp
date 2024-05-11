    class A3UC_ActionsZeus
    {
        displayName = "Antistasi Ultimate";
        condition = "call A3UC_fnc_isAntistasi";
        icon = QPATHTOFOLDER(zeus_logo_ca.paa);
        priority = 1;
        class A3UC_ActionsPlayer
        {
            displayName = "Player";
            condition = "[_hoveredEntity] call A3UC_fnc_isPlayer";
            icon = "\a3\modules_f_curator\data\portraitcurator_ca.paa";
            priority = 3;
            class A3UC_KickPlayer
            {
                displayName = "Kick Player To Lobby";
                condition = "[_hoveredEntity] call A3UC_fnc_canKickPlayer";
                statement = "[_hoveredEntity] call A3UC_fnc_kickPlayerZeus";
                icon = "\a3\modules_f_curator\data\portraitobjective_ca.paa";
                priority = 1;
            };
            class A3UC_AddMember
            {
                displayName = "Add Player To Member";
                condition = "[_hoveredEntity] call A3UC_fnc_canAddMember";
                statement = "[_hoveredEntity] call A3UC_fnc_addMember";
                icon = "\a3\modules_f_curator\data\portraitobjective_ca.paa";
                priority = 2;
            };
        };
        class A3UC_ActionsObject
        {
            displayName = "Object";
            condition = "[_hoveredEntity] call A3UC_fnc_isObject";
            icon = "\a3\modules_f_curator\data\portraitcurator_ca.paa";
            priority = 4;
            class A3UC_LoadCargo
            {
                displayName = "Load Cargo Into Vehicle";
                condition = "[_hoveredEntity] call A3UC_fnc_canLoadCargo";
                statement = "[_hoveredEntity] call A3UC_fnc_loadCargo";
                icon = "\a3\modules_f_curator\data\portraitobjectivemove_ca.paa";
                priority = 1;
            };
        };
        class A3UC_ActionsVehicle
        {
            displayName = "Vehicle";
            condition = "[_hoveredEntity] call A3UC_fnc_isVehicle";
            icon = "\a3\modules_f_curator\data\portraitcurator_ca.paa";
            priority = 5;
            class A3UC_UnloadCargo
            {
                displayName = "Unload Cargo";
                // condition = "[_hoveredEntity] call A3UC_fnc_canLoadCargo"; // TO-DO: Add a proper canUnloadCargo function that checks to see if cargo is in selected vehicle
                statement = "[_hoveredEntity, true] remoteExec [""A3A_Logistics_fnc_unload"",2]";
                icon = "\a3\modules_f_curator\data\portraitobjectivemove_ca.paa";
                priority = 1;
            };
        };
        class A3UC_CustomHint
        {
            displayName = "Global Hint";
            statement = "call A3UC_fnc_customHintDialog";
            icon = "\a3\modules_f_curator\data\portraitdiary_ca.paa";
            priority = 2;
        };
    };