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
// TO-DO: Enforce a naming convention. E.g:
// auc_tacbal_skull, auc_tacbal_festive
// It's easier to read and is generally a better idea to make it all lowercase too, unless under certain circumstances (see below).

// AUC_CategorySubcategory is acceptable. Example:
// AUC_ActionsObject >> AUC_ActionsObjectInventory