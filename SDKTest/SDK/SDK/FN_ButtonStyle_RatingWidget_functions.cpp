#include "pch.h"

#include "FN_ButtonStyle_RatingWidget_classes.h"

UClass* UButtonStyle_RatingWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/Rating/ButtonStyle-RatingWidget.ButtonStyle-RatingWidget_C");

	return Class;
}

