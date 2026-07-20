#include "pch.h"

#include "FN_GAB_AIBaseMelee_classes.h"

UClass* UGAB_AIBaseMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Completed_8CCC8A6B41B7B728038BDE887BD23BCC
void UGAB_AIBaseMelee_C::Completed_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Completed_8CCC8A6B41B7B728038BDE887BD23BCC");

	FUGAB_AIBaseMelee_C_Completed_8CCC8A6B41B7B728038BDE887BD23BCC_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC
void UGAB_AIBaseMelee_C::Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC");

	FUGAB_AIBaseMelee_C_Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Triggered_8CCC8A6B41B7B728038BDE887BD23BCC
void UGAB_AIBaseMelee_C::Triggered_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:Triggered_8CCC8A6B41B7B728038BDE887BD23BCC");

	FUGAB_AIBaseMelee_C_Triggered_8CCC8A6B41B7B728038BDE887BD23BCC_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:K2_ActivateAbility
void UGAB_AIBaseMelee_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:ExecuteUbergraph_GAB_AIBaseMelee
void UGAB_AIBaseMelee_C::ExecuteUbergraph_GAB_AIBaseMelee(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C:ExecuteUbergraph_GAB_AIBaseMelee");

	FUGAB_AIBaseMelee_C_ExecuteUbergraph_GAB_AIBaseMelee_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

