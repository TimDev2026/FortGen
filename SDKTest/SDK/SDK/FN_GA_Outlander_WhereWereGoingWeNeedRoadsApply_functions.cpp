#include "pch.h"

#include "FN_GA_Outlander_WhereWereGoingWeNeedRoadsApply_classes.h"

UClass* UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:SetVariables
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::SetVariables(FGameplayEffectSpecHandle GameplaySpec)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:SetVariables");

	FUGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_SetVariables_Params Parms;

	Parms.GameplaySpec = GameplaySpec;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C:ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply");

	FUGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

