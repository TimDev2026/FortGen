#include "pch.h"

#include "FN_GE_Constructor_SafetyProtocolsApplied_classes.h"

UClass* UGE_Constructor_SafetyProtocolsApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_Constructor_SafetyProtocolsApplied.GE_Constructor_SafetyProtocolsApplied_C");

	return Class;
}

