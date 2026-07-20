#include "pch.h"

#include "FN_B_Placement_Preview_AirStrike_classes.h"

UClass* AB_Placement_Preview_AirStrike_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Kill Emitters and Start Times
void AB_Placement_Preview_AirStrike_C::Kill_Emitters_and_Start_Times()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Kill Emitters and Start Times");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:UserConstructionScript
void AB_Placement_Preview_AirStrike_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Spawn Arrow__FinishedFunc
void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Spawn Arrow__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Spawn Arrow__UpdateFunc
void AB_Placement_Preview_AirStrike_C::Spawn_Arrow__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:Spawn Arrow__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnBounceMotionUpdate
void AB_Placement_Preview_AirStrike_C::OnBounceMotionUpdate(float VectorScale)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnBounceMotionUpdate");

	FAB_Placement_Preview_AirStrike_C_OnBounceMotionUpdate_Params Parms;

	Parms.VectorScale = VectorScale;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnInitializeDecoPreview
void AB_Placement_Preview_AirStrike_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnInitializeDecoPreview");

	FAB_Placement_Preview_AirStrike_C_OnInitializeDecoPreview_Params Parms;

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnUpdateScale
void AB_Placement_Preview_AirStrike_C::OnUpdateScale(float Scale, FVector InWorldSpacePivot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnUpdateScale");

	FAB_Placement_Preview_AirStrike_C_OnUpdateScale_Params Parms;

	Parms.Scale = Scale;
	Parms.InWorldSpacePivot = InWorldSpacePivot;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnUpdateVisuals
void AB_Placement_Preview_AirStrike_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:OnUpdateVisuals");

	FAB_Placement_Preview_AirStrike_C_OnUpdateVisuals_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SetScalarParameterValueOnAllPreviewMIDs
void AB_Placement_Preview_AirStrike_C::SetScalarParameterValueOnAllPreviewMIDs(FName ParamName, float ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SetScalarParameterValueOnAllPreviewMIDs");

	FAB_Placement_Preview_AirStrike_C_SetScalarParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SetVectorParameterValueOnAllPreviewMIDs
void AB_Placement_Preview_AirStrike_C::SetVectorParameterValueOnAllPreviewMIDs(FName ParamName, FLinearColor ParamValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SetVectorParameterValueOnAllPreviewMIDs");

	FAB_Placement_Preview_AirStrike_C_SetVectorParameterValueOnAllPreviewMIDs_Params Parms;

	Parms.ParamName = ParamName;
	Parms.ParamValue = ParamValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SwitchType
void AB_Placement_Preview_AirStrike_C::SwitchType(TArray<FVector> Positions_With_Duplicates, TArray<FVector> Cleaned_Positions, TArray<int32_t> Duplicated_Entries)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:SwitchType");

	FAB_Placement_Preview_AirStrike_C_SwitchType_Params Parms;

	Parms.Positions_With_Duplicates = Positions_With_Duplicates;
	Parms.Cleaned_Positions = Cleaned_Positions;
	Parms.Duplicated_Entries = Duplicated_Entries;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:ReceiveBeginPlay
void AB_Placement_Preview_AirStrike_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:RestartLineReticule
void AB_Placement_Preview_AirStrike_C::RestartLineReticule()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:RestartLineReticule");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:ExecuteUbergraph_B_Placement_Preview_AirStrike
void AB_Placement_Preview_AirStrike_C::ExecuteUbergraph_B_Placement_Preview_AirStrike(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C:ExecuteUbergraph_B_Placement_Preview_AirStrike");

	FAB_Placement_Preview_AirStrike_C_ExecuteUbergraph_B_Placement_Preview_AirStrike_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

