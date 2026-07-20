#include "pch.h"

#include "FN_GA_AirStrike_classes.h"

UClass* UGA_AirStrike_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:GetCustomAbilitySourceTransform
FTransform UGA_AirStrike_C::GetCustomAbilitySourceTransform() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:GetCustomAbilitySourceTransform");

	FUGA_AirStrike_C_GetCustomAbilitySourceTransform_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:GetAttributeValue
void UGA_AirStrike_C::GetAttributeValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:GetAttributeValue");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9
void UGA_AirStrike_C::OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:OnFailed_FD8DF5D249A3F015BFB1F0A559B298F9");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9
void UGA_AirStrike_C::OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:OnCommitted_FD8DF5D249A3F015BFB1F0A559B298F9");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:K2_ActivateAbility
void UGA_AirStrike_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:ExecuteUbergraph_GA_AirStrike
void UGA_AirStrike_C::ExecuteUbergraph_GA_AirStrike(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GA_AirStrike.GA_AirStrike_C:ExecuteUbergraph_GA_AirStrike");

	FUGA_AirStrike_C_ExecuteUbergraph_GA_AirStrike_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

