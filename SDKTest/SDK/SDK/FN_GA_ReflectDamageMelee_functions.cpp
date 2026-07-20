#include "pch.h"

#include "FN_GA_ReflectDamageMelee_classes.h"

UClass* UGA_ReflectDamageMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/GA_ReflectDamageMelee.GA_ReflectDamageMelee_C");

	return Class;
}

// Function /Game/Abilities/GA_ReflectDamageMelee.GA_ReflectDamageMelee_C:K2_ActivateAbilityFromEvent
void UGA_ReflectDamageMelee_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamageMelee.GA_ReflectDamageMelee_C:K2_ActivateAbilityFromEvent");

	FUGA_ReflectDamageMelee_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/GA_ReflectDamageMelee.GA_ReflectDamageMelee_C:ExecuteUbergraph_GA_ReflectDamageMelee
void UGA_ReflectDamageMelee_C::ExecuteUbergraph_GA_ReflectDamageMelee(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamageMelee.GA_ReflectDamageMelee_C:ExecuteUbergraph_GA_ReflectDamageMelee");

	FUGA_ReflectDamageMelee_C_ExecuteUbergraph_GA_ReflectDamageMelee_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

