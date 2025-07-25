// Copyright(C) https://github.com/battyRabbit/CodecksUnreal/graphs/contributors

using UnrealBuildTool;

public class CodecksUnrealEditor : ModuleRules
{
	public CodecksUnrealEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.NoPCHs;


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"CodecksUnreal"
			}
		);
	}
}
