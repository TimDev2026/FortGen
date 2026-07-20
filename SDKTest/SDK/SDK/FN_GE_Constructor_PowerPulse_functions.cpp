#include "pch.h"

#include "FN_GE_Constructor_PowerPulse_classes.h"

UClass* UGE_Constructor_PowerPulse_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_PowerPulse.GE_Constructor_PowerPulse_C");

	return Class;
}

