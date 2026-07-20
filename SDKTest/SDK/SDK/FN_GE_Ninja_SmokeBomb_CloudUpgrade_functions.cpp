#include "pch.h"

#include "FN_GE_Ninja_SmokeBomb_CloudUpgrade_classes.h"

UClass* UGE_Ninja_SmokeBomb_CloudUpgrade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GE_Ninja_SmokeBomb_CloudUpgrade.GE_Ninja_SmokeBomb_CloudUpgrade_C");

	return Class;
}

