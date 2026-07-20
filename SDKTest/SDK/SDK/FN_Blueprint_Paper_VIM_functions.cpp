#include "pch.h"

#include "FN_Blueprint_Paper_VIM_classes.h"

UClass* UBlueprint_Paper_VIM_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");

	return Class;
}

// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C:ExecuteUbergraph_Blueprint_Paper_VIM
void UBlueprint_Paper_VIM_C::ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C:ExecuteUbergraph_Blueprint_Paper_VIM");

	FUBlueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

