// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IImageConsumer.h"
#include "Modules/ModuleInterface.h"

class MEDIAPIPE4U_DEMO_API FMediaPipe4UDemoMoulder : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	TSharedPtr<IImageConsumer> SampleImageConsumer;
};


