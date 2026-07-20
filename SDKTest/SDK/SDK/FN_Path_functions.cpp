#include "pch.h"

UScriptStruct* FPath::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Environments/Homebase/Structs/Path.Path");

	return Struct;
}

