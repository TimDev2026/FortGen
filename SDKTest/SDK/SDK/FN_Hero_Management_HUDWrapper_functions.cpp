#include "pch.h"

#include "FN_Hero_Management_HUDWrapper_classes.h"

UClass* UHero_Management_HUDWrapper_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/Hero_Management_HUDWrapper.Hero_Management_HUDWrapper_C");

	return Class;
}

