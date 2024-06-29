class CfgFunctions
{
    class MOD_CONSTANT
    {
        class member 
        {
            file = QPATHTOFOLDER(functions\member);
            class addMember {};
        };
        class punish
        {
            file = QPATHTOFOLDER(functions\punish);
            class kickPlayer {};
        };
        class zeus
        {
            file = QPATHTOFOLDER(functions\zeus);
            class canLoadCargo {};
            class canUnloadCargo {};
            class customHintDialog {};
            class forceCommander {};
            class kickPlayerZeus {};
            class loadCargo {};
            class tryLoadCargo {};
        };
    };
};