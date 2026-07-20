#include "pch.h"

#include "FN_GE_Ninja_IsNinja_classes.h"

UClass* UGE_Ninja_IsNinja_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Default/GE_Ninja_IsNinja.GE_Ninja_IsNinja_C");

	return Class;
}

