#include "pch.h"

#include "FN_GE_Constructor_ContainmentUnitDamage_classes.h"

UClass* UGE_Constructor_ContainmentUnitDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GE_Constructor_ContainmentUnitDamage.GE_Constructor_ContainmentUnitDamage_C");

	return Class;
}

