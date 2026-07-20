#include "pch.h"

#include "FN_MoviePlayer_classes.h"

UClass* UMoviePlayerSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MoviePlayer.MoviePlayerSettings");

	return Class;
}

