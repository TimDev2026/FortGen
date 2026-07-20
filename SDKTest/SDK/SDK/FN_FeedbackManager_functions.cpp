#include "pch.h"

#include "FN_FeedbackManager_classes.h"

UClass* AFeedbackManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Feedback/FeedbackManager.FeedbackManager_C");

	return Class;
}

// Function /Game/Characters/Feedback/FeedbackManager.FeedbackManager_C:UserConstructionScript
void AFeedbackManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Feedback/FeedbackManager.FeedbackManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

