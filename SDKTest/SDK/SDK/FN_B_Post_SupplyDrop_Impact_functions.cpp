#include "pch.h"

#include "FN_B_Post_SupplyDrop_Impact_classes.h"

UClass* AB_Post_SupplyDrop_Impact_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C");

	return Class;
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:UserConstructionScript
void AB_Post_SupplyDrop_Impact_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:Timeline_0__FinishedFunc
void AB_Post_SupplyDrop_Impact_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:Timeline_0__UpdateFunc
void AB_Post_SupplyDrop_Impact_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:SpawnPostFX
void AB_Post_SupplyDrop_Impact_C::SpawnPostFX(float PostFX_BoxScaleDyn, FVector PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:SpawnPostFX");

	FAB_Post_SupplyDrop_Impact_C_SpawnPostFX_Params Parms;

	Parms.PostFX_BoxScaleDyn = PostFX_BoxScaleDyn;
	Parms.PostFX_CamShakeLoc = PostFX_CamShakeLoc;
	Parms.PostFX_UseCamShake = PostFX_UseCamShake;
	Parms.PostFX_DeactivateDelay = PostFX_DeactivateDelay;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:ExecuteUbergraph_B_Post_SupplyDrop_Impact
void AB_Post_SupplyDrop_Impact_C::ExecuteUbergraph_B_Post_SupplyDrop_Impact(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Effects/Fort_Effects/BluePrints/PostProcessFX/B_Post_SupplyDrop_Impact.B_Post_SupplyDrop_Impact_C:ExecuteUbergraph_B_Post_SupplyDrop_Impact");

	FAB_Post_SupplyDrop_Impact_C_ExecuteUbergraph_B_Post_SupplyDrop_Impact_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

