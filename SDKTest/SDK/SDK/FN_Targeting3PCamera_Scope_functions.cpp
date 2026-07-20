#include "pch.h"

#include "FN_Targeting3PCamera_Scope_classes.h"

UClass* UTargeting3PCamera_Scope_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C");

	return Class;
}

