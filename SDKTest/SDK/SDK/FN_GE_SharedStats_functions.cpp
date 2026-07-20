#include "pch.h"

#include "FN_GE_SharedStats_classes.h"

UClass* UGE_SharedStats_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Heroes/GE_SharedStats.GE_SharedStats_C");

	return Class;
}

