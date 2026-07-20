#include "pch.h"

#include "FN_GAT_CommandoTriggeredAbility_classes.h"

UClass* UGAT_CommandoTriggeredAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C:K2_ActivateAbilityFromEvent
void UGAT_CommandoTriggeredAbility_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C:K2_ActivateAbilityFromEvent");

	FUGAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Parents/GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C:ExecuteUbergraph_GAT_CommandoTriggeredAbility
void UGAT_CommandoTriggeredAbility_C::ExecuteUbergraph_GAT_CommandoTriggeredAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C:ExecuteUbergraph_GAT_CommandoTriggeredAbility");

	FUGAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

