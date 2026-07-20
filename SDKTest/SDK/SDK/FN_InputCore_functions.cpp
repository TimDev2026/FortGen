#include "pch.h"

#include "FN_InputCore_classes.h"

UClass* UInputCoreTypes::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/InputCore.InputCoreTypes");

	return Class;
}

UScriptStruct* FKey::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/InputCore.Key");

	return Struct;
}

