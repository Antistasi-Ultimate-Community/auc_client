//===================Flags===================
class FlagPole_F;
class AU_Flag_AU : FlagPole_F{
    scope = 2;
    scopeCurator = 2;
    displayName = "(AU) Flag (Antistasi Ultimate)";
    class EventHandlers 
    {
        init = "(_this select 0) setFlagTexture 'QPATHTOFOLDER(Data\flag\flag_AU.paa)'";
    };
};
class AUC_Flag : AU_Flag_AU{
    displayName = "(AU) Flag (Antistasi Ultimate)";
    class EventHandlers 
    {
        init = "(_this select 0) setFlagTexture 'QPATHTOFOLDER(Data\flag\flag_AUC.paa)'";
    };
};

//===================Uniforms===================
class B_Soldier_F;
class B_CTRG_Soldier_base_F;
class AUC_BLK_Uni_F: B_CTRG_Soldier_base_F
{
    author="MaxxLite";
    side = -1;
    modelsides[] = {3, 2, 1, 0};
    _generalMacro="AUC_BLK_Uni_F";
    faction="";
    uniformClass="U_AUC_BLK_Uni_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    scope=1;
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_BLK.paa)
    };
    armor=2;
    armorStructural=3;
    explosionShielding=0.30000001;
};
class AUC_BLK_Uni_2_F: AUC_BLK_Uni_F
{
    _generalMacro="AUC_BLK_Uni_2_F";
    uniformClass="U_AUC_BLK_Uni_2_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_BLK.paa),
        "\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa"
    };
};
class AUC_BLK_Uni_3_F: AUC_BLK_Uni_F
{
    _generalMacro="AUC_BLK_Uni_3_F";
    uniformClass="U_AUC_BLK_Uni_3_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
};
class AUC_Olive_Uni_F: AUC_BLK_Uni_F
{
    _generalMacro="AUC_Olive_Uni_F";
    uniformClass="U_AUC_Olive_Uni_F";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Olive.paa)
    };
};
class AUC_Olive_Uni_3_F: AUC_Olive_Uni_F
{
    _generalMacro="AUC_Olive_Uni_3_F";
    uniformClass="U_AUC_Olive_Uni_3_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
};
class AUC_Arid_Uni_F: AUC_BLK_Uni_F
{
    _generalMacro="AUC_Arid_Uni_F";
    uniformClass="U_AUC_Arid_Uni_F";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Arid.paa)
    };
};
class AUC_Arid_Uni_3_F: AUC_Arid_Uni_F
{
    _generalMacro="AUC_Arid_Uni_3_F";
    uniformClass="U_AUC_Arid_Uni_3_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
};
class AUC_Plad_Uni_F: AUC_BLK_Uni_F
{
    _generalMacro="AUC_Plad_Uni_F";
    uniformClass="U_AUC_Plad_Uni_F";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Plad.paa)
    };
};
class AUC_Plad_Uni_3_F: AUC_Plad_Uni_F
{
    _generalMacro="AUC_Plad_Uni_3_F";
    uniformClass="U_AUC_Plad_Uni_3_F";
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
};
class C_E_LooterJacket_01_F;
class UAC_Looter_Base: C_E_LooterJacket_01_F
{
    uniformClass="U_UAC_Looter_Base";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Looter_Base_co.paa),
        "a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"
    };
};