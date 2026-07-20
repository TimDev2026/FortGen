#include "pch.h"

#include "FN_B_Placement_Teleporter_classes.h"

UClass* AB_Placement_Teleporter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:UserConstructionScript
void AB_Placement_Teleporter_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnBounceMotionUpdate
void AB_Placement_Teleporter_C::OnBounceMotionUpdate(float VectorScale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnBounceMotionUpdate");

	FAB_Placement_Teleporter_C_OnBounceMotionUpdate_Params Parms;

	Parms.VectorScale = VectorScale;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnInitializeDecoPreview
void AB_Placement_Teleporter_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnInitializeDecoPreview");

	FAB_Placement_Teleporter_C_OnInitializeDecoPreview_Params Parms;

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnUpdateScale
void AB_Placement_Teleporter_C::OnUpdateScale(float Scale, FVector InWorldSpacePivot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnUpdateScale");

	FAB_Placement_Teleporter_C_OnUpdateScale_Params Parms;

	Parms.Scale = Scale;
	Parms.InWorldSpacePivot = InWorldSpacePivot;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnUpdateVisuals
void AB_Placement_Teleporter_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:OnUpdateVisuals");

	FAB_Placement_Teleporter_C_OnUpdateVisuals_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:SetScalarParameterValueOnAllPreviewMIDs
void AB_Placement_Teleporter_C::SetScalarParameterValueOnAllPreviewMIDs(FName ParamName, float ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:SetScalarParameterValueOnAllPreviewMIDs");

	FAB_Placement_Teleporter_C_SetScalarParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:SetVectorParameterValueOnAllPreviewMIDs
void AB_Placement_Teleporter_C::SetVectorParameterValueOnAllPreviewMIDs(FName ParamName, FLinearColor ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:SetVectorParameterValueOnAllPreviewMIDs");

	FAB_Placement_Teleporter_C_SetVectorParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:ReceiveBeginPlay
void AB_Placement_Teleporter_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:ExecuteUbergraph_B_Placement_Teleporter
void AB_Placement_Teleporter_C::ExecuteUbergraph_B_Placement_Teleporter(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Placement_Teleporter.B_Placement_Teleporter_C:ExecuteUbergraph_B_Placement_Teleporter");

	FAB_Placement_Teleporter_C_ExecuteUbergraph_B_Placement_Teleporter_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

