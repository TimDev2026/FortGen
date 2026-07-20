#include "pch.h"

#include "FN_GadgetDisplayBar_classes.h"

UClass* UGadgetDisplayBar_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C");

	return Class;
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandledTeamMemberAdded
void UGadgetDisplayBar_C::HandledTeamMemberAdded(FFortTeamMemberInfo InNewMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandledTeamMemberAdded");

	FUGadgetDisplayBar_C_HandledTeamMemberAdded_Params Parms;

	Parms.InNewMemberInfo = InNewMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:UpdateVisibility
void UGadgetDisplayBar_C::UpdateVisibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:UpdateVisibility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:UpdateAssignedTeamMember
void UGadgetDisplayBar_C::UpdateAssignedTeamMember()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:UpdateAssignedTeamMember");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:SetShown
void UGadgetDisplayBar_C::SetShown(bool bShown)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:SetShown");

	FUGadgetDisplayBar_C_SetShown_Params Parms;

	Parms.bShown = bShown;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:SetPlayerIndex
void UGadgetDisplayBar_C::SetPlayerIndex(int32_t InPlayerIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:SetPlayerIndex");

	FUGadgetDisplayBar_C_SetPlayerIndex_Params Parms;

	Parms.InPlayerIndex = InPlayerIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandlePartyLeft
void UGadgetDisplayBar_C::HandlePartyLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandlePartyLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:BindTeamDelegates
void UGadgetDisplayBar_C::BindTeamDelegates(class UFortUITeamInfo* TeamInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:BindTeamDelegates");

	FUGadgetDisplayBar_C_BindTeamDelegates_Params Parms;

	Parms.TeamInfo = TeamInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:RemoveAssignedTeamMember
void UGadgetDisplayBar_C::RemoveAssignedTeamMember()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:RemoveAssignedTeamMember");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandleTeamMemberUpdated
void UGadgetDisplayBar_C::HandleTeamMemberUpdated(FFortTeamMemberInfo InNewMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:HandleTeamMemberUpdated");

	FUGadgetDisplayBar_C_HandleTeamMemberUpdated_Params Parms;

	Parms.InNewMemberInfo = InNewMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:BindDelegates
void UGadgetDisplayBar_C::BindDelegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:BindDelegates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:Update
void UGadgetDisplayBar_C::Update(FFortTeamMemberInfo InMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:Update");

	FUGadgetDisplayBar_C_Update_Params Parms;

	Parms.InMemberInfo = InMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:Construct
void UGadgetDisplayBar_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberAdded
void UGadgetDisplayBar_C::OnTeamMemberAdded(FFortTeamMemberInfo NewTeamMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberAdded");

	FUGadgetDisplayBar_C_OnTeamMemberAdded_Params Parms;

	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberUpdated
void UGadgetDisplayBar_C::OnTeamMemberUpdated(FFortTeamMemberInfo NewTeamMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberUpdated");

	FUGadgetDisplayBar_C_OnTeamMemberUpdated_Params Parms;

	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberRemoved
void UGadgetDisplayBar_C::OnTeamMemberRemoved(int32_t PlayerIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:OnTeamMemberRemoved");

	FUGadgetDisplayBar_C_OnTeamMemberRemoved_Params Parms;

	Parms.PlayerIndex = PlayerIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:ExecuteUbergraph_GadgetDisplayBar
void UGadgetDisplayBar_C::ExecuteUbergraph_GadgetDisplayBar(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetDisplayBar.GadgetDisplayBar_C:ExecuteUbergraph_GadgetDisplayBar");

	FUGadgetDisplayBar_C_ExecuteUbergraph_GadgetDisplayBar_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__GadgetDisplayItem_C_143::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayBar.PLACEHOLDER-CLASS__GadgetDisplayItem_C_143");

	return Class;
}

UClass* PLACEHOLDER_CLASS__RatingWidget_C_144::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayBar.PLACEHOLDER-CLASS__RatingWidget_C_144");

	return Class;
}

UClass* PLACEHOLDER_CLASS__PartyCharacterPlacementHelper_C_145::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetDisplayBar.PLACEHOLDER-CLASS__PartyCharacterPlacementHelper_C_145");

	return Class;
}

