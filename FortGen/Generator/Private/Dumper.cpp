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

	InitMinStructSize();
	DumpObjects(FolderPath);
	ProcessPackages(SDKPath);

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

void Dumper::ProcessPackages(std::filesystem::path& FolderPath)
{
	ClassesFullName.clear();

	std::unordered_map<std::string, std::vector<UObject*>> PackageMap;

	for (int i = 0; i < GUObjectArray->GetObjObjects().GetNumElements(); i++)
	{
		UObject* Object = (UObject*)GUObjectArray->GetObjObjects().GetObjects(i)->GetObjectW();
		if (!Object) continue;
		UPackage* Package = Object->GetOutermost();
		if (!Package) continue;
		PackageMap[SanitizeName(Package->GetPackageName())].push_back(Object);
	}

	for (auto& [PackageName, Objects] : PackageMap)
	{
		bool bHasEnum = false;
		bool bHasStruct = false;
		bool bHasClass = false;
		bool bHasParam = false;

		for (UObject* Object : Objects)
		{
			if (Object->IsA(UEnum::StaticClass()))
			{
				bHasEnum = true;
			}
			else if (Object->IsA(UScriptStruct::StaticClass()))
			{
				bHasStruct = true;
			}
			else if (Object->IsA(UClass::StaticClass()))
			{
				bHasClass = true;
			}
			else if (Object->IsA(UFunction::StaticClass()))
			{
				UFunction* Function = Object->Cast<UFunction>();
				if (!Function) continue;
				bHasParam = true;
				if (Function->GetFunctionFlags() & (FUNC_Delegate | FUNC_MulticastDelegate))
					bHasStruct = true;
			}
		}
	}
}

void Dumper::InitMinStructSize()
{
	bool bChanged = true;

	while (bChanged)
	{
		bChanged = false;

		for (int i = 0; i < GUObjectArray->GetObjObjects().GetNumElements(); i++)
		{
			UObject* Object = (UObject*)GUObjectArray->GetObjObjects().GetObjects(i)->GetObjectW();
			if (!Object) continue;
			if (Object->IsA(UClass::StaticClass()))
			{
				UStruct* Struct = Object->Cast<UStruct>();
				if (!Struct) continue;
				UStruct* Super = Struct->GetSuperStruct();
				if (Super)
				{
					int32_t MinOffset = -1;

					for (UField* Child = Struct->GetChildren(); Child; Child = Child->GetNext())
					{
						if (!Child)
							continue;

						if (Child->IsA(UProperty::StaticClass()))
						{
							UProperty* Property = Child->Cast<UProperty>();
							if (MinOffset == -1 || Property->GetOffset_Internal() < MinOffset)
								MinOffset = Property->GetOffset_Internal();
						}
					}

					if (MinOffset != -1 && MinStructSize.count(Struct->GetSuperStruct()))
					{
						if (MinOffset < MinStructSize[Struct->GetSuperStruct()])
						{
							MinStructSize[Struct->GetSuperStruct()] = MinOffset;
							bChanged = true;
						}
					}
				}
			}
		}
	}
}

std::string Dumper::SanitizeName(std::string Name)
{
	static const std::string InvalidChars = " /?:;.,'\"!@#$%^&*()+-=<>[]";

	for (char& Char : Name)
	{
		if (InvalidChars.find(Char) != std::string::npos)
			Char = '_';
	}

	if (!Name.empty() && isdigit(Name[0]))
		Name = "_" + Name;

	static const std::unordered_set<std::string> Keywords = {
		"int", "float", "double", "char", "bool", "virtual", "volatile", "class", "struct", "true", "false", "unsigned", "signed", "long", "short", "auto", "template", "typename", "public", "protected", "private"
	};

	if (Keywords.count(Name))
		Name = "_" + Name;

	return Name;
}
