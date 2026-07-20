#include "pch.h"

#include "FN_B_Base_Deco_Preview_classes.h"

UClass* AB_Base_Deco_Preview_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:SetupMIDforMeshOverride
void AB_Base_Deco_Preview_C::SetupMIDforMeshOverride()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:SetupMIDforMeshOverride");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:UserConstructionScript
void AB_Base_Deco_Preview_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:OnUpdateVisuals
void AB_Base_Deco_Preview_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:OnUpdateVisuals");

	FAB_Base_Deco_Preview_C_OnUpdateVisuals_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:OnInitializeDecoPreview
void AB_Base_Deco_Preview_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:OnInitializeDecoPreview");

	FAB_Base_Deco_Preview_C_OnInitializeDecoPreview_Params Parms;

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:ExecuteUbergraph_B_Base_Deco_Preview
void AB_Base_Deco_Preview_C::ExecuteUbergraph_B_Base_Deco_Preview(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Base_Deco_Preview.B_Base_Deco_Preview_C:ExecuteUbergraph_B_Base_Deco_Preview");

	FAB_Base_Deco_Preview_C_ExecuteUbergraph_B_Base_Deco_Preview_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

