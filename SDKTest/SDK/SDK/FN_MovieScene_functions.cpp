#include "pch.h"

#include "FN_MovieScene_classes.h"

UClass* UMovieScene::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieScene.MovieScene");

	return Class;
}

UClass* UMovieSceneSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSection");

	return Class;
}

UClass* UMovieSceneSequence::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneSequence");

	return Class;
}

UClass* UMovieSceneTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneTrack");

	return Class;
}

UClass* UMovieSceneNameableTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieScene.MovieSceneNameableTrack");

	return Class;
}

UScriptStruct* FMovieSceneBinding::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieSceneBinding");

	return Struct;
}

UScriptStruct* FMovieScenePossessable::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieScenePossessable");

	return Struct;
}

UScriptStruct* FMovieSceneSpawnable::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieSceneSpawnable");

	return Struct;
}

UScriptStruct* FMovieSceneTrackLabels::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieSceneTrackLabels");

	return Struct;
}

UScriptStruct* FMovieSceneEditorData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieSceneEditorData");

	return Struct;
}

UScriptStruct* FMovieSceneExpansionState::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieScene.MovieSceneExpansionState");

	return Struct;
}

