#include "pch.h"

#include "FN_SetBonus_Swagger_Low_classes.h"

UClass* USetBonus_Swagger_Low_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_Swagger_Low.SetBonus_Swagger_Low_C");

	return Class;
}

