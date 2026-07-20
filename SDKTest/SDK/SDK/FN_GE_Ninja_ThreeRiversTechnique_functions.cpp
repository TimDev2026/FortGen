#include "pch.h"

#include "FN_GE_Ninja_ThreeRiversTechnique_classes.h"

UClass* UGE_Ninja_ThreeRiversTechnique_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheShadow/GE_Ninja_ThreeRiversTechnique.GE_Ninja_ThreeRiversTechnique_C");

	return Class;
}

