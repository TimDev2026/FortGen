#include "pch.h"

#include "FN_GAT_ConstructorTriggeredAbility_classes.h"

UClass* UGAT_ConstructorTriggeredAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C:K2_ActivateAbilityFromEvent
void UGAT_ConstructorTriggeredAbility_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C:K2_ActivateAbilityFromEvent");

	FUGAT_ConstructorTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Parents/GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C:ExecuteUbergraph_GAT_ConstructorTriggeredAbility
void UGAT_ConstructorTriggeredAbility_C::ExecuteUbergraph_GAT_ConstructorTriggeredAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C:ExecuteUbergraph_GAT_ConstructorTriggeredAbility");

	FUGAT_ConstructorTriggeredAbility_C_ExecuteUbergraph_GAT_ConstructorTriggeredAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

