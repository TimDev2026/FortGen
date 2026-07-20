#include "pch.h"

#include "FN_GE_Constructor_NiceAndSlowApplied_classes.h"

UClass* UGE_Constructor_NiceAndSlowApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_NiceAndSlowApplied.GE_Constructor_NiceAndSlowApplied_C");

	return Class;
}

