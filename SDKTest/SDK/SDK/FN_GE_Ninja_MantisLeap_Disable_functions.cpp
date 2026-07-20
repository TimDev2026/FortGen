#include "pch.h"

#include "FN_GE_Ninja_MantisLeap_Disable_classes.h"

UClass* UGE_Ninja_MantisLeap_Disable_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Default/GE_Ninja_MantisLeap_Disable.GE_Ninja_MantisLeap_Disable_C");

	return Class;
}

