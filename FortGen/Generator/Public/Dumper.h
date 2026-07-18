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
	static std::string SanitizeName(std::string Name);
private:
	inline static std::unordered_map<class UStruct*, int32_t> MinStructSize;
	inline static std::unordered_set<std::string> ClassesFullName;
};