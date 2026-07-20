#include "pch.h"

#include "FN_GAT_NinjaTriggeredAbility_classes.h"

UClass* UGAT_NinjaTriggeredAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C:K2_ActivateAbilityFromEvent
void UGAT_NinjaTriggeredAbility_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C:K2_ActivateAbilityFromEvent");

	FUGAT_NinjaTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Parents/GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C:ExecuteUbergraph_GAT_NinjaTriggeredAbility
void UGAT_NinjaTriggeredAbility_C::ExecuteUbergraph_GAT_NinjaTriggeredAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C:ExecuteUbergraph_GAT_NinjaTriggeredAbility");

	FUGAT_NinjaTriggeredAbility_C_ExecuteUbergraph_GAT_NinjaTriggeredAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

