#include "pch.h"

#include "FN_BuildingLevelWidget_classes.h"

UClass* UBuildingLevelWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C");

	return Class;
}

// Function /Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Update
void UBuildingLevelWidget_C::Update()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Update");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Set Brush Size
void UBuildingLevelWidget_C::Set_Brush_Size(EFortBrushSize New_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Set Brush Size");

	FUBuildingLevelWidget_C_Set_Brush_Size_Params Parms;

	Parms.New_Size = New_Size;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Set Level
void UBuildingLevelWidget_C::Set_Level(int32_t New_Level)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Set Level");

	FUBuildingLevelWidget_C_Set_Level_Params Parms;

	Parms.New_Level = New_Level;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Construct
void UBuildingLevelWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:ExecuteUbergraph_BuildingLevelWidget
void UBuildingLevelWidget_C::ExecuteUbergraph_BuildingLevelWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Level/BuildingLevelWidget.BuildingLevelWidget_C:ExecuteUbergraph_BuildingLevelWidget");

	FUBuildingLevelWidget_C_ExecuteUbergraph_BuildingLevelWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

