#include "pch.h"

#include "FN_GE_BiometricResonenceAppliedHeal_classes.h"

UClass* UGE_BiometricResonenceAppliedHeal_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_BiometricResonenceAppliedHeal.GE_BiometricResonenceAppliedHeal_C");

	return Class;
}

