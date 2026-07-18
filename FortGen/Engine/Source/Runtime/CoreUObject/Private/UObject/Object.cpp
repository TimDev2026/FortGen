#include "pch.h"

std::string UObject::GetPackageName()
{
    std::string Name = this->GetName();

	if (!Name.empty() && Name.back() == '/')
		Name.pop_back();

	size_t LastSlash = Name.find_last_of('/');
	if (LastSlash != std::string::npos)
		Name = Name.substr(LastSlash + 1);

    return Name;
}
