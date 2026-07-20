#include "pch.h"

#include "FN_GE_Constructor_NeuroFeedbackLoopApplied_classes.h"

UClass* UGE_Constructor_NeuroFeedbackLoopApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_NeuroFeedbackLoopApplied.GE_Constructor_NeuroFeedbackLoopApplied_C");

	return Class;
}

