#include "pch.h"

#include "FN_GE_Constructor_SubroutineOptimizationApplied_classes.h"

UClass* UGE_Constructor_SubroutineOptimizationApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_SubroutineOptimizationApplied.GE_Constructor_SubroutineOptimizationApplied_C");

	return Class;
}

