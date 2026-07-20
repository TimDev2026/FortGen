#include "pch.h"

#include "FN_GE_Constructor_ConstructorTraining3_classes.h"

UClass* UGE_Constructor_ConstructorTraining3_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Packages/GE_Constructor_ConstructorTraining3.GE_Constructor_ConstructorTraining3_C");

	return Class;
}

