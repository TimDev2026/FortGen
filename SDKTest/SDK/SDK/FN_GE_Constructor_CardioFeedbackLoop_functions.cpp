#include "pch.h"

#include "FN_GE_Constructor_CardioFeedbackLoop_classes.h"

UClass* UGE_Constructor_CardioFeedbackLoop_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_CardioFeedbackLoop.GE_Constructor_CardioFeedbackLoop_C");

	return Class;
}

