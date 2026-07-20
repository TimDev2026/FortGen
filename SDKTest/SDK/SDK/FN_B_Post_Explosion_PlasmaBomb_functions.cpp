#include "pch.h"

#include "FN_B_Post_Explosion_PlasmaBomb_classes.h"

UClass* AB_Post_Explosion_PlasmaBomb_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:UserConstructionScript
void AB_Post_Explosion_PlasmaBomb_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:Timeline_0__FinishedFunc
void AB_Post_Explosion_PlasmaBomb_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:Timeline_0__UpdateFunc
void AB_Post_Explosion_PlasmaBomb_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:SpawnPostFX
void AB_Post_Explosion_PlasmaBomb_C::SpawnPostFX(float PostFX_BoxScaleDyn, FVector PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:SpawnPostFX");

	FAB_Post_Explosion_PlasmaBomb_C_SpawnPostFX_Params Parms;

	Parms.PostFX_BoxScaleDyn = PostFX_BoxScaleDyn;
	Parms.PostFX_CamShakeLoc = PostFX_CamShakeLoc;
	Parms.PostFX_UseCamShake = PostFX_UseCamShake;
	Parms.PostFX_DeactivateDelay = PostFX_DeactivateDelay;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:ExecuteUbergraph_B_Post_Explosion_PlasmaBomb
void AB_Post_Explosion_PlasmaBomb_C::ExecuteUbergraph_B_Post_Explosion_PlasmaBomb(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_Explosion_PlasmaBomb.B_Post_Explosion_PlasmaBomb_C:ExecuteUbergraph_B_Post_Explosion_PlasmaBomb");

	FAB_Post_Explosion_PlasmaBomb_C_ExecuteUbergraph_B_Post_Explosion_PlasmaBomb_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

