#include "pch.h"

#include "FN_GAB_GenericDeath_classes.h"

UClass* UGAB_GenericDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:InitializeDeathHitDirection
void UGAB_GenericDeath_C::InitializeDeathHitDirection(FGameplayEventData EventHitData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:InitializeDeathHitDirection");

	FUGAB_GenericDeath_C_InitializeDeathHitDirection_Params Parms;

	Parms.EventHitData = EventHitData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4
void UGAB_GenericDeath_C::OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:K2_ActivateAbilityFromEvent
void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:K2_ActivateAbilityFromEvent");

	FUGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:PickDeathMontageSection
void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:PickDeathMontageSection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:K2_OnEndAbility
void UGAB_GenericDeath_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:ExecuteUbergraph_GAB_GenericDeath
void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C:ExecuteUbergraph_GAB_GenericDeath");

	FUGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

