#include "pch.h"

#include "FN_GE_Ninja_SmokeBomb_RunSpeed_classes.h"

UClass* UGE_Ninja_SmokeBomb_RunSpeed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GE_Ninja_SmokeBomb_RunSpeed.GE_Ninja_SmokeBomb_RunSpeed_C");

	return Class;
}

