#include "pch.h"

#include "FN_GE_Constructor_BiometricResonenceApplied_classes.h"

UClass* UGE_Constructor_BiometricResonenceApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_Constructor_BiometricResonenceApplied.GE_Constructor_BiometricResonenceApplied_C");

	return Class;
}

