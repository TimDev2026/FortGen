#include "pch.h"

#include "FN_GA_Commando_DebilitatingShots_classes.h"

UClass* UGA_Commando_DebilitatingShots_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupFatigue
void UGA_Commando_DebilitatingShots_C::SetupFatigue(FGameplayEffectSpecHandle EffectspecOutInstant, FGameplayEffectSpecHandle EffectspecOutDuration)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupFatigue");

	FUGA_Commando_DebilitatingShots_C_SetupFatigue_Params Parms;

	Parms.EffectspecOutInstant = EffectspecOutInstant;
	Parms.EffectspecOutDuration = EffectspecOutDuration;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupAppliedEffect
void UGA_Commando_DebilitatingShots_C::SetupAppliedEffect(float Duration, float Magnitude, int32_t Stack_Count, FGameplayEffectSpecHandle EffectSpecHandle, FGameplayEffectSpecHandle EffectspecHandleOut)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupAppliedEffect");

	FUGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params Parms;

	Parms.Duration = Duration;
	Parms.Magnitude = Magnitude;
	Parms.Stack_Count = Stack_Count;
	Parms.EffectSpecHandle = EffectSpecHandle;
	Parms.EffectspecHandleOut = EffectspecHandleOut;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupGameplayEffect
void UGA_Commando_DebilitatingShots_C::SetupGameplayEffect(class AActor* HitActor, FGameplayTag EventTag, class UObject* OptionalObject, FGameplayAbilityTargetDataHandle Target_Data, class UClass* DebilitatingShots, int32_t Effect_Level, int32_t Stack_Count)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:SetupGameplayEffect");

	FUGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params Parms;

	Parms.HitActor = HitActor;
	Parms.EventTag = EventTag;
	Parms.OptionalObject = OptionalObject;
	Parms.Target_Data = Target_Data;
	Parms.DebilitatingShots = DebilitatingShots;
	Parms.Effect_Level = Effect_Level;
	Parms.Stack_Count = Stack_Count;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:K2_ShouldAbilityRespondToEvent
bool UGA_Commando_DebilitatingShots_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:K2_ActivateAbilityFromEvent
void UGA_Commando_DebilitatingShots_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:K2_ActivateAbilityFromEvent");

	FUGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:ExecuteUbergraph_GA_Commando_DebilitatingShots
void UGA_Commando_DebilitatingShots_C::ExecuteUbergraph_GA_Commando_DebilitatingShots(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C:ExecuteUbergraph_GA_Commando_DebilitatingShots");

	FUGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

