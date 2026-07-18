#pragma once
#include "framework.h"

class Dumper
{
public:
	static void Initialize();
private:
	static void DumpObjects(std::filesystem::path& FolderPath);
	static void ProcessPackages(std::filesystem::path& FolderPath);
	static void InitMinStructSize();
private:
	inline static std::unordered_map<class UStruct*, int32_t> MinStructSize;
	inline static std::unordered_set<std::string> ClassesFullName;
};