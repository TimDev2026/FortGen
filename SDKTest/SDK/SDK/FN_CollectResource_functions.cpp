#include "pch.h"

#include "FN_CollectResource_classes.h"

UClass* UCollectResource_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/CollectResource.CollectResource_C");

	return Class;
}

