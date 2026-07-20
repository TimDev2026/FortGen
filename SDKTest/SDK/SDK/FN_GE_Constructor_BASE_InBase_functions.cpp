#include "pch.h"

#include "FN_GE_Constructor_BASE_InBase_classes.h"

UClass* UGE_Constructor_BASE_InBase_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GE_Constructor_BASE_InBase.GE_Constructor_BASE_InBase_C");

	return Class;
}

