#include "pch.h"

#include "FN_GadgetSelectTile_classes.h"

UClass* UGadgetSelectTile_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C");

	return Class;
}

// Function /Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:SetData
void UGadgetSelectTile_C::SetData(class UObject* InData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:SetData");

	FUGadgetSelectTile_C_SetData_Params Parms;

	Parms.InData = InData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature
void UGadgetSelectTile_C::BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature");

	FUGadgetSelectTile_C_BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:ExecuteUbergraph_GadgetSelectTile
void UGadgetSelectTile_C::ExecuteUbergraph_GadgetSelectTile(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HeroSelect/GadgetSelectTile.GadgetSelectTile_C:ExecuteUbergraph_GadgetSelectTile");

	FUGadgetSelectTile_C_ExecuteUbergraph_GadgetSelectTile_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__Item_C_155::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HeroSelect/GadgetSelectTile.PLACEHOLDER-CLASS__Item_C_155");

	return Class;
}

