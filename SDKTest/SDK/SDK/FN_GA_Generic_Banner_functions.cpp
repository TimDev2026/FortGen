#include "pch.h"

#include "FN_GA_Generic_Banner_classes.h"

UClass* UGA_Generic_Banner_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:SetupLevelVarsInternal
void UGA_Generic_Banner_C::SetupLevelVarsInternal(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:SetupLevelVarsInternal");

	FUGA_Generic_Banner_C_SetupLevelVarsInternal_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:GetCustomAbilitySourceTransform
FTransform UGA_Generic_Banner_C::GetCustomAbilitySourceTransform() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:GetCustomAbilitySourceTransform");

	FUGA_Generic_Banner_C_GetCustomAbilitySourceTransform_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Initialize
void UGA_Generic_Banner_C::Initialize()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Initialize");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:SetupLevelVars
void UGA_Generic_Banner_C::SetupLevelVars()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:SetupLevelVars");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:BuildingRepairWave
void UGA_Generic_Banner_C::BuildingRepairWave(float RepairWaveRadius)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:BuildingRepairWave");

	FUGA_Generic_Banner_C_BuildingRepairWave_Params Parms;

	Parms.RepairWaveRadius = RepairWaveRadius;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Completed_B223ACB541DAF6B70FE5BCB12C3C66E1
void UGA_Generic_Banner_C::Completed_B223ACB541DAF6B70FE5BCB12C3C66E1(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Completed_B223ACB541DAF6B70FE5BCB12C3C66E1");

	FUGA_Generic_Banner_C_Completed_B223ACB541DAF6B70FE5BCB12C3C66E1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1
void UGA_Generic_Banner_C::Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1");

	FUGA_Generic_Banner_C_Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1
void UGA_Generic_Banner_C::Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1");

	FUGA_Generic_Banner_C_Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Cancelled_3D9DDD20491DEED5A55268A060EC3B66
void UGA_Generic_Banner_C::Cancelled_3D9DDD20491DEED5A55268A060EC3B66(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Cancelled_3D9DDD20491DEED5A55268A060EC3B66");

	FUGA_Generic_Banner_C_Cancelled_3D9DDD20491DEED5A55268A060EC3B66_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Targeted_3D9DDD20491DEED5A55268A060EC3B66
void UGA_Generic_Banner_C::Targeted_3D9DDD20491DEED5A55268A060EC3B66(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:Targeted_3D9DDD20491DEED5A55268A060EC3B66");

	FUGA_Generic_Banner_C_Targeted_3D9DDD20491DEED5A55268A060EC3B66_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:K2_ActivateAbility
void UGA_Generic_Banner_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:DoBuildingRepair
void UGA_Generic_Banner_C::DoBuildingRepair()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:DoBuildingRepair");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:ExecuteUbergraph_GA_Generic_Banner
void UGA_Generic_Banner_C::ExecuteUbergraph_GA_Generic_Banner(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/GA_Generic_Banner.GA_Generic_Banner_C:ExecuteUbergraph_GA_Generic_Banner");

	FUGA_Generic_Banner_C_ExecuteUbergraph_GA_Generic_Banner_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

