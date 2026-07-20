#include "pch.h"

#include "FN_LightPropagationVolumeRuntime_classes.h"

UClass* ULightPropagationVolumeBlendable::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");

	return Class;
}

UScriptStruct* FLightPropagationVolumeSettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/LightPropagationVolumeRuntime.LightPropagationVolumeSettings");

	return Struct;
}

