#include "pch.h"

#include "FN_GE_Constructor_HyperthreadingApplied_classes.h"

UClass* UGE_Constructor_HyperthreadingApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_HyperthreadingApplied.GE_Constructor_HyperthreadingApplied_C");

	return Class;
}

