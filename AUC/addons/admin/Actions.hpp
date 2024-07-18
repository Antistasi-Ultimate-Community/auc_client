    class AUC_ActionsPlayer
    {
        displayName = "Player";
        condition = "[_hoveredEntity] call AUC_fnc_isPlayer";
        icon = ICON_CURATOR;
        priority = 4;
        #include "ActionsPlayer.hpp"
    };
    class AUC_ActionsObject
    {
        displayName = "Object";
        condition = "[_hoveredEntity] call AUC_fnc_isObject";
        icon = ICON_CURATOR;
        priority = 3;
        #include "ActionsObject.hpp"
    };
    class AUC_ActionsVehicle
    {
        displayName = "Vehicle";
        condition = "[_hoveredEntity] call AUC_fnc_isVehicle";
        icon = ICON_CURATOR;
        priority = 2;
        #include "ActionsVehicle.hpp"
    };
    class AUC_CustomHint
    {
        displayName = "Global Hint";
        condition = "_hoveredEntity isEqualTo objNull";
        statement = "call AUC_fnc_customHintDialog";
        icon = ICON_GENERIC;
        priority = 1;
    };