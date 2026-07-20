#include "pch.h"

#include "FN_NewsEntry_classes.h"

UClass* UNewsEntry_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/NewsScreen/NewsEntry.NewsEntry_C");

	return Class;
}

// Function /Game/UI/NewsScreen/NewsEntry.NewsEntry_C:Get_Header_Text
FText UNewsEntry_C::Get_Header_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/NewsScreen/NewsEntry.NewsEntry_C:Get_Header_Text");

	FUNewsEntry_C_Get_Header_Text_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/NewsScreen/NewsEntry.NewsEntry_C:Get_Content_Text
FText UNewsEntry_C::Get_Content_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/NewsScreen/NewsEntry.NewsEntry_C:Get_Content_Text");

	FUNewsEntry_C_Get_Content_Text_Params Parms;


	ProcessEvent(FN, &Parms);
}

