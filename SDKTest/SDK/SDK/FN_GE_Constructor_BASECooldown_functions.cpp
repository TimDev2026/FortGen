#include "pch.h"

#include "FN_GE_Constructor_BASECooldown_classes.h"

UClass* UGE_Constructor_BASECooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GE_Constructor_BASECooldown.GE_Constructor_BASECooldown_C");

	return Class;
}

