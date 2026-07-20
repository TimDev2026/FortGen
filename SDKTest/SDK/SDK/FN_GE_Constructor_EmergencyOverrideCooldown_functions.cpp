#include "pch.h"

#include "FN_GE_Constructor_EmergencyOverrideCooldown_classes.h"

UClass* UGE_Constructor_EmergencyOverrideCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_EmergencyOverrideCooldown.GE_Constructor_EmergencyOverrideCooldown_C");

	return Class;
}

