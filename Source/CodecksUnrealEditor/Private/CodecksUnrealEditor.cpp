﻿// Copyright(C) https://github.com/battyRabbit/CodecksUnreal/graphs/contributors

#include "CodecksUnrealEditor.h"

#include <ISettingsModule.h>
#include <Logging/MessageLog.h>
#include <Logging/TokenizedMessage.h>
#include <Modules/ModuleManager.h>

#include "Settings/CodecksSettings.h"

#define LOCTEXT_NAMESPACE "FCodecksUnrealEditorModule"

void FCodecksUnrealEditorModule::StartupModule()
{
	if (const UCodecksSettings* CodecksSettings = GetDefault<UCodecksSettings>())
	{
		if (CodecksSettings->GetReportToken().IsEmpty())
		{
			TSharedRef<FTokenizedMessage> WarnAboutNoReportToken = FMessageLog("LoadErrors").Warning();
			//~ CODECKSUNREAL_TODO(hati): Support localization?
			WarnAboutNoReportToken->AddToken(FTextToken::Create(INVTEXT("No report token set in options! If you don't set one in code make sure you do in the settings.")));

			const auto GotoAction = FOnActionTokenExecuted::CreateLambda([CodecksSettings] {
				FModuleManager::LoadModuleChecked<ISettingsModule>("Settings")
						.ShowViewer(CodecksSettings->GetContainerName(), CodecksSettings->GetCategoryName(), CodecksSettings->GetSectionName());
			});
			WarnAboutNoReportToken->AddToken(FActionToken::Create(INVTEXT("Open Project Settings"), INVTEXT("Goto Codecks User Report Settings"), GotoAction));
		}
	}
}

void FCodecksUnrealEditorModule::ShutdownModule()
{}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FCodecksUnrealEditorModule, CodecksUnrealEditor)
