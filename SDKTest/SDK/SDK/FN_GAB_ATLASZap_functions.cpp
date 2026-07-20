#include "pch.h"

#include "FN_GAB_ATLASZap_classes.h"

UClass* UGAB_ATLASZap_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C:K2_ActivateAbilityFromEvent
void UGAB_ATLASZap_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C:K2_ActivateAbilityFromEvent");

	FUGAB_ATLASZap_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C:ExecuteUbergraph_GAB_ATLASZap
void UGAB_ATLASZap_C::ExecuteUbergraph_GAB_ATLASZap(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C:ExecuteUbergraph_GAB_ATLASZap");

	FUGAB_ATLASZap_C_ExecuteUbergraph_GAB_ATLASZap_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

