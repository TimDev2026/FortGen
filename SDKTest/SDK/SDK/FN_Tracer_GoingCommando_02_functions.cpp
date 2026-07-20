#include "pch.h"

#include "FN_Tracer_GoingCommando_02_classes.h"

UClass* ATracer_GoingCommando_02_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/CharClasses/Soldier/Traits/AdvancedTactics/Abilities/GoingCommando/Tracer_GoingCommando_02.Tracer_GoingCommando_02_C");

	return Class;
}

