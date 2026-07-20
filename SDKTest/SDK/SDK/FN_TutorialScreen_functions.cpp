#include "pch.h"

#include "FN_TutorialScreen_classes.h"

UClass* UTutorialScreen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C");

	return Class;
}

// Function /Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnMouseButtonDown_0
FEventReply UTutorialScreen_C::OnMouseButtonDown_0(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnMouseButtonDown_0");

	FUTutorialScreen_C_OnMouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:Construct
void UTutorialScreen_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnShowTutorialScreen
void UTutorialScreen_C::OnShowTutorialScreen(class UTexture2D* Image)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnShowTutorialScreen");

	FUTutorialScreen_C_OnShowTutorialScreen_Params Parms;

	Parms.Image = Image;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnHideTutorialScreen
void UTutorialScreen_C::OnHideTutorialScreen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:OnHideTutorialScreen");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:ExecuteUbergraph_TutorialScreen
void UTutorialScreen_C::ExecuteUbergraph_TutorialScreen(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Onboarding/TutorialScreen.TutorialScreen_C:ExecuteUbergraph_TutorialScreen");

	FUTutorialScreen_C_ExecuteUbergraph_TutorialScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

