#include "pch.h"

#include "FN_LightBox_classes.h"

UClass* ULightBox_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/LightBox.LightBox_C");

	return Class;
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:OnPanelActivated
void ULightBox_C::OnPanelActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:OnPanelActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:EstablishContainedPanel
void ULightBox_C::EstablishContainedPanel(class UFortActionHandlerPanel* New_Panel)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:EstablishContainedPanel");

	FULightBox_C_EstablishContainedPanel_Params Parms;

	Parms.New_Panel = New_Panel;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:AddActivePanelContent
void ULightBox_C::AddActivePanelContent(class UFortActionHandlerPanel* ActionHandlerPanel, EHorizontalAlignment InHorizontal_Alignment, EVerticalAlignment InVertical_Alignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:AddActivePanelContent");

	FULightBox_C_AddActivePanelContent_Params Parms;

	Parms.ActionHandlerPanel = ActionHandlerPanel;
	Parms.InHorizontal_Alignment = InHorizontal_Alignment;
	Parms.InVertical_Alignment = InVertical_Alignment;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:OnPanelDeactivated
void ULightBox_C::OnPanelDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:OnPanelDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:Construct
void ULightBox_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:Destruct
void ULightBox_C::Destruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:Destruct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:OnFadeOutComplete
void ULightBox_C::OnFadeOutComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:OnFadeOutComplete");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:ExecuteUbergraph_LightBox
void ULightBox_C::ExecuteUbergraph_LightBox(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:ExecuteUbergraph_LightBox");

	FULightBox_C_ExecuteUbergraph_LightBox_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/LightBox.LightBox_C:CenterContentCleared__DelegateSignature
void ULightBox_C::CenterContentCleared__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/LightBox.LightBox_C:CenterContentCleared__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

