#include "pch.h"

#include "FN_GadgetSelectButton_classes.h"

UClass* UGadgetSelectButton_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C");

	return Class;
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:On_EmptySlot_MouseButtonDown_0
FEventReply UGadgetSelectButton_C::On_EmptySlot_MouseButtonDown_0(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:On_EmptySlot_MouseButtonDown_0");

	FUGadgetSelectButton_C_On_EmptySlot_MouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:On_Locked_MouseButtonDown_0
FEventReply UGadgetSelectButton_C::On_Locked_MouseButtonDown_0(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:On_Locked_MouseButtonDown_0");

	FUGadgetSelectButton_C_On_Locked_MouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Get_EmptySlot_ToolTipWidget_0
class UWidget* UGadgetSelectButton_C::Get_EmptySlot_ToolTipWidget_0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Get_EmptySlot_ToolTipWidget_0");

	FUGadgetSelectButton_C_Get_EmptySlot_ToolTipWidget_0_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Get_Locked_ToolTipWidget_0
class UWidget* UGadgetSelectButton_C::Get_Locked_ToolTipWidget_0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Get_Locked_ToolTipWidget_0");

	FUGadgetSelectButton_C_Get_Locked_ToolTipWidget_0_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:InternalInit
void UGadgetSelectButton_C::InternalInit()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:InternalInit");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Init
void UGadgetSelectButton_C::Init(class UFortWorldItem* Gadget, TArray<class UFortWorldItem*> AvailableGadgets)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Init");

	FUGadgetSelectButton_C_Init_Params Parms;

	Parms.Gadget = Gadget;
	Parms.AvailableGadgets = AvailableGadgets;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Construct
void UGadgetSelectButton_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature
void UGadgetSelectButton_C::BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature(class UObject* Data, class UFortGridPickerTile* Tile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature");

	FUGadgetSelectButton_C_BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature_Params Parms;

	Parms.Data = Data;
	Parms.Tile = Tile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature
void UGadgetSelectButton_C::BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature");

	FUGadgetSelectButton_C_BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:ExecuteUbergraph_GadgetSelectButton
void UGadgetSelectButton_C::ExecuteUbergraph_GadgetSelectButton(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:ExecuteUbergraph_GadgetSelectButton");

	FUGadgetSelectButton_C_ExecuteUbergraph_GadgetSelectButton_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:GadgetSelected__DelegateSignature
void UGadgetSelectButton_C::GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectButton.GadgetSelectButton_C:GadgetSelected__DelegateSignature");

	FUGadgetSelectButton_C_GadgetSelected__DelegateSignature_Params Parms;

	Parms.Gadget = Gadget;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__Item_C_154::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectButton.PLACEHOLDER-CLASS__Item_C_154");

	return Class;
}

