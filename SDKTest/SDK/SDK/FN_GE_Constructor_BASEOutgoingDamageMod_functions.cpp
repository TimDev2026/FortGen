#include "pch.h"

#include "FN_GE_Constructor_BASEOutgoingDamageMod_classes.h"

UClass* UGE_Constructor_BASEOutgoingDamageMod_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GE_Constructor_BASEOutgoingDamageMod.GE_Constructor_BASEOutgoingDamageMod_C");

	return Class;
}

