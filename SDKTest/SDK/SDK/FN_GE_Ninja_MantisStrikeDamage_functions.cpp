#include "pch.h"

#include "FN_GE_Ninja_MantisStrikeDamage_classes.h"

UClass* UGE_Ninja_MantisStrikeDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Default/GE_Ninja_MantisStrikeDamage.GE_Ninja_MantisStrikeDamage_C");

	return Class;
}

