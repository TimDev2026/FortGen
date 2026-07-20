#include "pch.h"

#include "FN_GE_Constructor_IFFCodingTag_classes.h"

UClass* UGE_Constructor_IFFCodingTag_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_Constructor_IFFCodingTag.GE_Constructor_IFFCodingTag_C");

	return Class;
}

