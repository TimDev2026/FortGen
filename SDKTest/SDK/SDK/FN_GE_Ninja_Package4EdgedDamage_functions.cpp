#include "pch.h"

#include "FN_GE_Ninja_Package4EdgedDamage_classes.h"

UClass* UGE_Ninja_Package4EdgedDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GE_Ninja_Package4EdgedDamage.GE_Ninja_Package4EdgedDamage_C");

	return Class;
}

