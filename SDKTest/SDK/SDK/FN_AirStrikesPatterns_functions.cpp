#include "pch.h"

UScriptStruct* FAirStrikesPatterns::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/SupportStructs/AirStrikesPatterns.AirStrikesPatterns");

	return Struct;
}

