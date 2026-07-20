#include "pch.h"

#include "FN_UIManager_classes.h"

UClass* UUIManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/game/UI/Global_Elements/UIManager.UIManager_C");

	return Class;
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:HandleModalContentCleared
void UUIManager_C::HandleModalContentCleared()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:HandleModalContentCleared");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:IsStateContentChildShowing
bool UUIManager_C::IsStateContentChildShowing()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:IsStateContentChildShowing");

	FUUIManager_C_IsStateContentChildShowing_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:DismissPurchaseWidget
void UUIManager_C::DismissPurchaseWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:DismissPurchaseWidget");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:DisplayPurchaseWidget
void UUIManager_C::DisplayPurchaseWidget(class UWidget* Web_Widget, FString OfferId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:DisplayPurchaseWidget");

	FUUIManager_C_DisplayPurchaseWidget_Params Parms;

	Parms.Web_Widget = Web_Widget;
	Parms.OfferId = OfferId;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:BindDelegates
void UUIManager_C::BindDelegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:BindDelegates");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:ShowNextModalWidget
void UUIManager_C::ShowNextModalWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:ShowNextModalWidget");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:QueueActionPanelInModalLayer
void UUIManager_C::QueueActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, EHorizontalAlignment InHorizontalAlignment, EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:QueueActionPanelInModalLayer");

	FUUIManager_C_QueueActionPanelInModalLayer_Params Parms;

	Parms.InActionHandlerPanel = InActionHandlerPanel;
	Parms.InHorizontalAlignment = InHorizontalAlignment;
	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:ClearModalLayer
void UUIManager_C::ClearModalLayer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:ClearModalLayer");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:ClearLayers
void UUIManager_C::ClearLayers()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:ClearLayers");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:ShowActionPanelInModalLayer
void UUIManager_C::ShowActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, EHorizontalAlignment InHorizontalAlignment, EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:ShowActionPanelInModalLayer");

	FUUIManager_C_ShowActionPanelInModalLayer_Params Parms;

	Parms.InActionHandlerPanel = InActionHandlerPanel;
	Parms.InHorizontalAlignment = InHorizontalAlignment;
	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:DisplayOKButtonConfirmation
void UUIManager_C::DisplayOKButtonConfirmation(FText Header, FText Message)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:DisplayOKButtonConfirmation");

	FUUIManager_C_DisplayOKButtonConfirmation_Params Parms;

	Parms.Header = Header;
	Parms.Message = Message;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:Construct
void UUIManager_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:KillConfirmation
void UUIManager_C::KillConfirmation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:KillConfirmation");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:UpdateStateWidgetContent
void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:UpdateStateWidgetContent");

	FUUIManager_C_UpdateStateWidgetContent_Params Parms;

	Parms.StateWidget = StateWidget;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:OnShowConfirmation
void UUIManager_C::OnShowConfirmation(FFortDialogDescription Description)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:OnShowConfirmation");

	FUUIManager_C_OnShowConfirmation_Params Parms;

	Parms.Description = Description;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:DisplayStateContent
void UUIManager_C::DisplayStateContent(bool bDisplay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:DisplayStateContent");

	FUUIManager_C_DisplayStateContent_Params Parms;

	Parms.bDisplay = bDisplay;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:OnStateStarted
void UUIManager_C::OnStateStarted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:OnStateStarted");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:Destruct
void UUIManager_C::Destruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:Destruct");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature
void UUIManager_C::BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:DisplayErrorDialog
void UUIManager_C::DisplayErrorDialog(FFortErrorInfo Info)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:DisplayErrorDialog");

	FUUIManager_C_DisplayErrorDialog_Params Parms;

	Parms.Info = Info;

	ProcessEvent(FN, &Parms);
}

// Function /game/UI/Global_Elements/UIManager.UIManager_C:ExecuteUbergraph_UIManager
void UUIManager_C::ExecuteUbergraph_UIManager(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/game/UI/Global_Elements/UIManager.UIManager_C:ExecuteUbergraph_UIManager");

	FUUIManager_C_ExecuteUbergraph_UIManager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

