#include "pch.h"

#include "FN_ButtonStyle_StarRating_classes.h"

UClass* UButtonStyle_StarRating_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/Styles/ButtonStyle-StarRating.ButtonStyle-StarRating_C");

	return Class;
}

