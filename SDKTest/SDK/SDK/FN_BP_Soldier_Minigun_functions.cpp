#include "pch.h"

#include "FN_BP_Soldier_Minigun_classes.h"

UClass* UBP_Soldier_Minigun_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C");

	return Class;
}

// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7
void UBP_Soldier_Minigun_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:BlueprintUpdateAnimation
void UBP_Soldier_Minigun_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:BlueprintUpdateAnimation");

	FUBP_Soldier_Minigun_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:ExecuteUbergraph_BP_Soldier_Minigun
void UBP_Soldier_Minigun_C::ExecuteUbergraph_BP_Soldier_Minigun(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/MainPlayer/Combat/Gadgets/Medium/BP_Soldier_Minigun.BP_Soldier_Minigun_C:ExecuteUbergraph_BP_Soldier_Minigun");

	FUBP_Soldier_Minigun_C_ExecuteUbergraph_BP_Soldier_Minigun_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

