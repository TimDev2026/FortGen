#include "pch.h"

#include "FN_GAB_FlingerApplyFullBodyHit_classes.h"

UClass* UGAB_FlingerApplyFullBodyHit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C");

	return Class;
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C:PickFullBodyHitMontageSection
void UGAB_FlingerApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C:PickFullBodyHitMontageSection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C:ExecuteUbergraph_GAB_FlingerApplyFullBodyHit
void UGAB_FlingerApplyFullBodyHit_C::ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C:ExecuteUbergraph_GAB_FlingerApplyFullBodyHit");

	FUGAB_FlingerApplyFullBodyHit_C_ExecuteUbergraph_GAB_FlingerApplyFullBodyHit_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

