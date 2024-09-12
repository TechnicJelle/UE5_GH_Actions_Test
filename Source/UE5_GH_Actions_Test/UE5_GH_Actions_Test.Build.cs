// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_GH_Actions_Test : ModuleRules
{
	public UE5_GH_Actions_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
