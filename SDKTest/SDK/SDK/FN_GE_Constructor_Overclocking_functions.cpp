#include "pch.h"

#include "FN_GE_Constructor_Overclocking_classes.h"

UClass* UGE_Constructor_Overclocking_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_Overclocking.GE_Constructor_Overclocking_C");

	return Class;
}

