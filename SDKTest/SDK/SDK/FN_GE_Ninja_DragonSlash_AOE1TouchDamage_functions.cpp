#include "pch.h"

#include "FN_GE_Ninja_DragonSlash_AOE1TouchDamage_classes.h"

UClass* UGE_Ninja_DragonSlash_AOE1TouchDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GE_Ninja_DragonSlash_AOE1TouchDamage.GE_Ninja_DragonSlash_AOE1TouchDamage_C");

	return Class;
}

