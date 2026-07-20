#include "pch.h"

#include "FN_DmgTypeBP_Environmental_classes.h"

UClass* UDmgTypeBP_Environmental_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");

	return Class;
}

