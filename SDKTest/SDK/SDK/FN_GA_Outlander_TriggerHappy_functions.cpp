#include "pch.h"

#include "FN_GA_Outlander_TriggerHappy_classes.h"

UClass* UGA_Outlander_TriggerHappy_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:K2_ShouldAbilityRespondToEvent
bool UGA_Outlander_TriggerHappy_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Outlander_TriggerHappy_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_TriggerHappy_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_TriggerHappy_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:ExecuteUbergraph_GA_Outlander_TriggerHappy
void UGA_Outlander_TriggerHappy_C::ExecuteUbergraph_GA_Outlander_TriggerHappy(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Default/GA_Outlander_TriggerHappy.GA_Outlander_TriggerHappy_C:ExecuteUbergraph_GA_Outlander_TriggerHappy");

	FUGA_Outlander_TriggerHappy_C_ExecuteUbergraph_GA_Outlander_TriggerHappy_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

