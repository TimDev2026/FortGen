#include "pch.h"

#include "FN_B_Constructor_Shield_classes.h"

UClass* AB_Constructor_Shield_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Gadgets/Assets/BullRush/B_Constructor_Shield.B_Constructor_Shield_C");

	return Class;
}

// Function /Game/Gadgets/Assets/BullRush/B_Constructor_Shield.B_Constructor_Shield_C:UserConstructionScript
void AB_Constructor_Shield_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/BullRush/B_Constructor_Shield.B_Constructor_Shield_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

