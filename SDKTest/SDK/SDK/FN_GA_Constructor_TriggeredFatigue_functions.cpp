#include "pch.h"

#include "FN_GA_Constructor_TriggeredFatigue_classes.h"

UClass* UGA_Constructor_TriggeredFatigue_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:K2_ShouldAbilityRespondToEvent
bool UGA_Constructor_TriggeredFatigue_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Constructor_TriggeredFatigue_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:K2_ActivateAbilityFromEvent
void UGA_Constructor_TriggeredFatigue_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:K2_ActivateAbilityFromEvent");

	FUGA_Constructor_TriggeredFatigue_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:ExecuteUbergraph_GA_Constructor_TriggeredFatigue
void UGA_Constructor_TriggeredFatigue_C::ExecuteUbergraph_GA_Constructor_TriggeredFatigue(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Packages/GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C:ExecuteUbergraph_GA_Constructor_TriggeredFatigue");

	FUGA_Constructor_TriggeredFatigue_C_ExecuteUbergraph_GA_Constructor_TriggeredFatigue_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

