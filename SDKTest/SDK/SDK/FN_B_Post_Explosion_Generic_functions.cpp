#include "pch.h"

#include "FN_B_Post_Explosion_Generic_classes.h"

UClass* AB_Post_Explosion_Generic_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_Generic.B_Post_Explosion_Generic_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_Generic.B_Post_Explosion_Generic_C:UserConstructionScript
void AB_Post_Explosion_Generic_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_Generic.B_Post_Explosion_Generic_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

