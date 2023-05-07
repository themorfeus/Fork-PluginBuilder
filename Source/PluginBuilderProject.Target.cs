﻿// Copyright 2022-2023 Naotsun. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PluginBuilderProjectTarget : TargetRules
{
	public PluginBuilderProjectTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "PluginBuilderProject" } );
	}
}
