#include "pch.h"

#include "FN_B_IngameMap_SceneCaptureBlurryNew_classes.h"

UClass* AB_IngameMap_SceneCaptureBlurryNew_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C");

	return Class;
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:UserConstructionScript
void AB_IngameMap_SceneCaptureBlurryNew_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:ReceiveBeginPlay
void AB_IngameMap_SceneCaptureBlurryNew_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew
void AB_IngameMap_SceneCaptureBlurryNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/IngameMap/B_IngameMap_SceneCaptureBlurryNew.B_IngameMap_SceneCaptureBlurryNew_C:ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew");

	FAB_IngameMap_SceneCaptureBlurryNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureBlurryNew_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

