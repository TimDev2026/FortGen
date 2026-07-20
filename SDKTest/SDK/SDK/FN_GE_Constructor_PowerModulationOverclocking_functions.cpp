#include "pch.h"

#include "FN_GE_Constructor_PowerModulationOverclocking_classes.h"

UClass* UGE_Constructor_PowerModulationOverclocking_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_PowerModulationOverclocking.GE_Constructor_PowerModulationOverclocking_C");

	return Class;
}

