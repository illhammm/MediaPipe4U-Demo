// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IImageConsumer.h"

/**
 * 
 */
class MEDIAPIPE4U_DEMO_API FSampleImageConsumer : public IImageConsumer
{
public:
 virtual bool CanConsume() override;
 virtual bool Consume(const FImageSourceInfo& SourceInfo, IMediaPipeTexture* Texture) override;
};
