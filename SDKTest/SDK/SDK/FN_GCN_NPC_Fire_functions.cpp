#include "pch.h"

#include "FN_GCN_NPC_Fire_classes.h"

UClass* AGCN_NPC_Fire_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Elemental/GCN_NPC_Fire.GCN_NPC_Fire_C");

	return Class;
}

