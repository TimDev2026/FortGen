#include "pch.h"

#include "FN_GA_WhereWeregoingWeNeedRoadsRemove_classes.h"

UClass* UGA_WhereWeregoingWeNeedRoadsRemove_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/Observation/GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C:K2_ActivateAbilityFromEvent
void UGA_WhereWeregoingWeNeedRoadsRemove_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C:K2_ActivateAbilityFromEvent");

	FUGA_WhereWeregoingWeNeedRoadsRemove_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/Observation/GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C:ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove
void UGA_WhereWeregoingWeNeedRoadsRemove_C::ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/Observation/GA_WhereWeregoingWeNeedRoadsRemove.GA_WhereWeregoingWeNeedRoadsRemove_C:ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove");

	FUGA_WhereWeregoingWeNeedRoadsRemove_C_ExecuteUbergraph_GA_WhereWeregoingWeNeedRoadsRemove_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

