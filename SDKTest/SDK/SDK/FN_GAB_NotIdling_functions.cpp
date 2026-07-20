#include "pch.h"

#include "FN_GAB_NotIdling_classes.h"

UClass* UGAB_NotIdling_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C:K2_ActivateAbilityFromEvent
void UGAB_NotIdling_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C:K2_ActivateAbilityFromEvent");

	FUGAB_NotIdling_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C:ExecuteUbergraph_GAB_NotIdling
void UGAB_NotIdling_C::ExecuteUbergraph_GAB_NotIdling(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C:ExecuteUbergraph_GAB_NotIdling");

	FUGAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

