#include "pch.h"

#include "FN_GE_Constructor_FullyContainedApplied_classes.h"

UClass* UGE_Constructor_FullyContainedApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_FullyContainedApplied.GE_Constructor_FullyContainedApplied_C");

	return Class;
}

