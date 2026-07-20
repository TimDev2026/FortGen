#include "pch.h"

#include "FN_GE_Constructor_EmergencyOverride_classes.h"

UClass* UGE_Constructor_EmergencyOverride_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_EmergencyOverride.GE_Constructor_EmergencyOverride_C");

	return Class;
}

