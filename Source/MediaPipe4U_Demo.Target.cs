// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MediaPipe4U_DemoTarget : TargetRules
{
	public MediaPipe4U_DemoTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		DefaultWarningLevel = WarningLevel.Warning;
		ExtraModuleNames.AddRange( new string[] { "MediaPipe4U_Demo" } );
	}
}
