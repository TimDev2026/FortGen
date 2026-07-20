#include "pch.h"

#include "FN_TrapTool_classes.h"

UClass* ATrapTool_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/TrapTool.TrapTool_C");

	return Class;
}

