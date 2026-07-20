#include "pch.h"

#include "FN_GE_Outlander_ImpossibilityMatrix_classes.h"

UClass* UGE_Outlander_ImpossibilityMatrix_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_ImpossibilityMatrix.GE_Outlander_ImpossibilityMatrix_C");

	return Class;
}

