#include "MyIDPlugin.h"

#define LOCTEXT_NAMESPACE "FMyIDPluginModule"

void FMyIDPluginModule::StartupModule()
{
}

void FMyIDPluginModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyIDPluginModule, MyIDPlugin)