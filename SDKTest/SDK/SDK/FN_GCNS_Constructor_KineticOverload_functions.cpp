#include "pch.h"

#include "FN_GCNS_Constructor_KineticOverload_classes.h"

UClass* UGCNS_Constructor_KineticOverload_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GCNS_Constructor_KineticOverload.GCNS_Constructor_KineticOverload_C");

	return Class;
}

