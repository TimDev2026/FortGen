#include "pch.h"

#include "FN_GE_Constructor_CardioFeedbackLoopApplied_classes.h"

UClass* UGE_Constructor_CardioFeedbackLoopApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_CardioFeedbackLoopApplied.GE_Constructor_CardioFeedbackLoopApplied_C");

	return Class;
}

