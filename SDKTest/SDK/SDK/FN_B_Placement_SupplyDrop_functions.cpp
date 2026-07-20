#include "pch.h"

#include "FN_B_Placement_SupplyDrop_classes.h"

UClass* AB_Placement_SupplyDrop_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:UserConstructionScript
void AB_Placement_SupplyDrop_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnBounceMotionUpdate
void AB_Placement_SupplyDrop_C::OnBounceMotionUpdate(float VectorScale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnBounceMotionUpdate");

	FAB_Placement_SupplyDrop_C_OnBounceMotionUpdate_Params Parms;

	Parms.VectorScale = VectorScale;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnInitializeDecoPreview
void AB_Placement_SupplyDrop_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnInitializeDecoPreview");

	FAB_Placement_SupplyDrop_C_OnInitializeDecoPreview_Params Parms;

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnUpdateScale
void AB_Placement_SupplyDrop_C::OnUpdateScale(float Scale, FVector InWorldSpacePivot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnUpdateScale");

	FAB_Placement_SupplyDrop_C_OnUpdateScale_Params Parms;

	Parms.Scale = Scale;
	Parms.InWorldSpacePivot = InWorldSpacePivot;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnUpdateVisuals
void AB_Placement_SupplyDrop_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:OnUpdateVisuals");

	FAB_Placement_SupplyDrop_C_OnUpdateVisuals_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:SetScalarParameterValueOnAllPreviewMIDs
void AB_Placement_SupplyDrop_C::SetScalarParameterValueOnAllPreviewMIDs(FName ParamName, float ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:SetScalarParameterValueOnAllPreviewMIDs");

	FAB_Placement_SupplyDrop_C_SetScalarParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:SetVectorParameterValueOnAllPreviewMIDs
void AB_Placement_SupplyDrop_C::SetVectorParameterValueOnAllPreviewMIDs(FName ParamName, FLinearColor ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:SetVectorParameterValueOnAllPreviewMIDs");

	FAB_Placement_SupplyDrop_C_SetVectorParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:ExecuteUbergraph_B_Placement_SupplyDrop
void AB_Placement_SupplyDrop_C::ExecuteUbergraph_B_Placement_SupplyDrop(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/B_Placement_SupplyDrop.B_Placement_SupplyDrop_C:ExecuteUbergraph_B_Placement_SupplyDrop");

	FAB_Placement_SupplyDrop_C_ExecuteUbergraph_B_Placement_SupplyDrop_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

