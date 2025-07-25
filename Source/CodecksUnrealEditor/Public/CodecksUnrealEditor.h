// Copyright(C) https://github.com/battyRabbit/CodecksUnreal/graphs/contributors

#pragma once

#include <CoreMinimal.h>

#include <Modules/ModuleInterface.h>

class FCodecksUnrealEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
