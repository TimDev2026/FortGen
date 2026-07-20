#include "pch.h"

#include "FN_GE_Generic_ShieldRegen_classes.h"

UClass* UGE_Generic_ShieldRegen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C");

	return Class;
}

