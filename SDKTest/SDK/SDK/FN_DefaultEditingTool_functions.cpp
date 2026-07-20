#include "pch.h"

#include "FN_DefaultEditingTool_classes.h"

UClass* ADefaultEditingTool_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C");

	return Class;
}

