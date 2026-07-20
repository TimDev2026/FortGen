#include "pch.h"

#include "FN_GE_Ninja_SmokeBomb_ImpactFX_classes.h"

UClass* UGE_Ninja_SmokeBomb_ImpactFX_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GE_Ninja_SmokeBomb_ImpactFX.GE_Ninja_SmokeBomb_ImpactFX_C");

	return Class;
}

