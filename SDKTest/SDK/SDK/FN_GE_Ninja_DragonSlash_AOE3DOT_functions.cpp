#include "pch.h"

#include "FN_GE_Ninja_DragonSlash_AOE3DOT_classes.h"

UClass* UGE_Ninja_DragonSlash_AOE3DOT_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GE_Ninja_DragonSlash_AOE3DOT.GE_Ninja_DragonSlash_AOE3DOT_C");

	return Class;
}

