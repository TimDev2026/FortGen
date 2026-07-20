#include "pch.h"

#include "FN_GAB_HuskyHuskMelee_classes.h"

UClass* UGAB_HuskyHuskMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Husky/GAB_HuskyHuskMelee.GAB_HuskyHuskMelee_C");

	return Class;
}

