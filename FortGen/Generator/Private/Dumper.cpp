#include "pch.h"

void Dumper::Initialize()
{
	if (!GUObjectArray)
	{
		Logger::Log(LogLevel::Error, "GUObjectArray is nullptr!");
		return;
	}

	Logger::Log(LogLevel::Info, "FortGen is dumping the SDK...");

	std::string EngineVersion = UKismetSystemLibrary::GetEngineVersion().ToString();

	std::filesystem::path FolderPath = Settings::FolderPath;
	FolderPath /= EngineVersion;
	if (!std::filesystem::exists(FolderPath))
		std::filesystem::create_directories(FolderPath);

	std::filesystem::path SDKPath = FolderPath / "SDK";
	if (!std::filesystem::exists(SDKPath))
		std::filesystem::create_directories(SDKPath);

	DumpObjects(SDKPath);

	Logger::Log(LogLevel::Info, "FortGen is finished dumping the SDK.");
}

void Dumper::DumpObjects(std::filesystem::path& FolderPath)
{
	std::filesystem::path PathFile = FolderPath / "Objects.txt";
	std::ofstream File(PathFile);
	if (!File.is_open())
	{
		Logger::Log(LogLevel::Error, "[Dumper::DumpObjects]: Failed to create Objects.txt"); 
		return;
	}

	int TotalObjects = GUObjectArray->GetObjObjects().GetNumElements();

	File << "Total Objects: " << TotalObjects << "\n\n";

	for (int i = 0; i < TotalObjects; i++)
	{
		UObject* Object = (UObject*)GUObjectArray->GetObjObjects().GetObjects(i)->GetObjectW();
		if (!Object) continue;
		File << "[" << i << "]: " << Object->GetFullName() << std::endl;
	}

	File.close();
}
