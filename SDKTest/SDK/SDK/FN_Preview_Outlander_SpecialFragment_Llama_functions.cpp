#include "pch.h"

#include "FN_Preview_Outlander_SpecialFragment_Llama_classes.h"

UClass* APreview_Outlander_SpecialFragment_Llama_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:UserConstructionScript
void APreview_Outlander_SpecialFragment_Llama_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:Timeline_0__FinishedFunc
void APreview_Outlander_SpecialFragment_Llama_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:Timeline_0__UpdateFunc
void APreview_Outlander_SpecialFragment_Llama_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ReceiveTick
void APreview_Outlander_SpecialFragment_Llama_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ReceiveTick");

	FAPreview_Outlander_SpecialFragment_Llama_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ReceiveBeginPlay
void APreview_Outlander_SpecialFragment_Llama_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama
void APreview_Outlander_SpecialFragment_Llama_C::ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Llama/Preview_Outlander_SpecialFragment_Llama.Preview_Outlander_SpecialFragment_Llama_C:ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama");

	FAPreview_Outlander_SpecialFragment_Llama_C_ExecuteUbergraph_Preview_Outlander_SpecialFragment_Llama_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

