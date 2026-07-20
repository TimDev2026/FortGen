#include "pch.h"

UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerMapTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerArrayTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerBuiltinTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerObjectTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerBooleanTestStruct");

	return Struct;
}

UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Serialization.StructSerializerNumericTestStruct");

	return Struct;
}

