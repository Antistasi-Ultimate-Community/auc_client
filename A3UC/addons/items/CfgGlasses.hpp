//===================Glasses===================
class AUC_g_Combat_Black : G_Combat
{
    author = AUTHOR;
    displayname="Combat Goggles (Black)";
    model="\A3\characters_f_beta\heads\glasses\g_combat";
    picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa);
    };
    mass=4;
    mode = 4;
};

//===================Masks===================
class AUC_Tac_Bal_Skull : G_Balaclava_TI_blk_F
{
    author = AUTHOR;
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    displayName="Stealth Balaclava (Skull)";
    model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Skull.paa);
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Skull.paa)
    };
    identityTypes[]={};
    mass=6;
    mode = 4;
};
class AUC_Tac_Bal_Skull_Goggles : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (Skull, Goggles)";
    model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Skull.paa);
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Skull.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
    identityTypes[]={};
    mass=10;
};
class AUC_Tac_Bal_Snow : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (Snow)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_W.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Snow.paa)
    };
};
class AUC_Tac_Bal_Snow_Goggles : AUC_Tac_Bal_Skull_Goggles
{
    displayName="Stealth Balaclava (Snow, Goggles)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_W.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Snow.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
};
class AUC_Tac_Bal_Festive : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (Festive)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Fes.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Festive.paa)
    };
};
class AUC_Tac_Bal_Festive_Goggles : AUC_Tac_Bal_Skull_Goggles
{
    displayName="Stealth Balaclava (Festive, Goggles)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Fes.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Festive.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
};
class AUC_Tac_Bal_Woodland : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (Woodland)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_WD.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Woodland.paa)
    };
};
class AUC_Tac_Bal_Woodland_Goggles : AUC_Tac_Bal_Skull_Goggles
{
    displayName="Stealth Balaclava (Woodland, Goggles)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_WD.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_Woodland.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
};
class AUC_Tac_Bal_MTP : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (MTP)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_MTP.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_MTP.paa)
    };
};
class AUC_Tac_Bal_MTP_Goggles : AUC_Tac_Bal_Skull_Goggles
{
    displayName="Stealth Balaclava (MTP, Goggles)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_MTP.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_MTP.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
};
class AUC_Tac_Bal_BlackCamo : AUC_Tac_Bal_Skull
{
    displayName="Stealth Balaclava (Black Camo)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Blk.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_BlackCamo.paa)
    };
};
class AUC_Tac_Bal_BlackCamo_Goggles : AUC_Tac_Bal_Skull_Goggles
{
    displayName="Stealth Balaclava (Black Camo, Goggles)";
    picture = QPATHTOFOLDER(Data\Icons\Masks\I_Bal_Blk.paa);
    hiddenSelectionsTextures[]=
    {
        QPATHTOFOLDER(Data\NetMask\Maxx_g_balaclava_ti_BlackCamo.paa),
        QPATHTOFOLDER(Data\NetMask\Maxx_g_combat_BLK.paa)
    };
};

//===================Costume Models===================
class Maxx_Net_Mask_BASE : G_Diving
{
    author = AUTHOR;
    scope=0;
    scopeCurator=0;
    identityTypes[]=
    {
        "G_RUS_SF",
        0,
        "G_CIVIL_aidworker",
        0,
        "G_CIVIL_man",
        0,
        "G_CIVIL_paramedic",
        0,
        "G_CIVIL_constructionworker",
        0,
        "NoGlasses",
        0,
        "G_NATO_default",
        0,
        "G_NATO_casual",
        0,
        "G_NATO_pilot",
        0,
        "G_NATO_recon",
        0,
        "G_NATO_SF",
        0,
        "G_NATO_sniper",
        0,
        "G_NATO_diver",
        0,
        "G_IRAN_default",
        0,
        "G_IRAN_diver",
        0,
        "G_GUERIL_default",
        0,
        "G_HAF_default",
        0,
        "G_CIVIL_female",
        0,
        "G_CIVIL_male",
        0,
        "g_Rangemaster",
        0,
        "G_IRAN_officer",
        0
    };
};
class Maxx_Net_Mask : Maxx_Net_Mask_BASE
{
    scope=1;
    scopeCurator=1;
    displayName="test";
    picture = QPATHTOFOLDER(Data\Icons\Masks\Maxx_Net_Mask_Icon.paa); //"\AUC_a\Data\NetMask\Maxx_Net_Mask_Icon.paa";
    model=QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_Model);
    mass = 4;
    mode = 4;
};
class Maxx_Net_Mask_SnowCamo : Maxx_Net_Mask
{
    scope=1;
    scopeCurator=1;
    displayName="Net Mask (Snow Camo)";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_SnowCamo.paa)};
};
class Maxx_Net_Mask_Sand : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Sand)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_Desert.paa)};
};
class Maxx_Net_Mask_Olive : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Olive)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_Olive.paa)};
};
class Maxx_Net_Mask_MTP : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (MTP)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_MTP.paa)};
};
class Maxx_Net_Mask_BLKCamo : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Black Camo)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_BLKCamo.paa)};
};
class Maxx_Net_Mask_DesertCamo : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Desert Camo)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_DesertCamo.paa)};
};
class Maxx_Net_Mask_Woodland : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Woodland)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_Woodland.paa)};
};
class Maxx_Net_Mask_WhiteCamo : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (White Camo)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_WhiteCamo.paa)};
};
class Maxx_Net_Mask_Black : Maxx_Net_Mask_SnowCamo
{
    displayName="Net Mask (Black)";
    hiddenSelectionsTextures[]={QPATHTOFOLDER(Data\NetMask\Maxx_Net_Mask_Black.paa)};
};

// TO-DO: Enforce a naming convention. E.g:
// auc_tacbal_skull, auc_tacbal_festive
// It's easier to read and is generally a better idea to make it all lowercase too, unless under certain circumstances (see below).

// AUC_CategorySubcategory is acceptable. Example:
// AUC_ActionsObject >> AUC_ActionsObjectInventory