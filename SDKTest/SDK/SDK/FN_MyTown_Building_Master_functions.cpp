#include "pch.h"

#include "FN_MyTown_Building_Master_classes.h"

UClass* AMyTown_Building_Master_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StencilBufferSetup
void AMyTown_Building_Master_C::StencilBufferSetup()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StencilBufferSetup");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpdateBangVisibility
void AMyTown_Building_Master_C::UpdateBangVisibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpdateBangVisibility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Set Tooltip Visibility
void AMyTown_Building_Master_C::Set_Tooltip_Visibility(bool Visibile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Set Tooltip Visibility");

	FAMyTown_Building_Master_C_Set_Tooltip_Visibility_Params Parms;

	Parms.Visibile = Visibile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Setup Tooltip
void AMyTown_Building_Master_C::Setup_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Setup Tooltip");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpgradeIconFriendCheck
void AMyTown_Building_Master_C::UpgradeIconFriendCheck()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpgradeIconFriendCheck");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MIDCreation
void AMyTown_Building_Master_C::MIDCreation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MIDCreation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug Build
void AMyTown_Building_Master_C::StateDebug_Build()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug Build");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug Upgrade
void AMyTown_Building_Master_C::StateDebug_Upgrade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug Upgrade");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug_Idle
void AMyTown_Building_Master_C::StateDebug_Idle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:StateDebug_Idle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:State Debug Locked
void AMyTown_Building_Master_C::State_Debug_Locked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:State Debug Locked");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HasBeenBuilt
void AMyTown_Building_Master_C::HasBeenBuilt(bool Building_is_Built, int32_t Building_Level)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HasBeenBuilt");

	FAMyTown_Building_Master_C_HasBeenBuilt_Params Parms;

	Parms.Building_is_Built = Building_is_Built;
	Parms.Building_Level = Building_Level;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UserConstructionScript
void AMyTown_Building_Master_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut_TL__FinishedFunc
void AMyTown_Building_Master_C::GlobalFadeOut_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut_TL__UpdateFunc
void AMyTown_Building_Master_C::GlobalFadeOut_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn_TL__FinishedFunc
void AMyTown_Building_Master_C::GlobalFadeIn_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn_TL__UpdateFunc
void AMyTown_Building_Master_C::GlobalFadeIn_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SquashAndStretchIn_TL__FinishedFunc
void AMyTown_Building_Master_C::SquashAndStretchIn_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SquashAndStretchIn_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SquashAndStretchIn_TL__UpdateFunc
void AMyTown_Building_Master_C::SquashAndStretchIn_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SquashAndStretchIn_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildAnim_Walls_TL__FinishedFunc
void AMyTown_Building_Master_C::BuildAnim_Walls_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildAnim_Walls_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildAnim_Walls_TL__UpdateFunc
void AMyTown_Building_Master_C::BuildAnim_Walls_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildAnim_Walls_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__FinishedFunc
void AMyTown_Building_Master_C::MorphPop__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__UpdateFunc
void AMyTown_Building_Master_C::MorphPop__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__SpawnLightEmitter__EventFunc
void AMyTown_Building_Master_C::MorphPop__SpawnLightEmitter__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MorphPop__SpawnLightEmitter__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingFlashOut__FinishedFunc
void AMyTown_Building_Master_C::BuildingFlashOut__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingFlashOut__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingFlashOut__UpdateFunc
void AMyTown_Building_Master_C::BuildingFlashOut__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingFlashOut__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BubblePop__FinishedFunc
void AMyTown_Building_Master_C::BubblePop__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BubblePop__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BubblePop__UpdateFunc
void AMyTown_Building_Master_C::BubblePop__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BubblePop__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgrade_TL__FinishedFunc
void AMyTown_Building_Master_C::BuildingUpgrade_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgrade_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgrade_TL__UpdateFunc
void AMyTown_Building_Master_C::BuildingUpgrade_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgrade_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation_TL__FinishedFunc
void AMyTown_Building_Master_C::AddWorkerAnimation_TL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation_TL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation_TL__UpdateFunc
void AMyTown_Building_Master_C::AddWorkerAnimation_TL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation_TL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut
void AMyTown_Building_Master_C::GlobalFadeOut(class UMaterialInstanceDynamic* Mid, FName Parameter, bool Parameter_Collection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeOut");

	FAMyTown_Building_Master_C_GlobalFadeOut_Params Parms;

	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.Parameter_Collection = Parameter_Collection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn
void AMyTown_Building_Master_C::GlobalFadeIn(class UMaterialInstanceDynamic* Mid, FName Parameter, bool Parameter_Collection)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:GlobalFadeIn");

	FAMyTown_Building_Master_C_GlobalFadeIn_Params Parms;

	Parms.Mid = Mid;
	Parms.Parameter = Parameter;
	Parms.Parameter_Collection = Parameter_Collection;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloHoverAnim
void AMyTown_Building_Master_C::HoloHoverAnim(class UMaterialInstanceDynamic* MID_Array, float SquashIntensity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloHoverAnim");

	FAMyTown_Building_Master_C_HoloHoverAnim_Params Parms;

	Parms.MID_Array = MID_Array;
	Parms.SquashIntensity = SquashIntensity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingAnimation
void AMyTown_Building_Master_C::BuildingAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildSubbuildingAnimation
void AMyTown_Building_Master_C::BuildSubbuildingAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildSubbuildingAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgradeAnimation
void AMyTown_Building_Master_C::BuildingUpgradeAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildingUpgradeAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation
void AMyTown_Building_Master_C::AddWorkerAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:AddWorkerAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:idle
void AMyTown_Building_Master_C::idle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:idle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgrade
void AMyTown_Building_Master_C::CanUpgrade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgrade");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Locked
void AMyTown_Building_Master_C::Locked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Locked");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuild
void AMyTown_Building_Master_C::CanBuild()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuild");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Idle Cursor Over
void AMyTown_Building_Master_C::Idle_Cursor_Over()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Idle Cursor Over");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Idle CursorOut
void AMyTown_Building_Master_C::Idle_CursorOut()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:Idle CursorOut");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOver
void AMyTown_Building_Master_C::CanBuildOver()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOver");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOut
void AMyTown_Building_Master_C::CanBuildOut()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOut");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOver
void AMyTown_Building_Master_C::LockedOver()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOver");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOut
void AMyTown_Building_Master_C::LockedOut()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOut");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingMeshAssign
void AMyTown_Building_Master_C::HoloBuildingMeshAssign()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingMeshAssign");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingRotation
void AMyTown_Building_Master_C::HoloBuildingRotation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingRotation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingAnim
void AMyTown_Building_Master_C::HoloBuildingAnim(float Time)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HoloBuildingAnim");

	FAMyTown_Building_Master_C_HoloBuildingAnim_Params Parms;

	Parms.Time = Time;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOver
void AMyTown_Building_Master_C::CanUpgradeOver()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOver");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOut
void AMyTown_Building_Master_C::CanUpgradeOut()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOut");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:IdleOpen
void AMyTown_Building_Master_C::IdleOpen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:IdleOpen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:IdleClosed
void AMyTown_Building_Master_C::IdleClosed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:IdleClosed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOpen
void AMyTown_Building_Master_C::CanBuildOpen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildOpen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildClosed
void AMyTown_Building_Master_C::CanBuildClosed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanBuildClosed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOpen
void AMyTown_Building_Master_C::LockedOpen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedOpen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedClosed
void AMyTown_Building_Master_C::LockedClosed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:LockedClosed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOpen
void AMyTown_Building_Master_C::CanUpgradeOpen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeOpen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeClosed
void AMyTown_Building_Master_C::CanUpgradeClosed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CanUpgradeClosed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildBuilding
void AMyTown_Building_Master_C::BuildBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:BuildBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpgradeBuilding
void AMyTown_Building_Master_C::UpgradeBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpgradeBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:ReceiveBeginPlay
void AMyTown_Building_Master_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SetUnbuiltPlatformIcon
void AMyTown_Building_Master_C::SetUnbuiltPlatformIcon()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SetUnbuiltPlatformIcon");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MyTown_BuildingStates
void AMyTown_Building_Master_C::MyTown_BuildingStates(FString Building_Template_ID)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:MyTown_BuildingStates");

	FAMyTown_Building_Master_C_MyTown_BuildingStates_Params Parms;

	Parms.Building_Template_ID = Building_Template_ID;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingStateChanged_Event_0
void AMyTown_Building_Master_C::OnMyTownBuildingStateChanged_Event_0(EMyTownBuildingState NewState, EMyTownBuildingState OldState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingStateChanged_Event_0");

	FAMyTown_Building_Master_C_OnMyTownBuildingStateChanged_Event_0_Params Parms;

	Parms.NewState = NewState;
	Parms.OldState = OldState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnBeginCursorOver_Event_1
void AMyTown_Building_Master_C::OnBeginCursorOver_Event_1()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnBeginCursorOver_Event_1");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnEndCursorOver_Event_1
void AMyTown_Building_Master_C::OnEndCursorOver_Event_1()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnEndCursorOver_Event_1");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CheckCollision
void AMyTown_Building_Master_C::CheckCollision()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:CheckCollision");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpdateRoads
void AMyTown_Building_Master_C::UpdateRoads()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:UpdateRoads");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingPanelOpened_Event_0
void AMyTown_Building_Master_C::OnMyTownBuildingPanelOpened_Event_0(FString BuildingTemplateId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingPanelOpened_Event_0");

	FAMyTown_Building_Master_C_OnMyTownBuildingPanelOpened_Event_0_Params Parms;

	Parms.BuildingTemplateId = BuildingTemplateId;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingPanelClosed_Event_0
void AMyTown_Building_Master_C::OnMyTownBuildingPanelClosed_Event_0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingPanelClosed_Event_0");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingWorkersChanged_Event_0
void AMyTown_Building_Master_C::OnMyTownBuildingWorkersChanged_Event_0(FString BuildingTemplateId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingWorkersChanged_Event_0");

	FAMyTown_Building_Master_C_OnMyTownBuildingWorkersChanged_Event_0_Params Parms;

	Parms.BuildingTemplateId = BuildingTemplateId;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingUpgradeFinished_Event_0
void AMyTown_Building_Master_C::OnMyTownBuildingUpgradeFinished_Event_0(FString BuildingTemplateId, bool bSuccess)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnMyTownBuildingUpgradeFinished_Event_0");

	FAMyTown_Building_Master_C_OnMyTownBuildingUpgradeFinished_Event_0_Params Parms;

	Parms.BuildingTemplateId = BuildingTemplateId;
	Parms.bSuccess = bSuccess;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SetFlagIcon
void AMyTown_Building_Master_C::SetFlagIcon()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:SetFlagIcon");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnBuildingInfoUpdated
void AMyTown_Building_Master_C::OnBuildingInfoUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:OnBuildingInfoUpdated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage1
void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage1(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage1");

	FAMyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage1_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage2
void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage2");

	FAMyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage2_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage3
void AMyTown_Building_Master_C::HandleClientEvent_OnboardingBuildingsStage3(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:HandleClientEvent_OnboardingBuildingsStage3");

	FAMyTown_Building_Master_C_HandleClientEvent_OnboardingBuildingsStage3_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:ExecuteUbergraph_MyTown_Building_Master
void AMyTown_Building_Master_C::ExecuteUbergraph_MyTown_Building_Master(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/MyTown_Building_Master.MyTown_Building_Master_C:ExecuteUbergraph_MyTown_Building_Master");

	FAMyTown_Building_Master_C_ExecuteUbergraph_MyTown_Building_Master_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

