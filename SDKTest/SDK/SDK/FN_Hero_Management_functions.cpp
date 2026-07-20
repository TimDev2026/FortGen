#include "pch.h"

#include "FN_Hero_Management_classes.h"

UClass* UHero_Management_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/Hero_Management.Hero_Management_C");

	return Class;
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Stats Changed
void UHero_Management_C::On_Hero_Stats_Changed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Stats Changed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Set Main Panel Visibility
void UHero_Management_C::Set_Main_Panel_Visibility(bool Is_Visible)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Set Main Panel Visibility");

	FUHero_Management_C_Set_Main_Panel_Visibility_Params Parms;

	Parms.Is_Visible = Is_Visible;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Refresh Delete Permission
void UHero_Management_C::Refresh_Delete_Permission()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Refresh Delete Permission");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Hero Slots
void UHero_Management_C::Rebuild_Hero_Slots()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Hero Slots");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:On Ability Points Assigned
void UHero_Management_C::On_Ability_Points_Assigned(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:On Ability Points Assigned");

	FUHero_Management_C_On_Ability_Points_Assigned_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Deleted
void UHero_Management_C::On_Hero_Deleted(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Deleted");

	FUHero_Management_C_On_Hero_Deleted_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Created
void UHero_Management_C::On_Hero_Created(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Created");

	FUHero_Management_C_On_Hero_Created_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild All
void UHero_Management_C::Rebuild_All()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild All");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Show/Hide Stats Panel
void UHero_Management_C::Show_Hide_Stats_Panel(bool Show_Panel)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Show/Hide Stats Panel");

	FUHero_Management_C_Show_Hide_Stats_Panel_Params Parms;

	Parms.Show_Panel = Show_Panel;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Stats Panel
void UHero_Management_C::Rebuild_Stats_Panel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Stats Panel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Skill Tree
void UHero_Management_C::Rebuild_Skill_Tree()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Skill Tree");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Core Abilities
void UHero_Management_C::Rebuild_Core_Abilities()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Core Abilities");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Main Panel
void UHero_Management_C::Rebuild_Main_Panel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Main Panel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Hero List
void UHero_Management_C::Rebuild_Hero_List()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Rebuild Hero List");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Selected
void UHero_Management_C::On_Hero_Selected()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:On Hero Selected");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019
void UHero_Management_C::OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019
void UHero_Management_C::OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019
void UHero_Management_C::OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:Construct
void UHero_Management_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Tab] Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature
void UHero_Management_C::BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Tab] Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature");

	FUHero_Management_C_BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Close Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature
void UHero_Management_C::BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Close Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature");

	FUHero_Management_C_BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature
void UHero_Management_C::BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature");

	FUHero_Management_C_BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature
void UHero_Management_C::BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:BndEvt__[Button] Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature");

	FUHero_Management_C_BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/Hero_Management.Hero_Management_C:ExecuteUbergraph_Hero_Management
void UHero_Management_C::ExecuteUbergraph_Hero_Management(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/Hero_Management.Hero_Management_C:ExecuteUbergraph_Hero_Management");

	FUHero_Management_C_ExecuteUbergraph_Hero_Management_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

