#include "pch.h"

#include "FN_MovieSceneTracks_classes.h"

UClass* UMovieScene3DConstraintSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DConstraintSection");

	return Class;
}

UClass* UMovieScene3DAttachSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DAttachSection");

	return Class;
}

UClass* UMovieScene3DPathSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DPathSection");

	return Class;
}

UClass* UMovieScene3DConstraintTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DConstraintTrack");

	return Class;
}

UClass* UMovieScene3DAttachTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DAttachTrack");

	return Class;
}

UClass* UMovieScene3DPathTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DPathTrack");

	return Class;
}

UClass* UMovieScene3DTransformSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformSection");

	return Class;
}

UClass* UMovieSceneAudioSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAudioSection");

	return Class;
}

UClass* UMovieSceneAudioTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneAudioTrack");

	return Class;
}

UClass* UMovieSceneBoolSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBoolSection");

	return Class;
}

UClass* UMovieSceneVisibilitySection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVisibilitySection");

	return Class;
}

UClass* UMovieSceneByteSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneByteSection");

	return Class;
}

UClass* UMovieSceneColorSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneColorSection");

	return Class;
}

UClass* UMovieSceneEventSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventSection");

	return Class;
}

UClass* UMovieSceneEventTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneEventTrack");

	return Class;
}

UClass* UMovieSceneFloatSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatSection");

	return Class;
}

UClass* UMovieSceneFadeSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFadeSection");

	return Class;
}

UClass* UMovieSceneSlomoSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSlomoSection");

	return Class;
}

UClass* UMovieSceneParameterSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParameterSection");

	return Class;
}

UClass* UMovieSceneMaterialTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneMaterialTrack");

	return Class;
}

UClass* UMovieSceneComponentMaterialTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneComponentMaterialTrack");

	return Class;
}

UClass* UMovieSceneParticleParameterTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleParameterTrack");

	return Class;
}

UClass* UMovieSceneParticleSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleSection");

	return Class;
}

UClass* UMovieSceneParticleTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneParticleTrack");

	return Class;
}

UClass* UMovieScenePropertyTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScenePropertyTrack");

	return Class;
}

UClass* UMovieScene3DTransformTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieScene3DTransformTrack");

	return Class;
}

UClass* UMovieSceneBoolTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneBoolTrack");

	return Class;
}

UClass* UMovieSceneVisibilityTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVisibilityTrack");

	return Class;
}

UClass* UMovieSceneByteTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneByteTrack");

	return Class;
}

UClass* UMovieSceneColorTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneColorTrack");

	return Class;
}

UClass* UMovieSceneFloatTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFloatTrack");

	return Class;
}

UClass* UMovieSceneFadeTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneFadeTrack");

	return Class;
}

UClass* UMovieSceneSlomoTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSlomoTrack");

	return Class;
}

UClass* UMovieSceneVectorTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVectorTrack");

	return Class;
}

UClass* UMovieSceneShotSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneShotSection");

	return Class;
}

UClass* UMovieSceneSubTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSubTrack");

	return Class;
}

UClass* UMovieSceneShotTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneShotTrack");

	return Class;
}

UClass* UMovieSceneSkeletalAnimationSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection");

	return Class;
}

UClass* UMovieSceneSkeletalAnimationTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack");

	return Class;
}

UClass* UMovieSceneSpawnTrack::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSpawnTrack");

	return Class;
}

UClass* UMovieSceneSubSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneSubSection");

	return Class;
}

UClass* UMovieSceneVectorSection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MovieSceneTracks.MovieSceneVectorSection");

	return Class;
}

UScriptStruct* FMovieSceneEventSectionKey::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneTracks.MovieSceneEventSectionKey");

	return Struct;
}

UScriptStruct* FColorParameterNameAndCurves::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneTracks.ColorParameterNameAndCurves");

	return Struct;
}

UScriptStruct* FVectorParameterNameAndCurves::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneTracks.VectorParameterNameAndCurves");

	return Struct;
}

UScriptStruct* FScalarParameterNameAndCurve::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MovieSceneTracks.ScalarParameterNameAndCurve");

	return Struct;
}

