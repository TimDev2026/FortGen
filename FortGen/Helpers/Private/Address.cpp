#include "pch.h"

void Address::SetupAddress()
{
	uintptr_t ImageBase = Scanner::GetModuleBase();

	FMemory_Realloc = Finder::FindFMemory_Realloc() - ImageBase;
	Logger::Log(LogLevel::Info, std::format("FMemory::ReallocExternal: 0x{:X}", FMemory_Realloc).c_str());
}
