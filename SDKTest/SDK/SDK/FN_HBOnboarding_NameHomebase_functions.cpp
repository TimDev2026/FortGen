#include "pch.h"

#include "FN_HBOnboarding_NameHomebase_classes.h"

UClass* AHBOnboarding_NameHomebase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C");

	return Class;
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:UserConstructionScript
void AHBOnboarding_NameHomebase_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:OnNotificationStart
void AHBOnboarding_NameHomebase_C::OnNotificationStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:OnNotificationStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:ExecuteUbergraph_HBOnboarding_NameHomebase
void AHBOnboarding_NameHomebase_C::ExecuteUbergraph_HBOnboarding_NameHomebase(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C:ExecuteUbergraph_HBOnboarding_NameHomebase");

	FAHBOnboarding_NameHomebase_C_ExecuteUbergraph_HBOnboarding_NameHomebase_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

