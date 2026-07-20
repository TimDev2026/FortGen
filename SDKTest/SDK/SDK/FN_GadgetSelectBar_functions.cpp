#include "pch.h"

#include "FN_GadgetSelectBar_classes.h"

UClass* UGadgetSelectBar_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C");

	return Class;
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:SetShown
void UGadgetSelectBar_C::SetShown(bool bShown)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:SetShown");

	FUGadgetSelectBar_C_SetShown_Params Parms;

	Parms.bShown = bShown;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BindDelegates
void UGadgetSelectBar_C::BindDelegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BindDelegates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:SelectGadget
void UGadgetSelectBar_C::SelectGadget(class UFortWorldItem* Item, int32_t Slot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:SelectGadget");

	FUGadgetSelectBar_C_SelectGadget_Params Parms;

	Parms.Item = Item;
	Parms.Slot = Slot;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:InitGadget
void UGadgetSelectBar_C::InitGadget(class UGadgetSelectButton_C* Item_Widget, int32_t Slot_Index)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:InitGadget");

	FUGadgetSelectBar_C_InitGadget_Params Parms;

	Parms.Item_Widget = Item_Widget;
	Parms.Slot_Index = Slot_Index;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:InitBar
void UGadgetSelectBar_C::InitBar()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:InitBar");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:Init
void UGadgetSelectBar_C::Init()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:Init");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:Construct
void UGadgetSelectBar_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature
void UGadgetSelectBar_C::BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature");

	FUGadgetSelectBar_C_BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature_Params Parms;

	Parms.Gadget = Gadget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature
void UGadgetSelectBar_C::BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature");

	FUGadgetSelectBar_C_BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature_Params Parms;

	Parms.Gadget = Gadget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleAccountInfoChanged
void UGadgetSelectBar_C::HandleAccountInfoChanged(FFortPrivateAccountInfo NewInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleAccountInfoChanged");

	FUGadgetSelectBar_C_HandleAccountInfoChanged_Params Parms;

	Parms.NewInfo = NewInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleLobbyStarted
void UGadgetSelectBar_C::HandleLobbyStarted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleLobbyStarted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleHomebaseInventoryUpdated
void UGadgetSelectBar_C::HandleHomebaseInventoryUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:HandleHomebaseInventoryUpdated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:ExecuteUbergraph_GadgetSelectBar
void UGadgetSelectBar_C::ExecuteUbergraph_GadgetSelectBar(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectBar.GadgetSelectBar_C:ExecuteUbergraph_GadgetSelectBar");

	FUGadgetSelectBar_C_ExecuteUbergraph_GadgetSelectBar_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__GadgetSelectButton_C_153::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectBar.PLACEHOLDER-CLASS__GadgetSelectButton_C_153");

	return Class;
}

