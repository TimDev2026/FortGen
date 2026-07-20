#include "pch.h"

UScriptStruct* FTooltipStat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Global_Elements/TooltipStat.TooltipStat");

	return Struct;
}

