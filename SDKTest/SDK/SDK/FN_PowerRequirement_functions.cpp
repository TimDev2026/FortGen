#include "pch.h"

#include "FN_PowerRequirement_classes.h"

UClass* UPowerRequirement_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C");

	return Class;
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:GenerateToolTipWidget
class UWidget* UPowerRequirement_C::GenerateToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:GenerateToolTipWidget");

	FUPowerRequirement_C_GenerateToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetUIForRequired
void UPowerRequirement_C::SetUIForRequired(int32_t PartyPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetUIForRequired");

	FUPowerRequirement_C_SetUIForRequired_Params Parms;

	Parms.PartyPower = PartyPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetUIForRecommended
void UPowerRequirement_C::SetUIForRecommended(int32_t PartyPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetUIForRecommended");

	FUPowerRequirement_C_SetUIForRecommended_Params Parms;

	Parms.PartyPower = PartyPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:Update
void UPowerRequirement_C::Update(int32_t TeamPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:Update");

	FUPowerRequirement_C_Update_Params Parms;

	Parms.TeamPower = TeamPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetRequirements
void UPowerRequirement_C::SetRequirements(int32_t RequiredPower, int32_t RecommendedPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:SetRequirements");

	FUPowerRequirement_C_SetRequirements_Params Parms;

	Parms.RequiredPower = RequiredPower;
	Parms.RecommendedPower = RecommendedPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:Construct
void UPowerRequirement_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:HandleTeamPowerChanged
void UPowerRequirement_C::HandleTeamPowerChanged(int32_t TeamPower, int32_t PersonalPower)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:HandleTeamPowerChanged");

	FUPowerRequirement_C_HandleTeamPowerChanged_Params Parms;

	Parms.TeamPower = TeamPower;
	Parms.PersonalPower = PersonalPower;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Theater/PowerRequirement.PowerRequirement_C:ExecuteUbergraph_PowerRequirement
void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Theater/PowerRequirement.PowerRequirement_C:ExecuteUbergraph_PowerRequirement");

	FUPowerRequirement_C_ExecuteUbergraph_PowerRequirement_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__RatingWidget_C_138::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Theater/PowerRequirement.PLACEHOLDER-CLASS__RatingWidget_C_138");

	return Class;
}

