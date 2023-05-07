﻿// Copyright 2022-2023 Naotsun. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Version.h"

namespace PluginBuilder
{
	namespace Global
	{
		// The name of this plugin.
		static const FName PluginName = TEXT("PluginBuilder");
	}
}

/**
 * Macros to support each engine version.
 */
#define ENGINE_VERSION_NUMBER(MajorVersion, MinorVersion) (MajorVersion * 100 + MinorVersion)
#define COMPARE_ENGINE_VERSION(MajorVersion, MinorVersion) ENGINE_VERSION_NUMBER(ENGINE_MAJOR_VERSION, ENGINE_MINOR_VERSION) >= ENGINE_VERSION_NUMBER(MajorVersion, MinorVersion)

#if COMPARE_ENGINE_VERSION(5, 0)
#define UE_5_00_OR_LATER 1
#else
#define UE_5_00_OR_LATER 0
#endif

#if COMPARE_ENGINE_VERSION(4, 26)
#define UE_4_26_OR_LATER 1
#else
#define UE_4_26_OR_LATER 0
#endif

/**
 * Categories used for log output with this plugin.
 */
PLUGINBUILDER_API DECLARE_LOG_CATEGORY_EXTERN(LogPluginBuilder, Log, All);
