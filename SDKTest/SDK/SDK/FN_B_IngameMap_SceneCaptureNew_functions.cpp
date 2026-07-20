#include "pch.h"

#include "FN_B_IngameMap_SceneCaptureNew_classes.h"

UClass* AB_IngameMap_SceneCaptureNew_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C");

	return Class;
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:UserConstructionScript
void AB_IngameMap_SceneCaptureNew_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:ReceiveBeginPlay
void AB_IngameMap_SceneCaptureNew_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:ExecuteUbergraph_B_IngameMap_SceneCaptureNew
void AB_IngameMap_SceneCaptureNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C:ExecuteUbergraph_B_IngameMap_SceneCaptureNew");

	FAB_IngameMap_SceneCaptureNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureNew_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

