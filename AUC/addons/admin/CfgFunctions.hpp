class CfgFunctions
{
    class MOD_CONSTANT
    {
        class member 
        {
            file = QPATHTOFOLDER(functions\member);
            class addMember {};
            class canAddMember {};
        };
        class punish
        {
            file = QPATHTOFOLDER(functions\punish);
            class canKickPlayer {};
            class kickPlayer {};
        };
        class zeus
        {
            file = QPATHTOFOLDER(functions\zeus);
            class canLoadCargo {};
            class canUnloadCargo {};
            class customHint {};
            class customHintDialog {};
            class forceCommander {};
            class kickPlayerZeus {};
            class loadCargo {};
            class removeFromArsenal {};
            class tryLoadCargo {};
        };
    };
};