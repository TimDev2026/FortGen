#include "pch.h"

#include "FN_WorkerTooltipStatsWidget_classes.h"

UClass* UWorkerTooltipStatsWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C");

	return Class;
}

// Function /Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:Construct
void UWorkerTooltipStatsWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:Tick
void UWorkerTooltipStatsWidget_C::Tick(FGeometry MyGeometry, float InDeltaTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:Tick");

	FUWorkerTooltipStatsWidget_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:On Worker Preview State Changed
void UWorkerTooltipStatsWidget_C::On_Worker_Preview_State_Changed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:On Worker Preview State Changed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:ExecuteUbergraph_WorkerTooltipStatsWidget
void UWorkerTooltipStatsWidget_C::ExecuteUbergraph_WorkerTooltipStatsWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WorkerTooltipStatsWidget.WorkerTooltipStatsWidget_C:ExecuteUbergraph_WorkerTooltipStatsWidget");

	FUWorkerTooltipStatsWidget_C_ExecuteUbergraph_WorkerTooltipStatsWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

