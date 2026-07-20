#include "pch.h"

#include "FN_JournalProgressWidget_classes.h"

UClass* UJournalProgressWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalProgressWidget.JournalProgressWidget_C");

	return Class;
}

// Function /Game/UI/Journal/JournalProgressWidget.JournalProgressWidget_C:Update
void UJournalProgressWidget_C::Update(int32_t Required, int32_t Achieved)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalProgressWidget.JournalProgressWidget_C:Update");

	FUJournalProgressWidget_C_Update_Params Parms;

	Parms.Required = Required;
	Parms.Achieved = Achieved;

	ProcessEvent(FN, &Parms);
}

