#include "pch.h"

#include "FN_GE_Constructor_KineticOverloadCooldown_classes.h"

UClass* UGE_Constructor_KineticOverloadCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_KineticOverloadCooldown.GE_Constructor_KineticOverloadCooldown_C");

	return Class;
}

