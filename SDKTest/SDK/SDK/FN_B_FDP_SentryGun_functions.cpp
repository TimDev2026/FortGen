#include "pch.h"

#include "FN_B_FDP_SentryGun_classes.h"

UClass* AB_FDP_SentryGun_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:SetupMIDForMeshComponent
void AB_FDP_SentryGun_C::SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:SetupMIDForMeshComponent");

	FAB_FDP_SentryGun_C_SetupMIDForMeshComponent_Params Parms;

	Parms.MeshComp = MeshComp;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:UserConstructionScript
void AB_FDP_SentryGun_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:OnInitializeDecoPreview
void AB_FDP_SentryGun_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:OnInitializeDecoPreview");

	FAB_FDP_SentryGun_C_OnInitializeDecoPreview_Params Parms;

	Parms.NewBuildingActor = NewBuildingActor;
	Parms.NewDecoItemDefinition = NewDecoItemDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:ExecuteUbergraph_B_FDP_SentryGun
void AB_FDP_SentryGun_C::ExecuteUbergraph_B_FDP_SentryGun(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C:ExecuteUbergraph_B_FDP_SentryGun");

	FAB_FDP_SentryGun_C_ExecuteUbergraph_B_FDP_SentryGun_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

