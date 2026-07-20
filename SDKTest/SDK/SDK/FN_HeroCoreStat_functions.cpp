#include "pch.h"

UScriptStruct* FHeroCoreStat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Heroes/HeroCoreStat.HeroCoreStat");

	return Struct;
}

