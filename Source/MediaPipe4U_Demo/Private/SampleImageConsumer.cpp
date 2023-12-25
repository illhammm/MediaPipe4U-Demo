// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleImageConsumer.h"

bool FSampleImageConsumer::CanConsume()
{
	return true;
}

bool FSampleImageConsumer::Consume(const FImageSourceInfo& SourceInfo, IMediaPipeTexture* Texture)
{
	Texture->Release();
	return true;
}
