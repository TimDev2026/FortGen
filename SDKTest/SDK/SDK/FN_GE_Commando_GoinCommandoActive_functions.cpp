#include "pch.h"

#include "FN_GE_Commando_GoinCommandoActive_classes.h"

UClass* UGE_Commando_GoinCommandoActive_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GE_Commando_GoinCommandoActive.GE_Commando_GoinCommandoActive_C");

	return Class;
}

