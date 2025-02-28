// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StoryEditor : ModuleRules
{
	public StoryEditor(ReadOnlyTargetRules Target) : base(Target)
	{		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"EditorFramework",
				"EditorStyle",
				"EditorSubsystem",
				"UnrealEd"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
	}
}
