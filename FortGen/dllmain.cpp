// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

DWORD MainThread(HMODULE Module)
{
    Utils::InitConsole();
    if (Logger::Init()) Logger::Log(LogLevel::Info, "FortGen DLL loaded and initialized successfully.");
    Address::SetupAddress();
    VersionInfo::InitParseVersion();
    Address::SetupOffsets();
    GUObjectArray = decltype(GUObjectArray)(Scanner::GetModuleBase() + Address::GUObjectArray);
    IDADumper::Initialize();
    Dumper::Initialize();
    UObject* Object = *(UObject**)(__int64(StaticFindObject("/Script/FortniteGame.FortPlayerController") + 0x2A));
    Logger::Log(LogLevel::Info, Object->GetName());
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        Logger::Shutdown();
        break;
    }

    return TRUE;
}
