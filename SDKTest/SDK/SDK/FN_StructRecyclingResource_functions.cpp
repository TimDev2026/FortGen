#include "pch.h"

UScriptStruct* FStructRecyclingResource::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Abilities/Player/Constructor/Gadgets/BASE/StructRecyclingResource.StructRecyclingResource");

	return Struct;
}

