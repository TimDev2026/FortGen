#include "pch.h"

#include "FN_GE_Constructor_OneHotMinute_classes.h"

UClass* UGE_Constructor_OneHotMinute_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Plasmatics/GE_Constructor_OneHotMinute.GE_Constructor_OneHotMinute_C");

	return Class;
}

