#include "pch.h"

#include "FN_GE_HealthRegen_Delay_Damaged_classes.h"

UClass* UGE_HealthRegen_Delay_Damaged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C");

	return Class;
}

