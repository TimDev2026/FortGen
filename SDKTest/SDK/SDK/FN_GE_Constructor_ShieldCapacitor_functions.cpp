#include "pch.h"

#include "FN_GE_Constructor_ShieldCapacitor_classes.h"

UClass* UGE_Constructor_ShieldCapacitor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_ShieldCapacitor.GE_Constructor_ShieldCapacitor_C");

	return Class;
}

