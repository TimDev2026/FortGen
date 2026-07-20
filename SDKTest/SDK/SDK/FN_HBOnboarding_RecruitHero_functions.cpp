#include "pch.h"

#include "FN_HBOnboarding_RecruitHero_classes.h"

UClass* AHBOnboarding_RecruitHero_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C");

	return Class;
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:UserConstructionScript
void AHBOnboarding_RecruitHero_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:OnNotificationStart
void AHBOnboarding_RecruitHero_C::OnNotificationStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:OnNotificationStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_RecruitHeroExpanded
void AHBOnboarding_RecruitHero_C::HandleClientEvent_RecruitHeroExpanded(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_RecruitHeroExpanded");

	FAHBOnboarding_RecruitHero_C_HandleClientEvent_RecruitHeroExpanded_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_HomebaseRecruitedHero
void AHBOnboarding_RecruitHero_C::HandleClientEvent_HomebaseRecruitedHero(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_HomebaseRecruitedHero");

	FAHBOnboarding_RecruitHero_C_HandleClientEvent_HomebaseRecruitedHero_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_QuestJournalSelected
void AHBOnboarding_RecruitHero_C::HandleClientEvent_QuestJournalSelected(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_QuestJournalSelected");

	FAHBOnboarding_RecruitHero_C_HandleClientEvent_QuestJournalSelected_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_HeroesTabSelected
void AHBOnboarding_RecruitHero_C::HandleClientEvent_HeroesTabSelected(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent ClientEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:HandleClientEvent_HeroesTabSelected");

	FAHBOnboarding_RecruitHero_C_HandleClientEvent_HeroesTabSelected_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:ExecuteUbergraph_HBOnboarding_RecruitHero
void AHBOnboarding_RecruitHero_C::ExecuteUbergraph_HBOnboarding_RecruitHero(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/HomebaseOnboarding/Notifications/HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C:ExecuteUbergraph_HBOnboarding_RecruitHero");

	FAHBOnboarding_RecruitHero_C_ExecuteUbergraph_HBOnboarding_RecruitHero_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

