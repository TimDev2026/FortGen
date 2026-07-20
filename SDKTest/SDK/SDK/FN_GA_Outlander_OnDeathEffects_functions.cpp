#include "pch.h"

#include "FN_GA_Outlander_OnDeathEffects_classes.h"

UClass* UGA_Outlander_OnDeathEffects_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_OnDeathEffects_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_OnDeathEffects_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C:ExecuteUbergraph_GA_Outlander_OnDeathEffects
void UGA_Outlander_OnDeathEffects_C::ExecuteUbergraph_GA_Outlander_OnDeathEffects(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C:ExecuteUbergraph_GA_Outlander_OnDeathEffects");

	FUGA_Outlander_OnDeathEffects_C_ExecuteUbergraph_GA_Outlander_OnDeathEffects_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

