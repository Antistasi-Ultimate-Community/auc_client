class CfgFunctions
{
    class MOD_CONSTANT
    {
        class member 
        {
            file = QPATHTOFOLDER(functions\member);
            class canAddMember {};
        };
        class punish
        {
            file = QPATHTOFOLDER(functions\punish);
            class canKickPlayer {};
        };
        class zeus
        {
            file = QPATHTOFOLDER(functions\zeus);
            class canLoadCargo {};
            class canUnloadCargo {};
            class customHintDialog {};
            class kickPlayerZeus {};
            class loadCargo {};
            class tryLoadCargo {};
        };
    };
};