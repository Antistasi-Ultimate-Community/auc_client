    class A3UC_ActionsPlayer
    {
        displayName = "Player";
        condition = "[_hoveredEntity] call A3UC_fnc_isPlayer";
        icon = ICON_CURATOR;
        priority = 4;
        #include "ActionsPlayer.hpp"
    };
    class A3UC_ActionsObject
    {
        displayName = "Object";
        condition = "[_hoveredEntity] call A3UC_fnc_isObject";
        icon = ICON_CURATOR;
        priority = 3;
        #include "ActionsObject.hpp"
    };
    class A3UC_ActionsVehicle
    {
        displayName = "Vehicle";
        condition = "[_hoveredEntity] call A3UC_fnc_isVehicle";
        icon = ICON_CURATOR;
        priority = 2;
        #include "ActionsVehicle.hpp"
    };
    class A3UC_CustomHint
    {
        displayName = "Global Hint";
        condition = "_hoveredEntity isEqualTo objNull";
        statement = "call A3UC_fnc_customHintDialog";
        icon = ICON_GENERIC;
        priority = 1;
    };