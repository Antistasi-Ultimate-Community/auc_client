class CfgFunctions
{
    class MOD_CONSTANT
    {
        class init 
        {
            file = QPATHTOFOLDER(functions\init);
            class canRunInit {};
            class initPost {postInit = 1};
            class initPre {preInit = 1};
            class initVars {};
        };
        class utility 
        {
            file = QPATHTOFOLDER(functions\utility);
            class log {};
        };
    };
};