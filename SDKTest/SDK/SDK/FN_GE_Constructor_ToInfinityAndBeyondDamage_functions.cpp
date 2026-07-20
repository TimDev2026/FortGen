#include "pch.h"

#include "FN_GE_Constructor_ToInfinityAndBeyondDamage_classes.h"

UClass* UGE_Constructor_ToInfinityAndBeyondDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_ToInfinityAndBeyondDamage.GE_Constructor_ToInfinityAndBeyondDamage_C");

	return Class;
}

