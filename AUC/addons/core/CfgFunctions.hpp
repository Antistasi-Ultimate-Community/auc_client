class CfgFunctions
{
    class MOD_CONSTANT
    {
        class init 
        {
            file = QPATHTOFOLDER(functions\init);
            class canRunInit {};
            class initAntistasi {};
            class initPost {postInit = 1};
            class initPre {preInit = 1};
            class initVars {};
        };
        class utility 
        {
            file = QPATHTOFOLDER(functions\utility);
            class hasInventory {};
            class isAntistasi {};
            class isObject {};
            class isPlayer {};
            class isStatic {};
            class isVehicle {};
            class log {};
        };
    };
};