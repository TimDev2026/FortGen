#include "pch.h"

#include "FN_GAT_OutlanderTriggeredAbility_classes.h"

UClass* UGAT_OutlanderTriggeredAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C:K2_ActivateAbilityFromEvent
void UGAT_OutlanderTriggeredAbility_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C:K2_ActivateAbilityFromEvent");

	FUGAT_OutlanderTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Parents/GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C:ExecuteUbergraph_GAT_OutlanderTriggeredAbility
void UGAT_OutlanderTriggeredAbility_C::ExecuteUbergraph_GAT_OutlanderTriggeredAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C:ExecuteUbergraph_GAT_OutlanderTriggeredAbility");

	FUGAT_OutlanderTriggeredAbility_C_ExecuteUbergraph_GAT_OutlanderTriggeredAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

