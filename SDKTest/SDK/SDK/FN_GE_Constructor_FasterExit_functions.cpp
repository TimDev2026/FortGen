#include "pch.h"

#include "FN_GE_Constructor_FasterExit_classes.h"

UClass* UGE_Constructor_FasterExit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_FasterExit.GE_Constructor_FasterExit_C");

	return Class;
}

