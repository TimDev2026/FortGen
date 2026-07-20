#include "pch.h"

#include "FN_GA_Commando_Shockwave_classes.h"

UClass* UGA_Commando_Shockwave_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:SetupVariables
void UGA_Commando_Shockwave_C::SetupVariables()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:SetupVariables");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Completed_60F6207840ECA0EA5707139982AC6691
void UGA_Commando_Shockwave_C::Completed_60F6207840ECA0EA5707139982AC6691(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Completed_60F6207840ECA0EA5707139982AC6691");

	FUGA_Commando_Shockwave_C_Completed_60F6207840ECA0EA5707139982AC6691_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Cancelled_60F6207840ECA0EA5707139982AC6691
void UGA_Commando_Shockwave_C::Cancelled_60F6207840ECA0EA5707139982AC6691(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Cancelled_60F6207840ECA0EA5707139982AC6691");

	FUGA_Commando_Shockwave_C_Cancelled_60F6207840ECA0EA5707139982AC6691_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Triggered_60F6207840ECA0EA5707139982AC6691
void UGA_Commando_Shockwave_C::Triggered_60F6207840ECA0EA5707139982AC6691(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Triggered_60F6207840ECA0EA5707139982AC6691");

	FUGA_Commando_Shockwave_C_Triggered_60F6207840ECA0EA5707139982AC6691_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Cancelled_F7C7341E49C6B93C7D967988C9C4848C
void UGA_Commando_Shockwave_C::Cancelled_F7C7341E49C6B93C7D967988C9C4848C(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Cancelled_F7C7341E49C6B93C7D967988C9C4848C");

	FUGA_Commando_Shockwave_C_Cancelled_F7C7341E49C6B93C7D967988C9C4848C_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Targeted_F7C7341E49C6B93C7D967988C9C4848C
void UGA_Commando_Shockwave_C::Targeted_F7C7341E49C6B93C7D967988C9C4848C(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:Targeted_F7C7341E49C6B93C7D967988C9C4848C");

	FUGA_Commando_Shockwave_C_Targeted_F7C7341E49C6B93C7D967988C9C4848C_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:K2_ActivateAbility
void UGA_Commando_Shockwave_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:ExecuteUbergraph_GA_Commando_Shockwave
void UGA_Commando_Shockwave_C::ExecuteUbergraph_GA_Commando_Shockwave(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/Shockwave/GA_Commando_Shockwave.GA_Commando_Shockwave_C:ExecuteUbergraph_GA_Commando_Shockwave");

	FUGA_Commando_Shockwave_C_ExecuteUbergraph_GA_Commando_Shockwave_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

