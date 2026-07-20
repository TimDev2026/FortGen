#include "pch.h"

#include "FN_GCN_NPC_Lightning_classes.h"

UClass* AGCN_NPC_Lightning_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Elemental/GCN_NPC_Lightning.GCN_NPC_Lightning_C");

	return Class;
}

