#include "pch.h"

#include "FN_GE_Constructor_MiniPulseDamage_classes.h"

UClass* UGE_Constructor_MiniPulseDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GE_Constructor_MiniPulseDamage.GE_Constructor_MiniPulseDamage_C");

	return Class;
}

