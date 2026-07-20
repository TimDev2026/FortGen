#include "pch.h"

#include "FN_ButtonStyle_RatingWidget_Team_classes.h"

UClass* UButtonStyle_RatingWidget_Team_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/Rating/ButtonStyle-RatingWidget-Team.ButtonStyle-RatingWidget-Team_C");

	return Class;
}

