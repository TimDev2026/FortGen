#pragma once
#include "framework.h"
#include "Class.h"

class UProperty : public UField
{
public:
	DEFINE_STATICCLASS("/Script/CoreUObject.Property", UProperty)
	DEFINE_MEMBER(ArrayDim, Address::UProperty_ArrayDim, int32_t)
	DEFINE_MEMBER(ElementSize, Address::UProperty_ElementSize, int32_t)
	DEFINE_MEMBER(PropertyFlags, Address::UProperty_PropertyFlags, uint64_t)
	DEFINE_MEMBER(Offset_Internal, Address::UProperty_OffsetInternal, int32_t)
public:
	std::string GetNameCPP() const;
};