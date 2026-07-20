#include "pch.h"

#include "FN_GAB_FlingerThrowHusk_classes.h"

UClass* UGAB_FlingerThrowHusk_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C");

	return Class;
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_CanActivateAbility
bool UGAB_FlingerThrowHusk_C::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer RelevantTags) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_CanActivateAbility");

	FUGAB_FlingerThrowHusk_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.RelevantTags = RelevantTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Completed_B56594C44CE933A96A3E13BDCFC1097D
void UGAB_FlingerThrowHusk_C::Completed_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Completed_B56594C44CE933A96A3E13BDCFC1097D");

	FUGAB_FlingerThrowHusk_C_Completed_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Cancelled_B56594C44CE933A96A3E13BDCFC1097D
void UGAB_FlingerThrowHusk_C::Cancelled_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Cancelled_B56594C44CE933A96A3E13BDCFC1097D");

	FUGAB_FlingerThrowHusk_C_Cancelled_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Triggered_B56594C44CE933A96A3E13BDCFC1097D
void UGAB_FlingerThrowHusk_C::Triggered_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:Triggered_B56594C44CE933A96A3E13BDCFC1097D");

	FUGAB_FlingerThrowHusk_C_Triggered_B56594C44CE933A96A3E13BDCFC1097D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_ActivateAbility
void UGAB_FlingerThrowHusk_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_OnEndAbility
void UGAB_FlingerThrowHusk_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:CommitAndEndAbility
void UGAB_FlingerThrowHusk_C::CommitAndEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:CommitAndEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:SpawnFX
void UGAB_FlingerThrowHusk_C::SpawnFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:SpawnFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:StopFX
void UGAB_FlingerThrowHusk_C::StopFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:StopFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:ExecuteUbergraph_GAB_FlingerThrowHusk
void UGAB_FlingerThrowHusk_C::ExecuteUbergraph_GAB_FlingerThrowHusk(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C:ExecuteUbergraph_GAB_FlingerThrowHusk");

	FUGAB_FlingerThrowHusk_C_ExecuteUbergraph_GAB_FlingerThrowHusk_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

