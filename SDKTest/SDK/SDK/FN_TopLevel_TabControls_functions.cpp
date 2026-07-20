#include "pch.h"

#include "FN_TopLevel_TabControls_classes.h"

UClass* UTopLevel_TabControls_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C");

	return Class;
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Menu_ToolTipWidget
class UWidget* UTopLevel_TabControls_C::Menu_ToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Menu_ToolTipWidget");

	FUTopLevel_TabControls_C_Menu_ToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Friends_ToolTipWidget
class UWidget* UTopLevel_TabControls_C::Friends_ToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Friends_ToolTipWidget");

	FUTopLevel_TabControls_C_Friends_ToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Journal_ToolTipWidget
class UWidget* UTopLevel_TabControls_C::Journal_ToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Journal_ToolTipWidget");

	FUTopLevel_TabControls_C_Journal_ToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:GetTotalQuestCount
void UTopLevel_TabControls_C::GetTotalQuestCount(int32_t outQuestCount)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:GetTotalQuestCount");

	FUTopLevel_TabControls_C_GetTotalQuestCount_Params Parms;

	Parms.outQuestCount = outQuestCount;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:SetQuestCountIndicator
void UTopLevel_TabControls_C::SetQuestCountIndicator()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:SetQuestCountIndicator");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:InitializeFriendAndJournal
void UTopLevel_TabControls_C::InitializeFriendAndJournal()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:InitializeFriendAndJournal");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:SelectButtonAndMenuAnchor
void UTopLevel_TabControls_C::SelectButtonAndMenuAnchor(class UFortBaseButton* Button, class UMenuAnchor* MenuAnchor, bool FocusMenu)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:SelectButtonAndMenuAnchor");

	FUTopLevel_TabControls_C_SelectButtonAndMenuAnchor_Params Parms;

	Parms.Button = Button;
	Parms.MenuAnchor = MenuAnchor;
	Parms.FocusMenu = FocusMenu;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetJournal
class UWidget* UTopLevel_TabControls_C::OnGetJournal()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetJournal");

	FUTopLevel_TabControls_C_OnGetJournal_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:UpdateFriendButtonState
void UTopLevel_TabControls_C::UpdateFriendButtonState(EFortUIFeatureState FeatureState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:UpdateFriendButtonState");

	FUTopLevel_TabControls_C_UpdateFriendButtonState_Params Parms;

	Parms.FeatureState = FeatureState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OpenMainMenu
void UTopLevel_TabControls_C::OpenMainMenu()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OpenMainMenu");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleMainMenuClose
void UTopLevel_TabControls_C::HandleMainMenuClose()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleMainMenuClose");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleMenuAnchorChanged
void UTopLevel_TabControls_C::HandleMenuAnchorChanged(class UButtonIconText_C* Menu_Button, bool Is_Open)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleMenuAnchorChanged");

	FUTopLevel_TabControls_C_HandleMenuAnchorChanged_Params Parms;

	Parms.Menu_Button = Menu_Button;
	Parms.Is_Open = Is_Open;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetMainMenu
class UWidget* UTopLevel_TabControls_C::OnGetMainMenu()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetMainMenu");

	FUTopLevel_TabControls_C_OnGetMainMenu_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetFriendsList
class UWidget* UTopLevel_TabControls_C::OnGetFriendsList()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnGetFriendsList");

	FUTopLevel_TabControls_C_OnGetFriendsList_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnHandleAction
void UTopLevel_TabControls_C::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnHandleAction");

	FUTopLevel_TabControls_C_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:ClearActiveTab
void UTopLevel_TabControls_C::ClearActiveTab()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:ClearActiveTab");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Construct
void UTopLevel_TabControls_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:On Social Feature Changed_Copy
void UTopLevel_TabControls_C::On_Social_Feature_Changed_Copy(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:On Social Feature Changed_Copy");

	FUTopLevel_TabControls_C_On_Social_Feature_Changed_Copy_Params Parms;

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnSocialUpdate
void UTopLevel_TabControls_C::OnSocialUpdate(TArray<class UFortSocialItem*> SocialItems)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:OnSocialUpdate");

	FUTopLevel_TabControls_C_OnSocialUpdate_Params Parms;

	Parms.SocialItems = SocialItems;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandlePartyTransitionComplete
void UTopLevel_TabControls_C::HandlePartyTransitionComplete(EFortPartyTransition PartyTransition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandlePartyTransitionComplete");

	FUTopLevel_TabControls_C_HandlePartyTransitionComplete_Params Parms;

	Parms.PartyTransition = PartyTransition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandlePartyTransitionStarted
void UTopLevel_TabControls_C::HandlePartyTransitionStarted(EFortPartyTransition PartyTransition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandlePartyTransitionStarted");

	FUTopLevel_TabControls_C_HandlePartyTransitionStarted_Params Parms;

	Parms.PartyTransition = PartyTransition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[MenuAnchor] Main Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[MenuAnchor] Main Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Menu Anchor] Friends List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Menu Anchor] Friends List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Menu Anchor] Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Menu Anchor] Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature
void UTopLevel_TabControls_C::BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature");

	FUTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleQuestUpdated
void UTopLevel_TabControls_C::HandleQuestUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleQuestUpdated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleClientEvent_OpenQuestJournal
void UTopLevel_TabControls_C::HandleClientEvent_OpenQuestJournal(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleClientEvent_OpenQuestJournal");

	FUTopLevel_TabControls_C_HandleClientEvent_OpenQuestJournal_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleClientEvent_OpenNewsScreen
void UTopLevel_TabControls_C::HandleClientEvent_OpenNewsScreen(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:HandleClientEvent_OpenNewsScreen");

	FUTopLevel_TabControls_C_HandleClientEvent_OpenNewsScreen_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:ExecuteUbergraph_TopLevel-TabControls
void UTopLevel_TabControls_C::ExecuteUbergraph_TopLevel_TabControls(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TopLevel-TabControls.TopLevel-TabControls_C:ExecuteUbergraph_TopLevel-TabControls");

	FUTopLevel_TabControls_C_ExecuteUbergraph_TopLevel_TabControls_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

