#include "pch.h"

#include "FN_GE_Constructor_PlasmaPulseDamage_classes.h"

UClass* UGE_Constructor_PlasmaPulseDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GE_Constructor_PlasmaPulseDamage.GE_Constructor_PlasmaPulseDamage_C");

	return Class;
}

