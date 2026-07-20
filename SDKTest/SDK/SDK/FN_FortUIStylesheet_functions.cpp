#include "pch.h"

UScriptStruct* FFortUIStylesheet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Global_Elements/FortUIStylesheet.FortUIStylesheet");

	return Struct;
}

