#include "pch.h"

#include "FN_HeadMountedDisplay_classes.h"

UClass* UMotionControllerComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/HeadMountedDisplay.MotionControllerComponent");

	return Class;
}

// Function /Script/HeadMountedDisplay.MotionControllerComponent:IsTracked
bool UMotionControllerComponent::IsTracked() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/HeadMountedDisplay.MotionControllerComponent:IsTracked");

	FUMotionControllerComponent_IsTracked_Params Parms;


	ProcessEvent(FN, &Parms);
}

