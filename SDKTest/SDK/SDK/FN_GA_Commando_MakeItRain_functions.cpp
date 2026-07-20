#include "pch.h"

#include "FN_GA_Commando_MakeItRain_classes.h"

UClass* UGA_Commando_MakeItRain_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:SetupVariables
void UGA_Commando_MakeItRain_C::SetupVariables()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:SetupVariables");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:K2_ShouldAbilityRespondToEvent
bool UGA_Commando_MakeItRain_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Commando_MakeItRain_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:K2_ActivateAbilityFromEvent
void UGA_Commando_MakeItRain_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:K2_ActivateAbilityFromEvent");

	FUGA_Commando_MakeItRain_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:ExecuteUbergraph_GA_Commando_MakeItRain
void UGA_Commando_MakeItRain_C::ExecuteUbergraph_GA_Commando_MakeItRain(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GA_Commando_MakeItRain.GA_Commando_MakeItRain_C:ExecuteUbergraph_GA_Commando_MakeItRain");

	FUGA_Commando_MakeItRain_C_ExecuteUbergraph_GA_Commando_MakeItRain_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

