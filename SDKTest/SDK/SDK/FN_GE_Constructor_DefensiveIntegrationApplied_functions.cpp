#include "pch.h"

#include "FN_GE_Constructor_DefensiveIntegrationApplied_classes.h"

UClass* UGE_Constructor_DefensiveIntegrationApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_DefensiveIntegrationApplied.GE_Constructor_DefensiveIntegrationApplied_C");

	return Class;
}

