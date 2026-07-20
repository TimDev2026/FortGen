#include "pch.h"

#include "FN_GE_HuskAOE3DOTPoison_classes.h"

UClass* UGE_HuskAOE3DOTPoison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskAOE3DOTPoison.GE_HuskAOE3DOTPoison_C");

	return Class;
}

