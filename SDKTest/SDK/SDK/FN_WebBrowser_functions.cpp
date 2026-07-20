#include "pch.h"

UScriptStruct* FWebJSResponse::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/WebBrowser.WebJSResponse");

	return Struct;
}

UScriptStruct* FWebJSCallbackBase::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/WebBrowser.WebJSCallbackBase");

	return Struct;
}

UScriptStruct* FWebJSFunction::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/WebBrowser.WebJSFunction");

	return Struct;
}

