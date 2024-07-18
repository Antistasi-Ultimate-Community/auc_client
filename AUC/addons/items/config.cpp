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

class CfgCloudlets
{
	class Default;
	class AUC_ExploAmmoFlash: Default
	{
		interval=0.1;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.2;
		moveVelocity[]={0.1,0.2,0.1};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 0.2",
			"0.0125 * intensity + 0.05"
		};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0.1,0};
		MoveVelocityVar[]={0.2,0.5,0.2};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class AUC_Exp_Dust: Default
	{
		interval="0.013 * interval + 0.009";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=4.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=0;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.2;
		size[]=
		{
			"0.018 * intensity + 0.5",
			"0.018 * intensity + 0.7",
			"0.018 * intensity + 0.8",
			"0.018 * intensity + 0.9"
		};
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0.40000001},
			{1,1,1,0.22},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.7,0.60000002,0.40000001,0.30000001,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=2;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={0.2,0.2,0.2};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class AUC_Exp_AmmoImpact
{
};
class AUC_Exp_AmmoExplosion
{
	class ExploAmmoFlash
	{
		simulation="particles";
		type="AUC_ExploAmmoFlash";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class ExploAmmoSmoke
	{
		simulation="particles";
		type="AUC_Exp_Dust";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
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

class CfgMagazines
{
	#include "CfgMagazines.hpp"
};

class CfgAmmo
{
	#include "CfgAmmo.hpp"
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