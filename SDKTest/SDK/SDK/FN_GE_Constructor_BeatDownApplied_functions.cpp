#include "pch.h"

#include "FN_GE_Constructor_BeatDownApplied_classes.h"

UClass* UGE_Constructor_BeatDownApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_BeatDownApplied.GE_Constructor_BeatDownApplied_C");

	return Class;
}

