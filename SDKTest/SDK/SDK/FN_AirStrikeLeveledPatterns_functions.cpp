#include "pch.h"

UScriptStruct* FAirStrikeLeveledPatterns::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/AirStrikeLeveledPatterns.AirStrikeLeveledPatterns");

	return Struct;
}

