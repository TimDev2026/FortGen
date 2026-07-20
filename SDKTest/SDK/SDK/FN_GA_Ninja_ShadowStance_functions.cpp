#include "pch.h"

#include "FN_GA_Ninja_ShadowStance_classes.h"

UClass* UGA_Ninja_ShadowStance_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:K2_ShouldAbilityRespondToEvent
bool UGA_Ninja_ShadowStance_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Ninja_ShadowStance_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:K2_ActivateAbilityFromEvent
void UGA_Ninja_ShadowStance_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:K2_ActivateAbilityFromEvent");

	FUGA_Ninja_ShadowStance_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:ExecuteUbergraph_GA_Ninja_ShadowStance
void UGA_Ninja_ShadowStance_C::ExecuteUbergraph_GA_Ninja_ShadowStance(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_ShadowStance.GA_Ninja_ShadowStance_C:ExecuteUbergraph_GA_Ninja_ShadowStance");

	FUGA_Ninja_ShadowStance_C_ExecuteUbergraph_GA_Ninja_ShadowStance_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

