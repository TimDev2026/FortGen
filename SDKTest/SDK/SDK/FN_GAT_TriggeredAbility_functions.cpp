#include "pch.h"

#include "FN_GAT_TriggeredAbility_classes.h"

UClass* UGAT_TriggeredAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C:K2_ActivateAbilityFromEvent
void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C:K2_ActivateAbilityFromEvent");

	FUGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C:ExecuteUbergraph_GAT_TriggeredAbility
void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C:ExecuteUbergraph_GAT_TriggeredAbility");

	FUGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

