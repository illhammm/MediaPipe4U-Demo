// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MediaPipe4U_Demo : ModuleRules
{
	public MediaPipe4U_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.NoPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"MediaPipe",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject",
			"MediaPipe",
			"Slate",
			"MediaPipeGStreamer",
			"MediaPipeBVH",
			"MediaPipeLiveLink",
			"MediaPipeNvAR",
			"DesktopPlatform",
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
