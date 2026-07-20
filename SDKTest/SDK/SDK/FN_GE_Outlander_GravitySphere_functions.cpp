#include "pch.h"

#include "FN_GE_Outlander_GravitySphere_classes.h"

UClass* UGE_Outlander_GravitySphere_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GE_Outlander_GravitySphere.GE_Outlander_GravitySphere_C");

	return Class;
}

