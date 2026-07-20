#include "pch.h"

#include "FN_GE_Constructor_PlasmaPulseCooldown_classes.h"

UClass* UGE_Constructor_PlasmaPulseCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GE_Constructor_PlasmaPulseCooldown.GE_Constructor_PlasmaPulseCooldown_C");

	return Class;
}

