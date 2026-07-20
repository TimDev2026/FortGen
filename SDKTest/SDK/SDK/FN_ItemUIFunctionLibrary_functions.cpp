#include "pch.h"

#include "FN_ItemUIFunctionLibrary_classes.h"

UClass* UItemUIFunctionLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C");

	return Class;
}

// Function /Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C:ParseLevelRequiredFromString
void UItemUIFunctionLibrary_C::ParseLevelRequiredFromString(FString InString, class UObject* __WorldContext, int32_t outInt)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C:ParseLevelRequiredFromString");

	FUItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params Parms;

	Parms.InString = InString;
	Parms.__WorldContext = __WorldContext;
	Parms.outInt = outInt;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C:Add Alteration Widgets
void UItemUIFunctionLibrary_C::Add_Alteration_Widgets(class UVerticalBox* Host_Widget, class UFortItem* Item, int32_t PreviewLevel, bool ShowInVaultDetails, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C:Add Alteration Widgets");

	FUItemUIFunctionLibrary_C_Add_Alteration_Widgets_Params Parms;

	Parms.Host_Widget = Host_Widget;
	Parms.Item = Item;
	Parms.PreviewLevel = PreviewLevel;
	Parms.ShowInVaultDetails = ShowInVaultDetails;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

