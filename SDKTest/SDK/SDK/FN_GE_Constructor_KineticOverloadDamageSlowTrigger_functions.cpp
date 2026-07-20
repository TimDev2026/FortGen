#include "pch.h"

#include "FN_GE_Constructor_KineticOverloadDamageSlowTrigger_classes.h"

UClass* UGE_Constructor_KineticOverloadDamageSlowTrigger_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_KineticOverloadDamageSlowTrigger.GE_Constructor_KineticOverloadDamageSlowTrigger_C");

	return Class;
}

