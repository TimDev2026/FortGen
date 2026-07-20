#include "pch.h"

#include "FN_GA_Ninja_PoisonedBlade_classes.h"

UClass* UGA_Ninja_PoisonedBlade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:K2_ShouldAbilityRespondToEvent
bool UGA_Ninja_PoisonedBlade_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Ninja_PoisonedBlade_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:K2_ActivateAbilityFromEvent
void UGA_Ninja_PoisonedBlade_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:K2_ActivateAbilityFromEvent");

	FUGA_Ninja_PoisonedBlade_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:ExecuteUbergraph_GA_Ninja_PoisonedBlade
void UGA_Ninja_PoisonedBlade_C::ExecuteUbergraph_GA_Ninja_PoisonedBlade(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GA_Ninja_PoisonedBlade.GA_Ninja_PoisonedBlade_C:ExecuteUbergraph_GA_Ninja_PoisonedBlade");

	FUGA_Ninja_PoisonedBlade_C_ExecuteUbergraph_GA_Ninja_PoisonedBlade_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

