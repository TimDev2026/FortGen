#include "pch.h"

#include "FN_GE_Constructor_BASEDefault_classes.h"

UClass* UGE_Constructor_BASEDefault_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GE_Constructor_BASEDefault.GE_Constructor_BASEDefault_C");

	return Class;
}

