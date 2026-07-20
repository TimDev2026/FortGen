#include "pch.h"

#include "FN_TutorialOverlay_classes.h"

UClass* UTutorialOverlay_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Onboarding/TutorialOverlay.TutorialOverlay_C");

	return Class;
}

// Function /Game/UI/Onboarding/TutorialOverlay.TutorialOverlay_C:Construct
void UTutorialOverlay_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialOverlay.TutorialOverlay_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Onboarding/TutorialOverlay.TutorialOverlay_C:ExecuteUbergraph_TutorialOverlay
void UTutorialOverlay_C::ExecuteUbergraph_TutorialOverlay(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialOverlay.TutorialOverlay_C:ExecuteUbergraph_TutorialOverlay");

	FUTutorialOverlay_C_ExecuteUbergraph_TutorialOverlay_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

