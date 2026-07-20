#include "pch.h"

#include "FN_MovieWidget_classes.h"

UClass* UMovieWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Building/MovieWidget.MovieWidget_C");

	return Class;
}

// Function /Game/UI/Building/MovieWidget.MovieWidget_C:StopPlaying
void UMovieWidget_C::StopPlaying()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/MovieWidget.MovieWidget_C:StopPlaying");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Building/MovieWidget.MovieWidget_C:Init
void UMovieWidget_C::Init(class UMediaTexture* inMediaTexture)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/MovieWidget.MovieWidget_C:Init");

	FUMovieWidget_C_Init_Params Parms;

	Parms.inMediaTexture = inMediaTexture;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Building/MovieWidget.MovieWidget_C:Destruct
void UMovieWidget_C::Destruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/MovieWidget.MovieWidget_C:Destruct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Building/MovieWidget.MovieWidget_C:ExecuteUbergraph_MovieWidget
void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Building/MovieWidget.MovieWidget_C:ExecuteUbergraph_MovieWidget");

	FUMovieWidget_C_ExecuteUbergraph_MovieWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

