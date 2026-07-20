#include "pch.h"

#include "FN_TooltipLibrary_classes.h"

UClass* UTooltipLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C");

	return Class;
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Core Stat Tooltip
void UTooltipLibrary_C::Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, FHeroCoreStat Data, float Value, class UObject* __WorldContext, class UUserWidget* Output)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Core Stat Tooltip");

	FUTooltipLibrary_C_Create_Core_Stat_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Data = Data;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Output = Output;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Basic Multi Line Tooltip
void UTooltipLibrary_C::Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, TArray<FText> Body_Text, FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget* Output)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Basic Multi Line Tooltip");

	FUTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = Body_Text;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.Output = Output;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Compare Item Tooltip
void UTooltipLibrary_C::Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget* Return_Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Compare Item Tooltip");

	FUTooltipLibrary_C_Create_Compare_Item_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.ComparedItem = ComparedItem;
	Parms.__WorldContext = __WorldContext;
	Parms.Return_Value = Return_Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Item Tooltip
void UTooltipLibrary_C::Create_Item_Tooltip(class APlayerController* Owning_Player, FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UObject* __WorldContext, class UWidget* Return_Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Item Tooltip");

	FUTooltipLibrary_C_Create_Item_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.Return_Value = Return_Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Set Enabled And Tooltip Text
void UTooltipLibrary_C::Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, FText Tooltip_Text, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Set Enabled And Tooltip Text");

	FUTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params Parms;

	Parms.Widget = Widget;
	Parms.Enabled = Enabled;
	Parms.Tooltip_Text = Tooltip_Text;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Custom Tooltip
void UTooltipLibrary_C::Create_Custom_Tooltip(class APlayerController* Owning_Player, FText Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget* Output)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Custom Tooltip");

	FUTooltipLibrary_C_Create_Custom_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.Output = Output;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Basic Tooltip
void UTooltipLibrary_C::Create_Basic_Tooltip(class APlayerController* Owning_Player, FText Body_Text, FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget* Output)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipLibrary.TooltipLibrary_C:Create Basic Tooltip");

	FUTooltipLibrary_C_Create_Basic_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = Body_Text;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.Output = Output;

	StaticClass()->ProcessEvent(FN, &Parms);
}

