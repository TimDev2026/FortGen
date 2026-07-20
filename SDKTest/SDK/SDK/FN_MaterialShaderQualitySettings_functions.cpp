#include "pch.h"

#include "FN_MaterialShaderQualitySettings_classes.h"

UClass* UShaderPlatformQualitySettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings");

	return Class;
}

UClass* UMaterialShaderQualitySettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings");

	return Class;
}

UScriptStruct* FMaterialQualityOverrides::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MaterialShaderQualitySettings.MaterialQualityOverrides");

	return Struct;
}

UScriptStruct* FShaderQualityOverridesListItem::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MaterialShaderQualitySettings.ShaderQualityOverridesListItem");

	return Struct;
}

