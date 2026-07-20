#include "pch.h"

#include "FN_GE_Constructor_DefensiveIntegration_classes.h"

UClass* UGE_Constructor_DefensiveIntegration_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_DefensiveIntegration.GE_Constructor_DefensiveIntegration_C");

	return Class;
}

