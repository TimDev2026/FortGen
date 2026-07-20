#include "pch.h"

#include "FN_GE_Outlander_DiamondsLlama_classes.h"

UClass* UGE_Outlander_DiamondsLlama_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GE_Outlander_DiamondsLlama.GE_Outlander_DiamondsLlama_C");

	return Class;
}

