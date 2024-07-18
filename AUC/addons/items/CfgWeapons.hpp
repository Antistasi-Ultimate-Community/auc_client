//===================Hats===================
class AUC_Hat_Base : ItemCore 
{
    scope = 1;
    displayName = "-";
    picture = QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    model = "\A3\Characters_F\Common\capb";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"-"};
    class ItemInfo: HeadgearItem {
        uniformModel = "\A3\Characters_F\Common\capb";
        hiddenSelections[] = {"Camo"};
        side = 1;
        mass = 10;
    };
};

class auc_hat_1 : AUC_Hat_Base
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cap (Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_Y.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_1.paa)};
};
class auc_hat_2 : auc_hat_1
{
    displayName = "Cap (Antistasi Ultimate Black)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_B.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_2.paa)};
};
class auc_hat_3 : auc_hat_1
{
    displayName = "Cap (Antistasi Ultimate White)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_W.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_3.paa)};
};
class auc_hat_4 : auc_hat_1
{
    displayName = "Cap (Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_H.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_4.paa)};
};

//===================Berets===================
class b_AU : ItemCore
{
    author = AUTHOR;
    scope = 2;
    scopeCurator = 2;
    weaponPoolAvailable=1;
    displayName="Beret (Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_BLK.paa);
    model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\berets\beret_AU.paa)
    };
    class ItemInfo : HeadgearItem
    {
        mass=6;
        uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02";
        modelSides[]={3,1};
        armor=0;
        passThrough=1;
        hiddenSelections[]=
        {
            "camo"
        };
    };
};
class b_AUC : b_AU
{
    displayName="Beret (Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_BLK.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC.paa)};
};
class b_AU_Green : b_AU
{
    displayName="Beret (Green)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_G.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Green.paa)};
};
class b_AUC_Green : b_AU_Green
{
    displayName="Beret (Green)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_G.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Green.paa)};
};
class b_AU_Blue : b_AU
{
    displayName="Beret (Blue)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_B.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Blue.paa)};
};
class b_AUC_Blue : b_AU_Blue
{
    displayName="Beret (Blue)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_B.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Blue.paa)};
};
class b_AU_Yellow : b_AU
{
    displayName="Beret (Yellow)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_Y.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Yellow.paa)};
};
class b_AUC_Yellow : b_AU_Yellow
{
    displayName="Beret (Yellow)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_Y.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Yellow.paa)};
};
class b_AU_Red : b_AU
{
    displayName="Beret (Red)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_R.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Red.paa)};
};
class b_AUC_Red : b_AU_Red
{
    displayName="Beret (Red)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_R.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Red.paa)};
};
class b_AU_Orange : b_AU
{
    displayName="Beret (Orange)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_O.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Orange.paa)};
};
class b_AUC_Orange : b_AU_Orange
{
    displayName="Beret (Orange)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_O.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Orange.paa)};
};

