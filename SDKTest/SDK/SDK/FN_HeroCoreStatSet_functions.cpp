#include "pch.h"

UScriptStruct* FHeroCoreStatSet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Heroes/HeroCoreStatSet.HeroCoreStatSet");

	return Struct;
}

