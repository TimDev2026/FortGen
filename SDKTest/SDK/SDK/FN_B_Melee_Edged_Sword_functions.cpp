#include "pch.h"

#include "FN_B_Melee_Edged_Sword_classes.h"

UClass* AB_Melee_Edged_Sword_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Melee/Blueprints/Edged/B_Melee_Edged_Sword.B_Melee_Edged_Sword_C");

	return Class;
}

