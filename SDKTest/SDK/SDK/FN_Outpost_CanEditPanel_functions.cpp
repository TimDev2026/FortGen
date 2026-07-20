#include "pch.h"

#include "FN_Outpost_CanEditPanel_classes.h"

UClass* UOutpost_CanEditPanel_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C");

	return Class;
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:SetMasterSwitch
void UOutpost_CanEditPanel_C::SetMasterSwitch(bool bCanEdit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:SetMasterSwitch");

	FUOutpost_CanEditPanel_C_SetMasterSwitch_Params Parms;

	Parms.bCanEdit = bCanEdit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:Init
void UOutpost_CanEditPanel_C::Init(class AFortPlayerControllerOutpost* InOutpostOwner)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:Init");

	FUOutpost_CanEditPanel_C_Init_Params Parms;

	Parms.InOutpostOwner = InOutpostOwner;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature
void UOutpost_CanEditPanel_C::BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature");

	FUOutpost_CanEditPanel_C_BndEvt__MasterSwitchButton_K2Node_ComponentBoundEvent_407_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:Construct
void UOutpost_CanEditPanel_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:HandleJoined
void UOutpost_CanEditPanel_C::HandleJoined(FFortTeamMemberInfo NewTeamMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:HandleJoined");

	FUOutpost_CanEditPanel_C_HandleJoined_Params Parms;

	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:HandleRemoved
void UOutpost_CanEditPanel_C::HandleRemoved(int32_t PlayerIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:HandleRemoved");

	FUOutpost_CanEditPanel_C_HandleRemoved_Params Parms;

	Parms.PlayerIndex = PlayerIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:ExecuteUbergraph_Outpost_CanEditPanel
void UOutpost_CanEditPanel_C::ExecuteUbergraph_Outpost_CanEditPanel(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditPanel.Outpost_CanEditPanel_C:ExecuteUbergraph_Outpost_CanEditPanel");

	FUOutpost_CanEditPanel_C_ExecuteUbergraph_Outpost_CanEditPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

