#include "pch.h"

#include "FN_GAB_HuskApplyFullBodyHit_classes.h"

UClass* UGAB_HuskApplyFullBodyHit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C:PickFullBodyHitMontageSection
void UGAB_HuskApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C:PickFullBodyHitMontageSection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C:ExecuteUbergraph_GAB_HuskApplyFullBodyHit
void UGAB_HuskApplyFullBodyHit_C::ExecuteUbergraph_GAB_HuskApplyFullBodyHit(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C:ExecuteUbergraph_GAB_HuskApplyFullBodyHit");

	FUGAB_HuskApplyFullBodyHit_C_ExecuteUbergraph_GAB_HuskApplyFullBodyHit_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

