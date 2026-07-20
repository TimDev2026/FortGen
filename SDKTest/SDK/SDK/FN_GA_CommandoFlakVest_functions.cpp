#include "pch.h"

#include "FN_GA_CommandoFlakVest_classes.h"

UClass* UGA_CommandoFlakVest_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:K2_ShouldAbilityRespondToEvent
bool UGA_CommandoFlakVest_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:K2_ShouldAbilityRespondToEvent");

	FUGA_CommandoFlakVest_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:K2_ActivateAbilityFromEvent
void UGA_CommandoFlakVest_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:K2_ActivateAbilityFromEvent");

	FUGA_CommandoFlakVest_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:ReApplyShield
void UGA_CommandoFlakVest_C::ReApplyShield()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:ReApplyShield");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:ExecuteUbergraph_GA_CommandoFlakVest
void UGA_CommandoFlakVest_C::ExecuteUbergraph_GA_CommandoFlakVest(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Perserverence/GA_CommandoFlakVest.GA_CommandoFlakVest_C:ExecuteUbergraph_GA_CommandoFlakVest");

	FUGA_CommandoFlakVest_C_ExecuteUbergraph_GA_CommandoFlakVest_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

