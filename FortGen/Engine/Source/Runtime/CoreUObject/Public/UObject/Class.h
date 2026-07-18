#pragma once
#include "framework.h"
#include "Object.h"

/* UField:
* Next: 0x1C
*/

/* UStruct
* SuperStruct: 0x20
* Children: 0x24
* PropertiesSize: 0x28
* MinAlignment: 0x2C
* 
*/

class UField : public UObject
{
public:
	DEFINE_MEMBER(Next, Address::UField_Next, UField*)
};

class UStruct : public UField
{
public:
	DEFINE_MEMBER(SuperStruct, Address::UStruct_SuperStruct, UStruct*)
	DEFINE_MEMBER(Children, Address::UStruct_Children, UField*)
	DEFINE_MEMBER(PropertiesSize, Address::UStruct_PropertiesSize, int32_t)
	DEFINE_MEMBER(MinAlignment, Address::UStruct_MinAlignment, int32_t)
};

class UClass : public UStruct
{
public:
	DEFINE_MEMBER(ClassDefaultObject, Address::UClass_ClassDefaultObject, UObject*)
};
