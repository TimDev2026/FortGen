#include "pch.h"

#include "FN_GE_Constructor_ShieldCapacitorApplied_classes.h"

UClass* UGE_Constructor_ShieldCapacitorApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_ShieldCapacitorApplied.GE_Constructor_ShieldCapacitorApplied_C");

	return Class;
}