//===================Uniforms===================
class U_BG_Guerilla2_1;
class AUC_Casual_Hawaiian_Red: U_BG_Guerilla2_1
{
    scope=2;
    displayName="Casual Wear (Hawaiian Red)";
    picture = QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Red.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Red_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Hawaiian_Blue: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Hawaiian Blue)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Blue.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Blue_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Hawaiian_Green: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Hawaiian Green)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Green.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Green_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Red: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Red)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Red.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Red_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Black)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Green: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Green)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Green.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Green_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Hawaiian_Red_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Hawaiian Red)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Red_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Red_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Hawaiian_Blue_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Hawaiian Blue)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Blue_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Blue_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Hawaiian_Green_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Hawaiian Green)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Hawaiian_Green_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Hawaiian_Green_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Red_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Red)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Red_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Red_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Black_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Black)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Black_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Black_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_Casual_Plad_Green_Black: AUC_Casual_Hawaiian_Red
{
    displayName="Casual Wear (Plad Green)(Alt)";
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Casual_Plad_Green_Black.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Casual_Plad_Green_Black_f";
        containerClass="Supply30";
        mass=30;
    };
};
class AUC_BLK_Uni : Uniform_Base
{
    author = AUTHOR;
    scope=2;
    displayName="Combat Uniform (Black)";
    picture = QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_BLK.paa)
    };
    
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_BLK_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_BLK_Uni_2 : AUC_BLK_Uni
{
    displayName="Combat Uniform (Black)(Tee)";
    class ItemInfo : UniformItem
    {
        uniformClass="AUC_BLK_Uni_2_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_BLK_Uni_3 : AUC_BLK_Uni
{
    displayName="Combat Uniform (Black)(Rolled-Up)";
    class ItemInfo : UniformItem
    {
        uniformClass="AUC_BLK_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Olive_Uni : AUC_BLK_Uni
{
    displayName="Combat Uniform (Olive)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Olive.paa)
    };
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Olive_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Olive_Uni_3 : AUC_Olive_Uni
{
    displayName="Combat Uniform (Olive)(Rolled-Up)";
    class ItemInfo : UniformItem
    {
        uniformClass="AUC_Olive_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Arid_Uni : AUC_BLK_Uni
{
    displayName="Combat Uniform (Arid)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Arid.paa)
    };
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Arid_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Arid_Uni_3 : AUC_Arid_Uni
{
    displayName="Combat Uniform (Arid)(Rolled-Up)";
    class ItemInfo : UniformItem
    {
        uniformClass="AUC_Arid_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Plad_Uni : AUC_BLK_Uni
{
    displayName="Combat Uniform (Plad)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Plad.paa)
    };
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Plad_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Plad_Uni_3 : AUC_Plad_Uni
{
    displayName="Combat Uniform (Plad)(Rolled-Up)";
    class ItemInfo : UniformItem
    {
        uniformClass="AUC_Plad_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class U_AUC_Civ_1 : Uniform_Base
{
    scope=2;
    scopeCurator=2;
    displayName="Civ Clothes (Blue)";
    picture="\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_3_F_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Blue.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_1";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_2 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Designer)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Designer.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_2";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_3 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Black.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_3";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_4 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Green & Blue)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Green.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_4";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_5 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Red & Gray)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Red.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_5";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_6 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Blue & Yellow)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Yellow.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_6";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_7 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Blue & Orange)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Orange.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_7";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_8 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black & Green)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Green.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_8";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_9 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black & Red)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Red.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_9";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_10 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black & Blue)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Blue.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_10";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_11 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black & Yellow)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Yellow.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_11";
        containerClass="Supply30";
        mass=30;
    };
};
class U_AUC_Civ_12 : U_AUC_Civ_1
{
    displayName="Civ Clothes (Black & Orange)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Civ_1_Shirt_Orange.paa)};
    class ItemInfo : UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Civ_12";
        containerClass="Supply30";
        mass=30;
    };
};
class hgun_Pistol_heavy_01_F;
class UAC_Pistol_45: hgun_Pistol_heavy_01_F
{
    _generalMacro="UAC_Pistol_45";
    baseWeapon="UAC_Pistol_45";
    scope=2;
    displayname="FNX-45 Phoenix";
    magazines[]=
    {
        "5Rnd_45ACP_EXP_Mag"
    };
    magazineWell[]=
    {
        "PistolHeavy_01_45ACP"
    };
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Weapons\AUC_Pistol_45.paa)};
};
class hgun_ACPC2_F;
class AUC_Colt_Silver : hgun_ACPC2_F
{
    _generalMacro="AUC_Colt_Silver";
    baseWeapon="AUC_Colt_Silver";
    scope=2;
    displayname="Colt-1911 (Silver)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Weapons\AUC_Colt_1911_Silver.paa)};
};
class AUC_Colt_Gold : AUC_Colt_Silver
{
    _generalMacro="AUC_Colt_Gold";
    baseWeapon="AUC_Colt_Gold";
    displayname="Colt-1911 (Gold)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Weapons\AUC_Colt_1911_Gold.paa)};
};
class AUC_Colt_Red : AUC_Colt_Silver
{
    _generalMacro="AUC_Colt_Red";
    baseWeapon="AUC_Colt_Red";
    displayname="Colt-1911 (Red)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Weapons\AUC_Colt_1911_Red.paa)};
};
class U_Tony: Uniform_Base
{
    scope=2;
    displayName="Casual Wear (Tony)";
    picture="\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\Clothing\AUC_Tony_co.paa)};
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Tony_F";
        containerClass="Supply30";
        mass=30;
    };
};