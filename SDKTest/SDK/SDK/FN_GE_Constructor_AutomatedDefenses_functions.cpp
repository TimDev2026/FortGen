#include "pch.h"

#include "FN_GE_Constructor_AutomatedDefenses_classes.h"

UClass* UGE_Constructor_AutomatedDefenses_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_AutomatedDefenses.GE_Constructor_AutomatedDefenses_C");

	return Class;
}

