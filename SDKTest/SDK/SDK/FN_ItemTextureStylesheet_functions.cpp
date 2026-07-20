#include "pch.h"

UScriptStruct* FItemTextureStylesheet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Items/ItemTextureStylesheet.ItemTextureStylesheet");

	return Struct;
}

