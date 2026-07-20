#include "pch.h"

#include "FN_GE_KnockbackActive_classes.h"

UClass* UGE_KnockbackActive_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_KnockbackActive.GE_KnockbackActive_C");

	return Class;
}

