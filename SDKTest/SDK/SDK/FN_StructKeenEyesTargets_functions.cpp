#include "pch.h"

UScriptStruct* FStructKeenEyesTargets::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/StructKeenEyesTargets.StructKeenEyesTargets");

	return Struct;
}

