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
class I_C_Soldier_Bandit_3_F;
class AUC_Civ_1: I_C_Soldier_Bandit_3_F
{
    _generalMacro="AUC_Civ_1";
    scope=1;
    displayName="Blue";
    uniformClass="U_AUC_Civ_1";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Blue.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Blue.paa)
    };
};
class AUC_Civ_2: AUC_Civ_1
{
    _generalMacro="AUC_Civ_2";
    uniformClass="U_AUC_Civ_2";
    displayName="Designer";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Designer.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Designer.paa)
    };
};
class AUC_Civ_3: AUC_Civ_1
{
    _generalMacro="AUC_Civ_3";
    uniformClass="U_AUC_Civ_3";
    displayName="Black";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Black.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class AUC_Civ_4: AUC_Civ_1
{
    _generalMacro="AUC_Civ_4";
    uniformClass="U_AUC_Civ_4";
    displayName="Blue Green";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Green.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Blue.paa)
    };
};
class AUC_Civ_5: AUC_Civ_1
{
    _generalMacro="AUC_Civ_5";
    uniformClass="U_AUC_Civ_5";
    displayName="Gray Red";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Red.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Blue.paa)
    };
};
class AUC_Civ_6: AUC_Civ_1
{
    _generalMacro="AUC_Civ_6";
    uniformClass="U_AUC_Civ_6";
    displayName="Blue Yellow";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Yellow.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Blue.paa)
    };
};
class AUC_Civ_7: AUC_Civ_1
{
    _generalMacro="AUC_Civ_7";
    uniformClass="U_AUC_Civ_7";
    displayName="Blue Orange";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Orange.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Blue.paa)
    };
};
class AUC_Civ_8: AUC_Civ_1
{
    _generalMacro="AUC_Civ_8";
    uniformClass="U_AUC_Civ_8";
    displayName="Black Green";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Green.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class AUC_Civ_9: AUC_Civ_1
{
    _generalMacro="AUC_Civ_9";
    uniformClass="U_AUC_Civ_9";
    displayName="Black Red";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Red.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class AUC_Civ_10: AUC_Civ_1
{
    _generalMacro="AUC_Civ_10";
    uniformClass="U_AUC_Civ_10";
    displayName="Black Blue";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Blue.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class AUC_Civ_11: AUC_Civ_1
{
    _generalMacro="AUC_Civ_11";
    uniformClass="U_AUC_Civ_11";
    displayName="Black Yellow";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Yellow.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class AUC_Civ_12: AUC_Civ_1
{
    _generalMacro="AUC_Civ_12";
    uniformClass="U_AUC_Civ_12";
    displayName="Black Orange";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Orange.paa),
        QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Jeans_Black.paa)
    };
};
class C_Nikos;
class C_Maxx: C_Nikos
{
    editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Nikos.jpg";
    _generalMacro="C_Maxx";
    model="\A3\characters_F\civil\c_Nikos";
    displayName="Maxx";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Dealer.paa)};
    uniformClass="U_MaxxBody";
};