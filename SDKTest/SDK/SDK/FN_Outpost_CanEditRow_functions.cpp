#include "pch.h"

#include "FN_Outpost_CanEditRow_classes.h"

UClass* UOutpost_CanEditRow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C");

	return Class;
}

// Function /Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:Init
void UOutpost_CanEditRow_C::Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:Init");

	FUOutpost_CanEditRow_C_Init_Params Parms;

	Parms.InPlayer = InPlayer;
	Parms.InOutpostOwner = InOutpostOwner;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature
void UOutpost_CanEditRow_C::BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature");

	FUOutpost_CanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:ExecuteUbergraph_Outpost_CanEditRow
void UOutpost_CanEditRow_C::ExecuteUbergraph_Outpost_CanEditRow(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Outpost/Outpost_CanEditRow.Outpost_CanEditRow_C:ExecuteUbergraph_Outpost_CanEditRow");

	FUOutpost_CanEditRow_C_ExecuteUbergraph_Outpost_CanEditRow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

