    class AUC_UnloadCargo
    {
        displayName = "Unload Cargo";
        condition = "[_hoveredEntity] call AUC_fnc_canUnloadCargo";
        statement = "[_hoveredEntity, true] remoteExec [""A3A_Logistics_fnc_unload"",2]";
        icon = ICON_OBJECT;
        priority = 1;
    };
    class AUC_ActionsVehicleInventory
    {
        displayName = "Inventory";
        icon = ICON_OBJECT;
        priority = 1;
    };