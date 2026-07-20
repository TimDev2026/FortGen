#include "pch.h"

#include "FN_GE_Ninja_ThreeMantisStyle_classes.h"

UClass* UGE_Ninja_ThreeMantisStyle_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheSmoke/GE_Ninja_ThreeMantisStyle.GE_Ninja_ThreeMantisStyle_C");

	return Class;
}

