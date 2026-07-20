#include "pch.h"

#include "FN_GA_Generic_SlowField_classes.h"

UClass* UGA_Generic_SlowField_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:SetVariable_Upgrades
void UGA_Generic_SlowField_C::SetVariable_Upgrades()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:SetVariable_Upgrades");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:SpawnSlowField
void UGA_Generic_SlowField_C::SpawnSlowField()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:SpawnSlowField");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Completed_A2F5E033421F17DEA0CEC299A791A6C9
void UGA_Generic_SlowField_C::Completed_A2F5E033421F17DEA0CEC299A791A6C9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Completed_A2F5E033421F17DEA0CEC299A791A6C9");

	FUGA_Generic_SlowField_C_Completed_A2F5E033421F17DEA0CEC299A791A6C9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Cancelled_A2F5E033421F17DEA0CEC299A791A6C9
void UGA_Generic_SlowField_C::Cancelled_A2F5E033421F17DEA0CEC299A791A6C9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Cancelled_A2F5E033421F17DEA0CEC299A791A6C9");

	FUGA_Generic_SlowField_C_Cancelled_A2F5E033421F17DEA0CEC299A791A6C9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Triggered_A2F5E033421F17DEA0CEC299A791A6C9
void UGA_Generic_SlowField_C::Triggered_A2F5E033421F17DEA0CEC299A791A6C9(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:Triggered_A2F5E033421F17DEA0CEC299A791A6C9");

	FUGA_Generic_SlowField_C_Triggered_A2F5E033421F17DEA0CEC299A791A6C9_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:K2_ActivateAbility
void UGA_Generic_SlowField_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:ExecuteUbergraph_GA_Generic_SlowField
void UGA_Generic_SlowField_C::ExecuteUbergraph_GA_Generic_SlowField(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GA_Generic_SlowField.GA_Generic_SlowField_C:ExecuteUbergraph_GA_Generic_SlowField");

	FUGA_Generic_SlowField_C_ExecuteUbergraph_GA_Generic_SlowField_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

