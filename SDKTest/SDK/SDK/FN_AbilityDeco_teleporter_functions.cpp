#include "pch.h"

#include "FN_AbilityDeco_teleporter_classes.h"

UClass* AAbilityDeco_teleporter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/AbilityDeco_teleporter.AbilityDeco_teleporter_C");

	return Class;
}

