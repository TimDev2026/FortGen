#include "pch.h"

#include "FN_WM_Camera_classes.h"

UClass* AWM_Camera_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C");

	return Class;
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:UserConstructionScript
void AWM_Camera_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraNoise__FinishedFunc
void AWM_Camera_C::CameraNoise__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraNoise__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraNoise__UpdateFunc
void AWM_Camera_C::CameraNoise__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraNoise__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraActivateAnim__FinishedFunc
void AWM_Camera_C::TL_CameraActivateAnim__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraActivateAnim__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraActivateAnim__UpdateFunc
void AWM_Camera_C::TL_CameraActivateAnim__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraActivateAnim__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraDeactivateAnim__FinishedFunc
void AWM_Camera_C::TL_CameraDeactivateAnim__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraDeactivateAnim__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraDeactivateAnim__UpdateFunc
void AWM_Camera_C::TL_CameraDeactivateAnim__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:TL_CameraDeactivateAnim__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:OnActivated
void AWM_Camera_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:OnDeactivated
void AWM_Camera_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraWiggle
void AWM_Camera_C::CameraWiggle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraWiggle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraActivateAnim
void AWM_Camera_C::CameraActivateAnim()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraActivateAnim");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:ReceiveBeginPlay
void AWM_Camera_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:StopWiggle
void AWM_Camera_C::StopWiggle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:StopWiggle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraDeactivateAnim
void AWM_Camera_C::CameraDeactivateAnim()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:CameraDeactivateAnim");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:ExecuteUbergraph_WM_Camera
void AWM_Camera_C::ExecuteUbergraph_WM_Camera(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C:ExecuteUbergraph_WM_Camera");

	FAWM_Camera_C_ExecuteUbergraph_WM_Camera_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_156::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/WorldMap/Blueprints/WM_Camera.PLACEHOLDER-CLASS__TVPostProcessBP_C_156");

	return Class;
}

