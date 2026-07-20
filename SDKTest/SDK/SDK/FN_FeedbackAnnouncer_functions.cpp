#include "pch.h"

#include "FN_FeedbackAnnouncer_classes.h"

UClass* AFeedbackAnnouncer_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Feedback/FeedbackAnnouncer.FeedbackAnnouncer_C");

	return Class;
}

