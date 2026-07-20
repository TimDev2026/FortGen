#include "pch.h"

#include "FN_GAB_HuskBaseRadialMelee_classes.h"

UClass* UGAB_HuskBaseRadialMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:K2_CanActivateAbility
bool UGAB_HuskBaseRadialMelee_C::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer RelevantTags) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:K2_CanActivateAbility");

	FUGAB_HuskBaseRadialMelee_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.RelevantTags = RelevantTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Completed_A0D25C0C4C9CDEEB0EB0018B3334307D
void UGAB_HuskBaseRadialMelee_C::Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Completed_A0D25C0C4C9CDEEB0EB0018B3334307D");

	FUGAB_HuskBaseRadialMelee_C_Completed_A0D25C0C4C9CDEEB0EB0018B3334307D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D
void UGAB_HuskBaseRadialMelee_C::Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D");

	FUGAB_HuskBaseRadialMelee_C_Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D
void UGAB_HuskBaseRadialMelee_C::Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D");

	FUGAB_HuskBaseRadialMelee_C_Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:K2_ActivateAbility
void UGAB_HuskBaseRadialMelee_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:ExecuteUbergraph_GAB_HuskBaseRadialMelee
void UGAB_HuskBaseRadialMelee_C::ExecuteUbergraph_GAB_HuskBaseRadialMelee(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C:ExecuteUbergraph_GAB_HuskBaseRadialMelee");

	FUGAB_HuskBaseRadialMelee_C_ExecuteUbergraph_GAB_HuskBaseRadialMelee_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

