#include "pch.h"

#include "FN_BuildingPanelUtil_classes.h"

UClass* UBuildingPanelUtil_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C");

	return Class;
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Attribute Modifier Header Text
FText UBuildingPanelUtil_C::Get_Attribute_Modifier_Header_Text(FFortAttributeInfo Attribute_Info, FGameplayTagContainer Required_Tags, FText Required_Gameplay_Tags_Description, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Attribute Modifier Header Text");

	FUBuildingPanelUtil_C_Get_Attribute_Modifier_Header_Text_Params Parms;

	Parms.Attribute_Info = Attribute_Info;
	Parms.Required_Tags = Required_Tags;
	Parms.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Create Attribute Modifier Tool Tip
void UBuildingPanelUtil_C::Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, FFortAttributeInfo Attribute_Info, FGameplayTagContainer Required_Gameplay_Tags, FText Required_Gameplay_Tags_Description, FText Modifier_Source, class UObject* __WorldContext, class UWidget* Result)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Create Attribute Modifier Tool Tip");

	FUBuildingPanelUtil_C_Create_Attribute_Modifier_Tool_Tip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Attribute_Info = Attribute_Info;
	Parms.Required_Gameplay_Tags = Required_Gameplay_Tags;
	Parms.Required_Gameplay_Tags_Description = Required_Gameplay_Tags_Description;
	Parms.Modifier_Source = Modifier_Source;
	Parms.__WorldContext = __WorldContext;
	Parms.Result = Result;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Traits Of Workers
void UBuildingPanelUtil_C::Get_Traits_Of_Workers(TArray<class UFortWorker*> Workers, class UObject* __WorldContext, FGameplayTagContainer Chief_Personality, FGameplayTagContainer Crew_Personalities, FGameplayTagContainer Crew_Set_Bonuses)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Traits Of Workers");

	FUBuildingPanelUtil_C_Get_Traits_Of_Workers_Params Parms;

	Parms.Workers = Workers;
	Parms.__WorldContext = __WorldContext;
	Parms.Chief_Personality = Chief_Personality;
	Parms.Crew_Personalities = Crew_Personalities;
	Parms.Crew_Set_Bonuses = Crew_Set_Bonuses;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Calculate Current Pulsing Highlight Color
void UBuildingPanelUtil_C::Calculate_Current_Pulsing_Highlight_Color(FLinearColor Base_Color, FLinearColor Hightlight_Color, class UObject* __WorldContext, FLinearColor Current_Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Calculate Current Pulsing Highlight Color");

	FUBuildingPanelUtil_C_Calculate_Current_Pulsing_Highlight_Color_Params Parms;

	Parms.Base_Color = Base_Color;
	Parms.Hightlight_Color = Hightlight_Color;
	Parms.__WorldContext = __WorldContext;
	Parms.Current_Color = Current_Color;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Worker Bonus Text
void UBuildingPanelUtil_C::Get_Worker_Bonus_Text(class UHomeBaseWorker* Worker, class UObject* __WorldContext, FText Bonus_Text)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:Get Worker Bonus Text");

	FUBuildingPanelUtil_C_Get_Worker_Bonus_Text_Params Parms;

	Parms.Worker = Worker;
	Parms.__WorldContext = __WorldContext;
	Parms.Bonus_Text = Bonus_Text;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:EnsureIconBrush
void UBuildingPanelUtil_C::EnsureIconBrush(FFortMultiSizeBrush Multi_size_Brush, class UObject* __WorldContext, FSlateBrush Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:EnsureIconBrush");

	FUBuildingPanelUtil_C_EnsureIconBrush_Params Parms;

	Parms.Multi_size_Brush = Multi_size_Brush;
	Parms.__WorldContext = __WorldContext;
	Parms.Brush = Brush;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:InitItemWidget
void UBuildingPanelUtil_C::InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/BuildingPanelUtil.BuildingPanelUtil_C:InitItemWidget");

	FUBuildingPanelUtil_C_InitItemWidget_Params Parms;

	Parms.Widget = Widget;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;

	StaticClass()->ProcessEvent(FN, &Parms);
}

