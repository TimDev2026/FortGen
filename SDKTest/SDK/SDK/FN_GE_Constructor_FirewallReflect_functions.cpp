#include "pch.h"

#include "FN_GE_Constructor_FirewallReflect_classes.h"

UClass* UGE_Constructor_FirewallReflect_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_Constructor_FirewallReflect.GE_Constructor_FirewallReflect_C");

	return Class;
}

