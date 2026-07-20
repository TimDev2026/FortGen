#include "pch.h"

#include "FN_GE_Constructor_Recycling_classes.h"

UClass* UGE_Constructor_Recycling_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_Recycling.GE_Constructor_Recycling_C");

	return Class;
}

