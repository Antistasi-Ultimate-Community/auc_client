    class AUC_LoadCargo
    {
        displayName = "Load Into Vehicle";
        condition = "[_hoveredEntity] call AUC_fnc_canLoadCargo";
        statement = "[_hoveredEntity] call AUC_fnc_loadCargo";
        icon = ICON_OBJECT;
        priority = 1;
    };
    class AUC_ActionsObjectInventory
    {
        displayName = "Inventory";
        icon = ICON_OBJECT;
        priority = 2;
        class AUC_FillCargo
        {
            displayName = "Fill Container Inventory";
            condition = "[_hoveredEntity] call AUC_fnc_hasInventory";
            statement = "[_hoveredEntity] call A3A_fnc_fillLootCrate";
            icon = ICON_OBJECT_INVENTORY;
            priority = 2;
        };
        class AUC_ClearCargo
        {
            displayName = "Clear Container Inventory";
            condition = "!([_hoveredEntity] call AUC_fnc_isStatic)";
            statement = "[_hoveredEntity, true, true, true, true] call A3A_fnc_clearVehicleCargo";
            icon = ICON_OBJECT_INVENTORY;
            priority = 1;
        };
    };