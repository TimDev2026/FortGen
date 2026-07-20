#include "pch.h"

#include "FN_GE_Commando_GoinCommandoSnare_classes.h"

UClass* UGE_Commando_GoinCommandoSnare_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/GE_Commando_GoinCommandoSnare.GE_Commando_GoinCommandoSnare_C");

	return Class;
}

