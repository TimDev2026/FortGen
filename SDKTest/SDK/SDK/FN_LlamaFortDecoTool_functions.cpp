#include "pch.h"

#include "FN_LlamaFortDecoTool_classes.h"

UClass* ALlamaFortDecoTool_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Blueprints/LlamaFortDecoTool.LlamaFortDecoTool_C");

	return Class;
}

