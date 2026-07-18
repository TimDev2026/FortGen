#include "pch.h"

std::string UObjectBaseUtility::GetName() const
{
    return GetNamePrivate().ToString();
}

std::string UObjectBaseUtility::GetFullName() const
{
    std::string Result;

    UClass* ClassPrivate = GetClassPrivate();

    if (ClassPrivate)
        Result += ClassPrivate->GetName();
    else
        Result += "None";

    Result += " ";
    Result += GetPathName();

    return Result;
}

std::string UObjectBaseUtility::GetPathName() const
{
    return UKismetSystemLibrary::GetPathName((UObject*)this).ToString();
}

bool UObjectBaseUtility::IsA(const UClass* SomeBase) const
{
    UClass* ClassPrivate = GetClassPrivate();
    if (!ClassPrivate)
        return false;

    for (UStruct* SuperStruct = ClassPrivate; SuperStruct; SuperStruct = SuperStruct->GetSuperStruct())
    {
        if (SuperStruct == ClassPrivate)
            return true;
    }

    return false;
}
