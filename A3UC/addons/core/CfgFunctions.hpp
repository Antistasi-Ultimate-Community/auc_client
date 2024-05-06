class CfgFunctions
{
    class MOD_CONSTANT
    {
        class debug 
        {
            file = QPATHTOFOLDER(functions\debug);
            class canRunInit {};
            class initPost {postInit = 1};
            class initPre {preInit = 1};
        };
        class utility 
        {
            file = QPATHTOFOLDER(functions\utility);
            class log {};
        };
    };
};