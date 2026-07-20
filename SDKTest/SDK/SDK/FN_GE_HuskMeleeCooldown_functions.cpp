#include "pch.h"

#include "FN_GE_HuskMeleeCooldown_classes.h"

UClass* UGE_HuskMeleeCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskMeleeCooldown.GE_HuskMeleeCooldown_C");

	return Class;
}

