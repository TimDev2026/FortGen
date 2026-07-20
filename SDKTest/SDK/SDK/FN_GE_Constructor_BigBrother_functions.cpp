#include "pch.h"

#include "FN_GE_Constructor_BigBrother_classes.h"

UClass* UGE_Constructor_BigBrother_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_BigBrother.GE_Constructor_BigBrother_C");

	return Class;
}

