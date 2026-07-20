#include "pch.h"

#include "FN_AbilityDecoTool_classes.h"

UClass* AAbilityDecoTool_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/AbilityDecoTool.AbilityDecoTool_C");

	return Class;
}

