#include "pch.h"

#include "FN_GA_Commando_LuckyBreak_classes.h"

UClass* UGA_Commando_LuckyBreak_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:K2_ShouldAbilityRespondToEvent
bool UGA_Commando_LuckyBreak_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Commando_LuckyBreak_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:K2_ActivateAbilityFromEvent
void UGA_Commando_LuckyBreak_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:K2_ActivateAbilityFromEvent");

	FUGA_Commando_LuckyBreak_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:ExecuteUbergraph_GA_Commando_LuckyBreak
void UGA_Commando_LuckyBreak_C::ExecuteUbergraph_GA_Commando_LuckyBreak(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_Commando_LuckyBreak.GA_Commando_LuckyBreak_C:ExecuteUbergraph_GA_Commando_LuckyBreak");

	FUGA_Commando_LuckyBreak_C_ExecuteUbergraph_GA_Commando_LuckyBreak_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

