#include "pch.h"

#include "FN_GAB_FlingerRanged_classes.h"

UClass* UGAB_FlingerRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C");

	return Class;
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:K2_ActivateAbility
void UGAB_FlingerRanged_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:SpawnFX
void UGAB_FlingerRanged_C::SpawnFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:SpawnFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:StopFX
void UGAB_FlingerRanged_C::StopFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:StopFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:K2_OnEndAbility
void UGAB_FlingerRanged_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:ExecuteUbergraph_GAB_FlingerRanged
void UGAB_FlingerRanged_C::ExecuteUbergraph_GAB_FlingerRanged(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C:ExecuteUbergraph_GAB_FlingerRanged");

	FUGAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

