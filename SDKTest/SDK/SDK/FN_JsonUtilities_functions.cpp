#include "pch.h"

UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/JsonUtilities.JsonObjectWrapper");

	return Struct;
}

