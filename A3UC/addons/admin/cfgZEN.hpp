    class A3UC_ActionsZeus
    {
        displayName = "Antistasi Ultimate";

        #if __A3_DEBUG__
            condition = "true";
        #else
            condition = "call A3UC_fnc_isAntistasi";
        #endif

        icon = QPATHTOFOLDER(zeus_logo_ca.paa);
        priority = 1;
        
        #include "Actions.hpp"
    };