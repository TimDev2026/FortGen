#include "pch.h"

std::string UProperty::GetNameCPP() const
{
	if (!this)
		return "None";

	std::string Name = "";

	if (IsA(UEnum::StaticClass()))
	{
		Name += "E";
		Name += GetName();
		return Name;
	}
	else if (UScriptStruct::StaticClass())
	{
		Name += "F";
		Name += GetName();
		return Name;
	}
	else if (UClass::StaticClass())
	{
		for (UClass* ClassPrivate = (UClass*)this; ClassPrivate; ClassPrivate = (UClass*)ClassPrivate->GetSuperStruct())
		{
			if (!ClassPrivate)
				continue;

			std::string ClassName = ClassPrivate->GetName();

			if (ClassName == "Actor")
			{
				Name += "A";
				break;
			}
			else if (ClassName == "Object")
			{
				Name += "U";
				break;
			}
		}

		Name += GetName();
		return Name;
	}

	return "None";
}