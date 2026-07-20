#include "pch.h"

#include "FN_GE_HuskDirectDamage_classes.h"

UClass* UGE_HuskDirectDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskDirectDamage.GE_HuskDirectDamage_C");

	return Class;
}

