#include "pch.h"

#include "FN_GE_Constructor_BeatDown_classes.h"

UClass* UGE_Constructor_BeatDown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_BeatDown.GE_Constructor_BeatDown_C");

	return Class;
}

