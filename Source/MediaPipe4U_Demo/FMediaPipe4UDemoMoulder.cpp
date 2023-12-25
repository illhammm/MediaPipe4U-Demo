// Copyright Epic Games, Inc. All Rights Reserved.

#include "FMediaPipe4UDemoMoulder.h"

#include "ImageWorkflow.h"
#include "SampleImageConsumer.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FMediaPipe4UDemoMoulder, MediaPipe4U_Demo, "MediaPipe4U_Demo" );

void FMediaPipe4UDemoMoulder::StartupModule()
{
	IModuleInterface::StartupModule();
	SampleImageConsumer = MakeShareable(new FSampleImageConsumer());
	FImageWorkflow::Get().RegisterConsumer(SampleImageConsumer);
}

void FMediaPipe4UDemoMoulder::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
	FImageWorkflow::Get().UnregisterConsumer(SampleImageConsumer);
}
