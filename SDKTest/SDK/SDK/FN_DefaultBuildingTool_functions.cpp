#include "pch.h"

#include "FN_DefaultBuildingTool_classes.h"

UClass* ADefaultBuildingTool_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C");

	return Class;
}

