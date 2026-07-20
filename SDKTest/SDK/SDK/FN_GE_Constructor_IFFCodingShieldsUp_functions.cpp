#include "pch.h"

#include "FN_GE_Constructor_IFFCodingShieldsUp_classes.h"

UClass* UGE_Constructor_IFFCodingShieldsUp_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Shielding/GE_Constructor_IFFCodingShieldsUp.GE_Constructor_IFFCodingShieldsUp_C");

	return Class;
}

