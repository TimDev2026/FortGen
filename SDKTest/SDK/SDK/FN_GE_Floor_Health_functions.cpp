#include "pch.h"

#include "FN_GE_Floor_Health_classes.h"

UClass* UGE_Floor_Health_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/Floor_Health/GE_Floor_Health.GE_Floor_Health_C");

	return Class;
}

