#include "MyIDPluginGISubsystem.h"

FString UMyIDPluginGISubsystem::UserName = TEXT("Unknown");

FString UMyIDPluginGISubsystem::GetUserName()
{
	return UserName;
}

void UMyIDPluginGISubsystem::SetUserName(const FString& NewName)
{
	UserName = NewName.IsEmpty() ? TEXT("Unknown") : NewName;
	UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *UserName);
}

