#include "pch.h"

UScriptStruct* FFortUITheme::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Global_Elements/FortUITheme.FortUITheme");

	return Struct;
}

