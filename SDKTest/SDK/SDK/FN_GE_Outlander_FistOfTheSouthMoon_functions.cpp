#include "pch.h"

#include "FN_GE_Outlander_FistOfTheSouthMoon_classes.h"

UClass* UGE_Outlander_FistOfTheSouthMoon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GE_Outlander_FistOfTheSouthMoon.GE_Outlander_FistOfTheSouthMoon_C");

	return Class;
}

