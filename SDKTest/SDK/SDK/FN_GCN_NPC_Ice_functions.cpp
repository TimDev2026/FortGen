#include "pch.h"

#include "FN_GCN_NPC_Ice_classes.h"

UClass* AGCN_NPC_Ice_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Elemental/GCN_NPC_Ice.GCN_NPC_Ice_C");

	return Class;
}

