#include "pch.h"

#include "FN_ThreatPostProcessManagerAndParticleBlueprint_classes.h"

UClass* AThreatPostProcessManagerAndParticleBlueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C");

	return Class;
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:CalculatePlayerPositionNearBox
void AThreatPostProcessManagerAndParticleBlueprint_C::CalculatePlayerPositionNearBox(FVector BoxMin, FVector BoxMax, float VolumePlayerCoveragePercentage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:CalculatePlayerPositionNearBox");

	FAThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox_Params Parms;

	Parms.BoxMin = BoxMin;
	Parms.BoxMax = BoxMax;
	Parms.VolumePlayerCoveragePercentage = VolumePlayerCoveragePercentage;

	ProcessEvent(FN, &Parms);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:UserConstructionScript
void AThreatPostProcessManagerAndParticleBlueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ReceiveTick
void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ReceiveTick");

	FAThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ReceiveBeginPlay
void AThreatPostProcessManagerAndParticleBlueprint_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:OnThreatCloudsChanged
void AThreatPostProcessManagerAndParticleBlueprint_C::OnThreatCloudsChanged(TArray<FThreatLocationInfo> ThreatLocationInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:OnThreatCloudsChanged");

	FAThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged_Params Parms;

	Parms.ThreatLocationInfo = ThreatLocationInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
void AThreatPostProcessManagerAndParticleBlueprint_C::ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint");

	FAThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:NewEventDispatcher0__DelegateSignature
void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher0__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:NewEventDispatcher0__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:NewEventDispatcher__DelegateSignature
void AThreatPostProcessManagerAndParticleBlueprint_C::NewEventDispatcher__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C:NewEventDispatcher__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

