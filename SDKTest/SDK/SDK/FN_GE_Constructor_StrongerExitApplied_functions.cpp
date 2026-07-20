#include "pch.h"

#include "FN_GE_Constructor_StrongerExitApplied_classes.h"

UClass* UGE_Constructor_StrongerExitApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_StrongerExitApplied.GE_Constructor_StrongerExitApplied_C");

	return Class;
}

