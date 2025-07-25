// Copyright(C) https://github.com/battyRabbit/CodecksUnreal/graphs/contributors

#pragma once

#include "CoreMinimal.h"

class FCodecksUnrealModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

DECLARE_LOG_CATEGORY_EXTERN(LogCodecksUnreal, Log, All);
