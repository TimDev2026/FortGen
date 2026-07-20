#include "pch.h"

#include "FN_RoboBear_AnimBP_classes.h"

UClass* URoboBear_AnimBP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C");

	return Class;
}

// Function /Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12
void URoboBear_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0
void URoboBear_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:BlueprintUpdateAnimation
void URoboBear_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:BlueprintUpdateAnimation");

	FURoboBear_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:ExecuteUbergraph_RoboBear_AnimBP
void URoboBear_AnimBP_C::ExecuteUbergraph_RoboBear_AnimBP(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Gadgets/Assets/RoboBear/RoboBear_AnimBP.RoboBear_AnimBP_C:ExecuteUbergraph_RoboBear_AnimBP");

	FURoboBear_AnimBP_C_ExecuteUbergraph_RoboBear_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

