#include "pch.h"

#include "FN_Tracer_GoingCommando_01_classes.h"

UClass* ATracer_GoingCommando_01_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/CharClasses/Soldier/Traits/AdvancedTactics/Abilities/GoingCommando/Tracer_GoingCommando_01.Tracer_GoingCommando_01_C");

	return Class;
}

