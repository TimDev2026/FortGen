#include "pch.h"

#include "FN_ErrorEntry_classes.h"

UClass* UErrorEntry_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C");

	return Class;
}

// Function /Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:Construct
void UErrorEntry_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature
void UErrorEntry_C::BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:ExecuteUbergraph_ErrorEntry
void UErrorEntry_C::ExecuteUbergraph_ErrorEntry(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorEntry.ErrorEntry_C:ExecuteUbergraph_ErrorEntry");

	FUErrorEntry_C_ExecuteUbergraph_ErrorEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

