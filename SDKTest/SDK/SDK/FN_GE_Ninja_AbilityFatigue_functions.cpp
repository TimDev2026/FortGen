#include "pch.h"

#include "FN_GE_Ninja_AbilityFatigue_classes.h"

UClass* UGE_Ninja_AbilityFatigue_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Packages/GE_Ninja_AbilityFatigue.GE_Ninja_AbilityFatigue_C");

	return Class;
}

