#include "pch.h"

#include "FN_SK_Bot_Turret_Skeleton_AnimBlueprint_classes.h"

UClass* USK_Bot_Turret_Skeleton_AnimBlueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C");

	return Class;
}

// Function /Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E70B69C8439346561F4C9BB9406597CE
void USK_Bot_Turret_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E70B69C8439346561F4C9BB9406597CE()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E70B69C8439346561F4C9BB9406597CE");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:BlueprintUpdateAnimation
void USK_Bot_Turret_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:BlueprintUpdateAnimation");

	FUSK_Bot_Turret_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint
void USK_Bot_Turret_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/Bot_Turret/Meshes/SK_Bot_Turret_Skeleton_AnimBlueprint.SK_Bot_Turret_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint");

	FUSK_Bot_Turret_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_Bot_Turret_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

