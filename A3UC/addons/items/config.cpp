#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			MOD(core)
		};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	#include "CfgVehicles.hpp"
};

class CfgUnitInsignia
{
	#include "CfgInsignias.hpp"
};

class cfgWeapons 
{
	class VestItem;
	class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class H_Beret_blk;
	#include "CfgWeapons.hpp"
};

class CfgGlasses
{
	class None;
	class G_Combat;
	class G_Balaclava_TI_blk_F;
	class G_Diving;
	#include "CfgGlasses.hpp"
};