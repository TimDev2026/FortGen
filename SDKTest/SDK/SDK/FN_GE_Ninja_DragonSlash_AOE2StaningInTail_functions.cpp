#include "pch.h"

#include "FN_GE_Ninja_DragonSlash_AOE2StaningInTail_classes.h"

UClass* UGE_Ninja_DragonSlash_AOE2StaningInTail_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GE_Ninja_DragonSlash_AOE2StaningInTail.GE_Ninja_DragonSlash_AOE2StaningInTail_C");

	return Class;
}

