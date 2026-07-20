#include "pch.h"

#include "FN_SlateContentCalloutMenu_classes.h"

UClass* USlateContentCalloutMenu_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C");

	return Class;
}

// Function /Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:Get Size Box
void USlateContentCalloutMenu_C::Get_Size_Box(class USizeBox* Size_Box)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:Get Size Box");

	FUSlateContentCalloutMenu_C_Get_Size_Box_Params Parms;

	Parms.Size_Box = Size_Box;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:Construct
void USlateContentCalloutMenu_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:ExecuteUbergraph_SlateContentCalloutMenu
void USlateContentCalloutMenu_C::ExecuteUbergraph_SlateContentCalloutMenu(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContentCalloutMenu.SlateContentCalloutMenu_C:ExecuteUbergraph_SlateContentCalloutMenu");

	FUSlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

