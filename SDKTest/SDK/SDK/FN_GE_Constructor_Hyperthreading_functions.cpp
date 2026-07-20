#include "pch.h"

#include "FN_GE_Constructor_Hyperthreading_classes.h"

UClass* UGE_Constructor_Hyperthreading_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_Hyperthreading.GE_Constructor_Hyperthreading_C");

	return Class;
}

