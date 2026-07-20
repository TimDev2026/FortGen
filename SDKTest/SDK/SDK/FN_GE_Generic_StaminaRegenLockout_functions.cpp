#include "pch.h"

#include "FN_GE_Generic_StaminaRegenLockout_classes.h"

UClass* UGE_Generic_StaminaRegenLockout_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_StaminaRegenLockout.GE_Generic_StaminaRegenLockout_C");

	return Class;
}

