#include "pch.h"

#include "FN_HBOnboarding_PlaySatelliteCine_classes.h"

UClass* AHBOnboarding_PlaySatelliteCine_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C");

	return Class;
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:UserConstructionScript
void AHBOnboarding_PlaySatelliteCine_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnNotificationStart
void AHBOnboarding_PlaySatelliteCine_C::OnNotificationStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnNotificationStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnCinematicStop
void AHBOnboarding_PlaySatelliteCine_C::OnCinematicStop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnCinematicStop");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:canskip
void AHBOnboarding_PlaySatelliteCine_C::canskip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:canskip");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnPlayerSkippedCutscene_Copy
void AHBOnboarding_PlaySatelliteCine_C::OnPlayerSkippedCutscene_Copy()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:OnPlayerSkippedCutscene_Copy");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:ExecuteUbergraph_HBOnboarding_PlaySatelliteCine
void AHBOnboarding_PlaySatelliteCine_C::ExecuteUbergraph_HBOnboarding_PlaySatelliteCine(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_PlaySatelliteCine.HBOnboarding_PlaySatelliteCine_C:ExecuteUbergraph_HBOnboarding_PlaySatelliteCine");

	FAHBOnboarding_PlaySatelliteCine_C_ExecuteUbergraph_HBOnboarding_PlaySatelliteCine_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

