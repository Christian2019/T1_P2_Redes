// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class T1_P2_Redes : ModuleRules
{
	public T1_P2_Redes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
