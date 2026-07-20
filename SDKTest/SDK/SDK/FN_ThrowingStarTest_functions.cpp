#include "pch.h"

#include "FN_ThrowingStarTest_classes.h"

UClass* UThrowingStarTest_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/GameplayCueNotifies/ThrowingStarTest.ThrowingStarTest_C");

	return Class;
}

// Function /Game/GameplayCueNotifies/ThrowingStarTest.ThrowingStarTest_C:OnExecute
bool UThrowingStarTest_C::OnExecute(class AActor* MyTarget, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/GameplayCueNotifies/ThrowingStarTest.ThrowingStarTest_C:OnExecute");

	FUThrowingStarTest_C_OnExecute_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

