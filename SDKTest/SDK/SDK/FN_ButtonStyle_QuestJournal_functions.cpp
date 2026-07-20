#include "pch.h"

#include "FN_ButtonStyle_QuestJournal_classes.h"

UClass* UButtonStyle_QuestJournal_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-QuestJournal.ButtonStyle-QuestJournal_C");

	return Class;
}

