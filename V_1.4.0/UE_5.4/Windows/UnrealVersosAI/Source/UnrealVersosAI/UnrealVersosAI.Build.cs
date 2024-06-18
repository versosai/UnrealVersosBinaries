/**
 *  Copyright 2024 Versos AI Inc. All rights reserved
 */


using UnrealBuildTool;

public class UnrealVersosAI : ModuleRules
{
	public UnrealVersosAI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.NoPCHs;
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
		);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"ThirdParty/"
			}
		);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "Blutility",
                "CoreUObject",
				"Engine",
				"InputCore",
				"EditorStyle"
				// ... add other public dependencies that you statically link with here ...
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"EditorFramework",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"HTTP",
				"Json",
				"JsonUtilities",
                "UMGEditor",
                "Blutility",  
				"UMG"
			}
		);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}
