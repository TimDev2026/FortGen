#include "pch.h"

#include "FN_HeroListRecruitWidget_classes.h"

UClass* UHeroListRecruitWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Refresh Info
void UHeroListRecruitWidget_C::Refresh_Info()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Refresh Info");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Clear Error
void UHeroListRecruitWidget_C::Clear_Error()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Clear Error");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Set Error
void UHeroListRecruitWidget_C::Set_Error(FText Error_Text)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Set Error");

	FUHeroListRecruitWidget_C_Set_Error_Params Parms;

	Parms.Error_Text = Error_Text;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:ValidateNameField
void UHeroListRecruitWidget_C::ValidateNameField()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:ValidateNameField");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Get Random Name
void UHeroListRecruitWidget_C::Get_Random_Name()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Get Random Name");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Collapse
void UHeroListRecruitWidget_C::Collapse()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Collapse");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Expand
void UHeroListRecruitWidget_C::Expand()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Expand");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Initialize
void UHeroListRecruitWidget_C::Initialize(FEmptyHeroSlot Hero_Slot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Initialize");

	FUHeroListRecruitWidget_C_Initialize_Params Parms;

	Parms.Hero_Slot = Hero_Slot;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Construct
void UHeroListRecruitWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Button__Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___Button__Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Random Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Button__Random_Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Random Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Radio] Male Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Radio__Male_Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Radio] Male Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___Radio__Male_Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Radio] Female Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Radio__Female_Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Radio] Female Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___Radio__Female_Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Button__Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___Button__Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___Button__Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[Button] Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___Button__Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature
void UHeroListRecruitWidget_C::BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:BndEvt__[TextBox] Name Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature");

	FUHeroListRecruitWidget_C_BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:ExecuteUbergraph_HeroListRecruitWidget
void UHeroListRecruitWidget_C::ExecuteUbergraph_HeroListRecruitWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:ExecuteUbergraph_HeroListRecruitWidget");

	FUHeroListRecruitWidget_C_ExecuteUbergraph_HeroListRecruitWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:OnRequestCreateHero__DelegateSignature
void UHeroListRecruitWidget_C::OnRequestCreateHero__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListRecruitWidget.HeroListRecruitWidget_C:OnRequestCreateHero__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

