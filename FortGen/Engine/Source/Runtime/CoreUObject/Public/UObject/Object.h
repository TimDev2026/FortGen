#pragma once
#include "framework.h"
#include "UObjectBaseUtility.h"

class UObject : public UObjectBaseUtility
{
public:
	template<typename T>
	T* Cast(class UClass* Class = T::StaticClass()) const
	{
		return (this && IsA(Class)) ? reinterpret_cast<const T*>(this) : nullptr;
	}
};