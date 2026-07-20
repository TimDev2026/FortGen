#include "pch.h"

#include "FN_GA_ReflectDamage_WithSource_classes.h"

UClass* UGA_ReflectDamage_WithSource_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C");

	return Class;
}

// Function /Game/Abilities/GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C:K2_ActivateAbilityFromEvent
void UGA_ReflectDamage_WithSource_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C:K2_ActivateAbilityFromEvent");

	FUGA_ReflectDamage_WithSource_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C:ExecuteUbergraph_GA_ReflectDamage_WithSource
void UGA_ReflectDamage_WithSource_C::ExecuteUbergraph_GA_ReflectDamage_WithSource(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C:ExecuteUbergraph_GA_ReflectDamage_WithSource");

	FUGA_ReflectDamage_WithSource_C_ExecuteUbergraph_GA_ReflectDamage_WithSource_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

