#include "pch.h"

#include "FN_HBOnboarding_BuildHeroBuilding_classes.h"

UClass* AHBOnboarding_BuildHeroBuilding_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C");

	return Class;
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:UserConstructionScript
void AHBOnboarding_BuildHeroBuilding_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:OnNotificationStart
void AHBOnboarding_BuildHeroBuilding_C::OnNotificationStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:OnNotificationStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_OnboardingBuildingsStage2
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_OnboardingBuildingsStage2");

	FAHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_OnboardingBuildingsStage2_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_BuildingSelected
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_BuildingSelected(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_BuildingSelected");

	FAHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_BuildingSelected_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_HomebaseBuiltBuilding
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_HomebaseBuiltBuilding(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:HandleClientEvent_HomebaseBuiltBuilding");

	FAHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_HomebaseBuiltBuilding_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:finished
void AHBOnboarding_BuildHeroBuilding_C::finished()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:finished");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:ExecuteUbergraph_HBOnboarding_BuildHeroBuilding
void AHBOnboarding_BuildHeroBuilding_C::ExecuteUbergraph_HBOnboarding_BuildHeroBuilding(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C:ExecuteUbergraph_HBOnboarding_BuildHeroBuilding");

	FAHBOnboarding_BuildHeroBuilding_C_ExecuteUbergraph_HBOnboarding_BuildHeroBuilding_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

