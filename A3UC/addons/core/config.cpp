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
            "A3_Functions_F",
		};
		author = AUTHOR;
		authorUrl = "";
		VERSION_CONFIG;
	};
};

#include "CfgFunctions.hpp"