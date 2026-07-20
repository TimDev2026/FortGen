#include "pch.h"

#include "FN_GE_ShieldRegen_Delay_Damaged_classes.h"

UClass* UGE_ShieldRegen_Delay_Damaged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C");

	return Class;
}

