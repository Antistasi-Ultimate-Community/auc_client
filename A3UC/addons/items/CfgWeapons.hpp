//===================Hats===================
class AUC_Hat_Base: ItemCore {
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
class auc_hat_1: AUC_Hat_Base{
    scope = 2;
    scopeCurator = 2;
    displayName = "Cap (Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_Y.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_1.paa)};
}
class auc_hat_2: auc_hat_1{
    displayName = "Cap (Antistasi Ultimate Black)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_B.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_2.paa)};
}
class auc_hat_3: auc_hat_1{
    displayName = "Cap (Antistasi Ultimate White)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_H_W.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_3.paa)};
}
class auc_hat_4: auc_hat_1{
    displayName = "Cap (Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_H.paa);
    hiddenSelectionsTextures[] = {QPATHTOFOLDER(Data\berets\auc_hat_4.paa)};
}

//===================Berets===================
class b_AU: ItemCore{
    author="MaxxLite";
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
    class ItemInfo: HeadgearItem
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
class b_AUC: b_AU{
    displayName="Beret (Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_BLK.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC.paa)};
};
class b_AU_Green: b_AU{
    displayName="Beret (Green)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_G.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Green.paa)};
};
class b_AUC_Green: b_AU_Green{
    displayName="Beret (Green)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_G.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Green.paa)};
};
class b_AU_Blue: b_AU{
    displayName="Beret (Blue)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_B.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Blue.paa)};
};
class b_AUC_Blue: b_AU_Blue{
    displayName="Beret (Blue)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_B.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Blue.paa)};
};
class b_AU_Yellow: b_AU{
    displayName="Beret (Yellow)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_Y.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Yellow.paa)};
};
class b_AUC_Yellow: b_AU_Yellow{
    displayName="Beret (Yellow)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_Y.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Yellow.paa)};
};
class b_AU_Red: b_AU{
    displayName="Beret (Red)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_R.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Red.paa)};
};
class b_AUC_Red: b_AU_Red{
    displayName="Beret (Red)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_R.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Red.paa)};
};
class b_AU_Orange: b_AU{
    displayName="Beret (Orange)(Antistasi Ultimate)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AU_B_O.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AU_Orange.paa)};
};
class b_AUC_Orange: b_AU_Orange{
    displayName="Beret (Orange)(Antistasi Ultimate Community)";
    picture = QPATHTOFOLDER(Data\Icons\berets\I_AUC_B_O.paa);
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\berets\beret_AUC_Orange.paa)};
};

//===================Uniforms===================
class AUC_BLK_Uni: Uniform_Base
{
    author="MaxxLite";
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
    
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_BLK_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_BLK_Uni_2: AUC_BLK_Uni
{
    displayName="Combat Uniform (Black)(Tee)";
    class ItemInfo: UniformItem
    {
        uniformClass="AUC_BLK_Uni_2_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_BLK_Uni_3: AUC_BLK_Uni
{
    displayName="Combat Uniform (Black)(Rolled-Up)";
    class ItemInfo: UniformItem
    {
        uniformClass="AUC_BLK_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Olive_Uni: AUC_BLK_Uni
{
    displayName="Combat Uniform (Olive)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Olive.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Olive_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Olive_Uni_3: AUC_Olive_Uni
{
    displayName="Combat Uniform (Olive)(Rolled-Up)";
    class ItemInfo: UniformItem
    {
        uniformClass="AUC_Olive_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Arid_Uni: AUC_BLK_Uni
{
    displayName="Combat Uniform (Arid)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Arid.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Arid_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Arid_Uni_3: AUC_Arid_Uni
{
    displayName="Combat Uniform (Arid)(Rolled-Up)";
    class ItemInfo: UniformItem
    {
        uniformClass="AUC_Arid_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Plad_Uni: AUC_BLK_Uni
{
    displayName="Combat Uniform (Plad)";
    picture=QPATHTOFOLDER(Data\Icons\insignias\AU_BLK_INS.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Uni_Plad.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="AUC_Plad_Uni_F";
        containerClass="Supply40";
        mass=40;
    };
};
class AUC_Plad_Uni_3: AUC_Plad_Uni
{
    displayName="Combat Uniform (Plad)(Rolled-Up)";
    class ItemInfo: UniformItem
    {
        uniformClass="AUC_Plad_Uni_3_F";
        containerClass="Supply40";
        mass=40;
    };
};

class U_UAC_Looter_Base: Uniform_Base
{
    author="$STR_A3_Bohemia_Interactive";
    scope=2;
    displayName="Looter (Base)";
    picture="\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_E_LooterJacket_01_F_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\Clothing\AUC_Looter_Base_co.paa)
    };
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="UAC_Looter_Base";
        containerClass="Supply30";
        mass=30;
    };
};