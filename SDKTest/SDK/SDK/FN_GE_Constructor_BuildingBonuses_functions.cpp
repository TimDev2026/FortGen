#include "pch.h"

#include "FN_GE_Constructor_BuildingBonuses_classes.h"

UClass* UGE_Constructor_BuildingBonuses_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Default/GE_Constructor_BuildingBonuses.GE_Constructor_BuildingBonuses_C");

	return Class;
}

