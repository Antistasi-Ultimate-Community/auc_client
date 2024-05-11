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
        class member 
        {
            file = QPATHTOFOLDER(functions\member);
            class addMember {};
            class canAddMember {};
        };
        class utility 
        {
            file = QPATHTOFOLDER(functions\utility);
            class isObject {};
            class isPlayer {};
            class isVehicle {};
            class log {};
            class isAntistasi {};
        };
    };
};