#include "pch.h"

#include "FN_GAB_HuskMelee_classes.h"

UClass* UGAB_HuskMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Completed_39FC57D848D381E3A3C7E798E995ED9A
void UGAB_HuskMelee_C::Completed_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Completed_39FC57D848D381E3A3C7E798E995ED9A");

	FUGAB_HuskMelee_C_Completed_39FC57D848D381E3A3C7E798E995ED9A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Cancelled_39FC57D848D381E3A3C7E798E995ED9A
void UGAB_HuskMelee_C::Cancelled_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Cancelled_39FC57D848D381E3A3C7E798E995ED9A");

	FUGAB_HuskMelee_C_Cancelled_39FC57D848D381E3A3C7E798E995ED9A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Triggered_39FC57D848D381E3A3C7E798E995ED9A
void UGAB_HuskMelee_C::Triggered_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:Triggered_39FC57D848D381E3A3C7E798E995ED9A");

	FUGAB_HuskMelee_C_Triggered_39FC57D848D381E3A3C7E798E995ED9A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnCancelled_3012237E40D07AA69417C79DC2677F69
void UGAB_HuskMelee_C::OnCancelled_3012237E40D07AA69417C79DC2677F69()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnCancelled_3012237E40D07AA69417C79DC2677F69");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnInterrupted_3012237E40D07AA69417C79DC2677F69
void UGAB_HuskMelee_C::OnInterrupted_3012237E40D07AA69417C79DC2677F69()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnInterrupted_3012237E40D07AA69417C79DC2677F69");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnComplete_3012237E40D07AA69417C79DC2677F69
void UGAB_HuskMelee_C::OnComplete_3012237E40D07AA69417C79DC2677F69()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:OnComplete_3012237E40D07AA69417C79DC2677F69");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:K2_ActivateAbility
void UGAB_HuskMelee_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:K2_OnEndAbility
void UGAB_HuskMelee_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:MoveToLoop
void UGAB_HuskMelee_C::MoveToLoop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:MoveToLoop");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:ExecuteUbergraph_GAB_HuskMelee
void UGAB_HuskMelee_C::ExecuteUbergraph_GAB_HuskMelee(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C:ExecuteUbergraph_GAB_HuskMelee");

	FUGAB_HuskMelee_C_ExecuteUbergraph_GAB_HuskMelee_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

