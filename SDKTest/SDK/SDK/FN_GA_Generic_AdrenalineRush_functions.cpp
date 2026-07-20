#include "pch.h"

#include "FN_GA_Generic_AdrenalineRush_classes.h"

UClass* UGA_Generic_AdrenalineRush_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:SpawnVisuals
void UGA_Generic_AdrenalineRush_C::SpawnVisuals()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:SpawnVisuals");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:ApplyGadgetEffects
void UGA_Generic_AdrenalineRush_C::ApplyGadgetEffects(FGameplayAbilityTargetDataHandle TargetData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:ApplyGadgetEffects");

	FUGA_Generic_AdrenalineRush_C_ApplyGadgetEffects_Params Parms;

	Parms.TargetData = TargetData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:SetupVariable_Upgrades
void UGA_Generic_AdrenalineRush_C::SetupVariable_Upgrades()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:SetupVariable_Upgrades");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:Cancelled_96CD2D2546A5DCD7B7C14BBA26232864
void UGA_Generic_AdrenalineRush_C::Cancelled_96CD2D2546A5DCD7B7C14BBA26232864(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:Cancelled_96CD2D2546A5DCD7B7C14BBA26232864");

	FUGA_Generic_AdrenalineRush_C_Cancelled_96CD2D2546A5DCD7B7C14BBA26232864_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:Targeted_96CD2D2546A5DCD7B7C14BBA26232864
void UGA_Generic_AdrenalineRush_C::Targeted_96CD2D2546A5DCD7B7C14BBA26232864(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:Targeted_96CD2D2546A5DCD7B7C14BBA26232864");

	FUGA_Generic_AdrenalineRush_C_Targeted_96CD2D2546A5DCD7B7C14BBA26232864_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:K2_ActivateAbility
void UGA_Generic_AdrenalineRush_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:ExecuteUbergraph_GA_Generic_AdrenalineRush
void UGA_Generic_AdrenalineRush_C::ExecuteUbergraph_GA_Generic_AdrenalineRush(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C:ExecuteUbergraph_GA_Generic_AdrenalineRush");

	FUGA_Generic_AdrenalineRush_C_ExecuteUbergraph_GA_Generic_AdrenalineRush_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

