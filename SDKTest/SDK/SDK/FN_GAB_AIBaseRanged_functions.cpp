#include "pch.h"

#include "FN_GAB_AIBaseRanged_classes.h"

UClass* UGAB_AIBaseRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Completed_2221E89D4148023005FB94B04BA06EF9
void UGAB_AIBaseRanged_C::Completed_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Completed_2221E89D4148023005FB94B04BA06EF9");

	FUGAB_AIBaseRanged_C_Completed_2221E89D4148023005FB94B04BA06EF9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Cancelled_2221E89D4148023005FB94B04BA06EF9
void UGAB_AIBaseRanged_C::Cancelled_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Cancelled_2221E89D4148023005FB94B04BA06EF9");

	FUGAB_AIBaseRanged_C_Cancelled_2221E89D4148023005FB94B04BA06EF9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Triggered_2221E89D4148023005FB94B04BA06EF9
void UGAB_AIBaseRanged_C::Triggered_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:Triggered_2221E89D4148023005FB94B04BA06EF9");

	FUGAB_AIBaseRanged_C_Triggered_2221E89D4148023005FB94B04BA06EF9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:K2_ActivateAbility
void UGAB_AIBaseRanged_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:K2_TriggerFromAnimation
void UGAB_AIBaseRanged_C::K2_TriggerFromAnimation(FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:K2_TriggerFromAnimation");

	FUGAB_AIBaseRanged_C_K2_TriggerFromAnimation_Params Parms;

	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:IncreaseAccuracyAndUpdateLastThrowTime
void UGAB_AIBaseRanged_C::IncreaseAccuracyAndUpdateLastThrowTime()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:IncreaseAccuracyAndUpdateLastThrowTime");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:ExecuteUbergraph_GAB_AIBaseRanged
void UGAB_AIBaseRanged_C::ExecuteUbergraph_GAB_AIBaseRanged(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C:ExecuteUbergraph_GAB_AIBaseRanged");

	FUGAB_AIBaseRanged_C_ExecuteUbergraph_GAB_AIBaseRanged_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

