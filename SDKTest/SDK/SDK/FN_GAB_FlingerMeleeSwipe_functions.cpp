#include "pch.h"

#include "FN_GAB_FlingerMeleeSwipe_classes.h"

UClass* UGAB_FlingerMeleeSwipe_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C");

	return Class;
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Completed_75D3277A479B3F48D2AD2889328C3F32
void UGAB_FlingerMeleeSwipe_C::Completed_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Completed_75D3277A479B3F48D2AD2889328C3F32");

	FUGAB_FlingerMeleeSwipe_C_Completed_75D3277A479B3F48D2AD2889328C3F32_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Cancelled_75D3277A479B3F48D2AD2889328C3F32
void UGAB_FlingerMeleeSwipe_C::Cancelled_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Cancelled_75D3277A479B3F48D2AD2889328C3F32");

	FUGAB_FlingerMeleeSwipe_C_Cancelled_75D3277A479B3F48D2AD2889328C3F32_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Triggered_75D3277A479B3F48D2AD2889328C3F32
void UGAB_FlingerMeleeSwipe_C::Triggered_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:Triggered_75D3277A479B3F48D2AD2889328C3F32");

	FUGAB_FlingerMeleeSwipe_C_Triggered_75D3277A479B3F48D2AD2889328C3F32_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:K2_ActivateAbility
void UGAB_FlingerMeleeSwipe_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:ExecuteUbergraph_GAB_FlingerMeleeSwipe
void UGAB_FlingerMeleeSwipe_C::ExecuteUbergraph_GAB_FlingerMeleeSwipe(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C:ExecuteUbergraph_GAB_FlingerMeleeSwipe");

	FUGAB_FlingerMeleeSwipe_C_ExecuteUbergraph_GAB_FlingerMeleeSwipe_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

