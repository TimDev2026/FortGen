#include "pch.h"

#include "FN_GE_Constructor_PowerModulationApplied_classes.h"

UClass* UGE_Constructor_PowerModulationApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_PowerModulationApplied.GE_Constructor_PowerModulationApplied_C");

	return Class;
}

