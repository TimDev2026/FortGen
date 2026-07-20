#include "pch.h"

#include "FN_GAB_BlasterRanged_classes.h"

UClass* UGAB_BlasterRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C");

	return Class;
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_CanActivateAbility
bool UGAB_BlasterRanged_C::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer RelevantTags) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_CanActivateAbility");

	FUGAB_BlasterRanged_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.RelevantTags = RelevantTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0
void UGAB_BlasterRanged_C::OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:OnComplete_F2E0D80F47E87F169FADB1814583F0E0
void UGAB_BlasterRanged_C::OnComplete_F2E0D80F47E87F169FADB1814583F0E0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:OnComplete_F2E0D80F47E87F169FADB1814583F0E0");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Completed_B70914E34DF839C9F27FBA8D66801C0D
void UGAB_BlasterRanged_C::Completed_B70914E34DF839C9F27FBA8D66801C0D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Completed_B70914E34DF839C9F27FBA8D66801C0D");

	FUGAB_BlasterRanged_C_Completed_B70914E34DF839C9F27FBA8D66801C0D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Cancelled_B70914E34DF839C9F27FBA8D66801C0D
void UGAB_BlasterRanged_C::Cancelled_B70914E34DF839C9F27FBA8D66801C0D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Cancelled_B70914E34DF839C9F27FBA8D66801C0D");

	FUGAB_BlasterRanged_C_Cancelled_B70914E34DF839C9F27FBA8D66801C0D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Triggered_B70914E34DF839C9F27FBA8D66801C0D
void UGAB_BlasterRanged_C::Triggered_B70914E34DF839C9F27FBA8D66801C0D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Triggered_B70914E34DF839C9F27FBA8D66801C0D");

	FUGAB_BlasterRanged_C_Triggered_B70914E34DF839C9F27FBA8D66801C0D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_ActivateAbility
void UGAB_BlasterRanged_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Reset Ending Montage DoOnce
void UGAB_BlasterRanged_C::Reset_Ending_Montage_DoOnce()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:Reset Ending Montage DoOnce");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_OnEndAbility
void UGAB_BlasterRanged_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:StopFiring
void UGAB_BlasterRanged_C::StopFiring()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:StopFiring");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:ExecuteUbergraph_GAB_BlasterRanged
void UGAB_BlasterRanged_C::ExecuteUbergraph_GAB_BlasterRanged(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Blaster/GAB_BlasterRanged.GAB_BlasterRanged_C:ExecuteUbergraph_GAB_BlasterRanged");

	FUGAB_BlasterRanged_C_ExecuteUbergraph_GAB_BlasterRanged_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

