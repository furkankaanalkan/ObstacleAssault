// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class obstacleAssault : ModuleRules
{
	public obstacleAssault(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"obstacleAssault",
			"obstacleAssault/Variant_Platforming",
			"obstacleAssault/Variant_Platforming/Animation",
			"obstacleAssault/Variant_Combat",
			"obstacleAssault/Variant_Combat/AI",
			"obstacleAssault/Variant_Combat/Animation",
			"obstacleAssault/Variant_Combat/Gameplay",
			"obstacleAssault/Variant_Combat/Interfaces",
			"obstacleAssault/Variant_Combat/UI",
			"obstacleAssault/Variant_SideScrolling",
			"obstacleAssault/Variant_SideScrolling/AI",
			"obstacleAssault/Variant_SideScrolling/Gameplay",
			"obstacleAssault/Variant_SideScrolling/Interfaces",
			"obstacleAssault/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
