#include "pch.h"

#include "FN_GE_Ninja_DimMak_classes.h"

UClass* UGE_Ninja_DimMak_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheShadow/GE_Ninja_DimMak.GE_Ninja_DimMak_C");

	return Class;
}

