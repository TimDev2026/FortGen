#include "pch.h"

#include "FN_HB_RoadManager_classes.h"

UClass* AHB_RoadManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:FindAllPaths
void AHB_RoadManager_C::FindAllPaths(int32_t ID, TArray<int32_t> IndexArray)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:FindAllPaths");

	FAHB_RoadManager_C_FindAllPaths_Params Parms;

	Parms.ID = ID;
	Parms.IndexArray = IndexArray;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:ResetAllPaths
void AHB_RoadManager_C::ResetAllPaths()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:ResetAllPaths");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:Set Path
void AHB_RoadManager_C::Set_Path(float ProgressValue, int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:Set Path");

	FAHB_RoadManager_C_Set_Path_Params Parms;

	Parms.ProgressValue = ProgressValue;
	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:DebugAllRoads
void AHB_RoadManager_C::DebugAllRoads()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:DebugAllRoads");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradePath
void AHB_RoadManager_C::UpgradePath(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradePath");

	FAHB_RoadManager_C_UpgradePath_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UserConstructionScript
void AHB_RoadManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradeTimeline__FinishedFunc
void AHB_RoadManager_C::UpgradeTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradeTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradeTimeline__UpdateFunc
void AHB_RoadManager_C::UpgradeTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:UpgradeTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:StartPathUpgradeAnimation
void AHB_RoadManager_C::StartPathUpgradeAnimation(int32_t ID, float ProgressValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:StartPathUpgradeAnimation");

	FAHB_RoadManager_C_StartPathUpgradeAnimation_Params Parms;

	Parms.ID = ID;
	Parms.ProgressValue = ProgressValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:SetPathProgression
void AHB_RoadManager_C::SetPathProgression(int32_t ID, float ProgressionValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:SetPathProgression");

	FAHB_RoadManager_C_SetPathProgression_Params Parms;

	Parms.ID = ID;
	Parms.ProgressionValue = ProgressionValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:ExecuteUbergraph_HB_RoadManager
void AHB_RoadManager_C::ExecuteUbergraph_HB_RoadManager(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/HB_RoadManager.HB_RoadManager_C:ExecuteUbergraph_HB_RoadManager");

	FAHB_RoadManager_C_ExecuteUbergraph_HB_RoadManager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

