#include "pch.h"

#include "FN_B_Assault_Auto_classes.h"

UClass* AB_Assault_Auto_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C");

	return Class;
}

// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C:UserConstructionScript
void AB_Assault_Auto_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

