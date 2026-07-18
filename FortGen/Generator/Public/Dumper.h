#pragma once
#include "framework.h"

class Dumper
{
public:
	static void Initialize();
private:
	static void DumpObjects(std::filesystem::path& FolderPath);
};