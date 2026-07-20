#include "pch.h"

#include "FN_GE_Constructor_IsConstructor_classes.h"

UClass* UGE_Constructor_IsConstructor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Default/GE_Constructor_IsConstructor.GE_Constructor_IsConstructor_C");

	return Class;
}

