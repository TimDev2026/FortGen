#include "pch.h"

#include "FN_GAB_HuskFrustration_classes.h"

UClass* UGAB_HuskFrustration_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Completed_4426349D48BB9D962857A490453AEC50
void UGAB_HuskFrustration_C::Completed_4426349D48BB9D962857A490453AEC50(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Completed_4426349D48BB9D962857A490453AEC50");

	FUGAB_HuskFrustration_C_Completed_4426349D48BB9D962857A490453AEC50_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Cancelled_4426349D48BB9D962857A490453AEC50
void UGAB_HuskFrustration_C::Cancelled_4426349D48BB9D962857A490453AEC50(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Cancelled_4426349D48BB9D962857A490453AEC50");

	FUGAB_HuskFrustration_C_Cancelled_4426349D48BB9D962857A490453AEC50_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Triggered_4426349D48BB9D962857A490453AEC50
void UGAB_HuskFrustration_C::Triggered_4426349D48BB9D962857A490453AEC50(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:Triggered_4426349D48BB9D962857A490453AEC50");

	FUGAB_HuskFrustration_C_Triggered_4426349D48BB9D962857A490453AEC50_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:K2_ActivateAbility
void UGAB_HuskFrustration_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:ExecuteUbergraph_GAB_HuskFrustration
void UGAB_HuskFrustration_C::ExecuteUbergraph_GAB_HuskFrustration(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C:ExecuteUbergraph_GAB_HuskFrustration");

	FUGAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

