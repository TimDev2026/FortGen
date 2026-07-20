#include "pch.h"

#include "FN_GE_Constructor_LoftyArchitectureApplied_classes.h"

UClass* UGE_Constructor_LoftyArchitectureApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_LoftyArchitectureApplied.GE_Constructor_LoftyArchitectureApplied_C");

	return Class;
}

