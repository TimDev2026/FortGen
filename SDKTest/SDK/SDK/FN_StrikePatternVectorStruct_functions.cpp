#include "pch.h"

UScriptStruct* FStrikePatternVectorStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/SupportStructs/StrikePatternVectorStruct.StrikePatternVectorStruct");

	return Struct;
}

