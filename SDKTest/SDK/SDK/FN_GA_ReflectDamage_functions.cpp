#include "pch.h"

#include "FN_GA_ReflectDamage_classes.h"

UClass* UGA_ReflectDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C");

	return Class;
}

// Function /Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:ReflectDamage
void UGA_ReflectDamage_C::ReflectDamage(class UAbilitySystemComponent* OriginalDmgCauser, class UAbilitySystemComponent* OriginalDmgReceiver, class UAbilitySystemComponent* ReflectedDmgDealer, float OriginalDmg, FGameplayTagContainer OriginalDmgReceiverTags, FGameplayTagContainer OriginalDmgCauserTags)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:ReflectDamage");

	FUGA_ReflectDamage_C_ReflectDamage_Params Parms;

	Parms.OriginalDmgCauser = OriginalDmgCauser;
	Parms.OriginalDmgReceiver = OriginalDmgReceiver;
	Parms.ReflectedDmgDealer = ReflectedDmgDealer;
	Parms.OriginalDmg = OriginalDmg;
	Parms.OriginalDmgReceiverTags = OriginalDmgReceiverTags;
	Parms.OriginalDmgCauserTags = OriginalDmgCauserTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:K2_ActivateAbilityFromEvent
void UGA_ReflectDamage_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:K2_ActivateAbilityFromEvent");

	FUGA_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:ExecuteUbergraph_GA_ReflectDamage
void UGA_ReflectDamage_C::ExecuteUbergraph_GA_ReflectDamage(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/GA_ReflectDamage.GA_ReflectDamage_C:ExecuteUbergraph_GA_ReflectDamage");

	FUGA_ReflectDamage_C_ExecuteUbergraph_GA_ReflectDamage_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

