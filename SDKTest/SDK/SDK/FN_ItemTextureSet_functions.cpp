#include "pch.h"

UScriptStruct* FItemTextureSet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Items/ItemTextureSet.ItemTextureSet");

	return Struct;
}

