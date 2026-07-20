#include "pch.h"

#include "FN_S_HB_OnboardingCloudCover_classes.h"

UClass* AS_HB_OnboardingCloudCover_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C");

	return Class;
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:UserConstructionScript
void AS_HB_OnboardingCloudCover_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase_01__FinishedFunc
void AS_HB_OnboardingCloudCover_C::Control_Clouds_Phase_01__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase_01__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase_01__UpdateFunc
void AS_HB_OnboardingCloudCover_C::Control_Clouds_Phase_01__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase_01__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase02__FinishedFunc
void AS_HB_OnboardingCloudCover_C::Control_Clouds_Phase02__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase02__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase02__UpdateFunc
void AS_HB_OnboardingCloudCover_C::Control_Clouds_Phase02__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Control_Clouds_Phase02__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Timeline_0__FinishedFunc
void AS_HB_OnboardingCloudCover_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Timeline_0__UpdateFunc
void AS_HB_OnboardingCloudCover_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:ReceiveBeginPlay
void AS_HB_OnboardingCloudCover_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingBuildingsStage1
void AS_HB_OnboardingCloudCover_C::HandleClientEvent_OnboardingBuildingsStage1(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingBuildingsStage1");

	FAS_HB_OnboardingCloudCover_C_HandleClientEvent_OnboardingBuildingsStage1_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingRevealHeroBuildings
void AS_HB_OnboardingCloudCover_C::HandleClientEvent_OnboardingRevealHeroBuildings(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingRevealHeroBuildings");

	FAS_HB_OnboardingCloudCover_C_HandleClientEvent_OnboardingRevealHeroBuildings_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingBuildingsStage2
void AS_HB_OnboardingCloudCover_C::HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingBuildingsStage2");

	FAS_HB_OnboardingCloudCover_C_HandleClientEvent_OnboardingBuildingsStage2_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingRevealAllBuildings
void AS_HB_OnboardingCloudCover_C::HandleClientEvent_OnboardingRevealAllBuildings(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:HandleClientEvent_OnboardingRevealAllBuildings");

	FAS_HB_OnboardingCloudCover_C_HandleClientEvent_OnboardingRevealAllBuildings_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_02_K2Node_ComponentBoundEvent_45_ParticleSpawnSignature__DelegateSignature
void AS_HB_OnboardingCloudCover_C::BndEvt__Lightning_02_K2Node_ComponentBoundEvent_45_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_02_K2Node_ComponentBoundEvent_45_ParticleSpawnSignature__DelegateSignature");

	FAS_HB_OnboardingCloudCover_C_BndEvt__Lightning_02_K2Node_ComponentBoundEvent_45_ParticleSpawnSignature__DelegateSignature_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_03_K2Node_ComponentBoundEvent_48_ParticleSpawnSignature__DelegateSignature
void AS_HB_OnboardingCloudCover_C::BndEvt__Lightning_03_K2Node_ComponentBoundEvent_48_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_03_K2Node_ComponentBoundEvent_48_ParticleSpawnSignature__DelegateSignature");

	FAS_HB_OnboardingCloudCover_C_BndEvt__Lightning_03_K2Node_ComponentBoundEvent_48_ParticleSpawnSignature__DelegateSignature_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_01_K2Node_ComponentBoundEvent_52_ParticleSpawnSignature__DelegateSignature
void AS_HB_OnboardingCloudCover_C::BndEvt__Lightning_01_K2Node_ComponentBoundEvent_52_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_01_K2Node_ComponentBoundEvent_52_ParticleSpawnSignature__DelegateSignature");

	FAS_HB_OnboardingCloudCover_C_BndEvt__Lightning_01_K2Node_ComponentBoundEvent_52_ParticleSpawnSignature__DelegateSignature_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_05_K2Node_ComponentBoundEvent_537_ParticleSpawnSignature__DelegateSignature
void AS_HB_OnboardingCloudCover_C::BndEvt__Lightning_05_K2Node_ComponentBoundEvent_537_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:BndEvt__Lightning_05_K2Node_ComponentBoundEvent_537_ParticleSpawnSignature__DelegateSignature");

	FAS_HB_OnboardingCloudCover_C_BndEvt__Lightning_05_K2Node_ComponentBoundEvent_537_ParticleSpawnSignature__DelegateSignature_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:ExecuteUbergraph_S_HB_OnboardingCloudCover
void AS_HB_OnboardingCloudCover_C::ExecuteUbergraph_S_HB_OnboardingCloudCover(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Environments/Homebase/Blueprints/Onboarding/S_HB_OnboardingCloudCover.S_HB_OnboardingCloudCover_C:ExecuteUbergraph_S_HB_OnboardingCloudCover");

	FAS_HB_OnboardingCloudCover_C_ExecuteUbergraph_S_HB_OnboardingCloudCover_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

