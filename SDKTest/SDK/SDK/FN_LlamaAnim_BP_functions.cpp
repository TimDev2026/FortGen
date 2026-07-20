#include "pch.h"

#include "FN_LlamaAnim_BP_classes.h"

UClass* ULlamaAnim_BP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C");

	return Class;
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:AnimNotify_LlamaDeathAnimationCompleted
void ULlamaAnim_BP_C::AnimNotify_LlamaDeathAnimationCompleted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:AnimNotify_LlamaDeathAnimationCompleted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:Play First Explosion Animation
void ULlamaAnim_BP_C::Play_First_Explosion_Animation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:Play First Explosion Animation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:TheHeadProjectileHasSpawned
void ULlamaAnim_BP_C::TheHeadProjectileHasSpawned()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:TheHeadProjectileHasSpawned");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:AnimNotify_LlamasHeadIsReadyToBurst
void ULlamaAnim_BP_C::AnimNotify_LlamasHeadIsReadyToBurst()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:AnimNotify_LlamasHeadIsReadyToBurst");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:BlueprintInitializeAnimation
void ULlamaAnim_BP_C::BlueprintInitializeAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:BlueprintInitializeAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:ExecuteUbergraph_LlamaAnim_BP
void ULlamaAnim_BP_C::ExecuteUbergraph_LlamaAnim_BP(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Animation/Game/Gadgets/Llama/LlamaAnim_BP.LlamaAnim_BP_C:ExecuteUbergraph_LlamaAnim_BP");

	FULlamaAnim_BP_C_ExecuteUbergraph_LlamaAnim_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

