﻿// Copyright(C) https://github.com/battyRabbit/CodecksUnreal/graphs/contributors

#include "CodecksUnreal.h"

#include <Modules/ModuleManager.h>

DEFINE_LOG_CATEGORY(LogCodecksUnreal);

#define LOCTEXT_NAMESPACE "FCodecksUnrealModule"

void FCodecksUnrealModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCodecksUnrealModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FCodecksUnrealModule, CodecksUnreal)
