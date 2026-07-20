#include "pch.h"

#include "FN_TracerGeneric_classes.h"

UClass* ATracerGeneric_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C");

	return Class;
}

// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:UserConstructionScript
void ATracerGeneric_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:OnInitTracerDistance
void ATracerGeneric_C::OnInitTracerDistance(float Distance)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:OnInitTracerDistance");

	FATracerGeneric_C_OnInitTracerDistance_Params Parms;

	Parms.Distance = Distance;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:ExecuteUbergraph_TracerGeneric
void ATracerGeneric_C::ExecuteUbergraph_TracerGeneric(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C:ExecuteUbergraph_TracerGeneric");

	FATracerGeneric_C_ExecuteUbergraph_TracerGeneric_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

