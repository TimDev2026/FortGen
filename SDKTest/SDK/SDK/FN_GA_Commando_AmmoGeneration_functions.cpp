#include "pch.h"

#include "FN_GA_Commando_AmmoGeneration_classes.h"

UClass* UGA_Commando_AmmoGeneration_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:SetupVariables
void UGA_Commando_AmmoGeneration_C::SetupVariables()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:SetupVariables");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:K2_ActivateAbilityFromEvent
void UGA_Commando_AmmoGeneration_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:K2_ActivateAbilityFromEvent");

	FUGA_Commando_AmmoGeneration_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:ExecuteUbergraph_GA_Commando_AmmoGeneration
void UGA_Commando_AmmoGeneration_C::ExecuteUbergraph_GA_Commando_AmmoGeneration(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Traits/Assault/GA_Commando_AmmoGeneration.GA_Commando_AmmoGeneration_C:ExecuteUbergraph_GA_Commando_AmmoGeneration");

	FUGA_Commando_AmmoGeneration_C_ExecuteUbergraph_GA_Commando_AmmoGeneration_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

