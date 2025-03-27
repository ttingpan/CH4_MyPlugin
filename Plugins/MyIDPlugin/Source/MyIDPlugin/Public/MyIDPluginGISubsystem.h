#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyIDPluginGISubsystem.generated.h"

UCLASS()
class MYIDPLUGIN_API UMyIDPluginGISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	// 저장될 이름 변수
	static FString UserName;
	// 저장된 이름 가져오기
	UFUNCTION(BlueprintPure, Category = "MyIDPluginGISubsystem")
	static FString GetUserName();
	// 이름 저장하기
	UFUNCTION(BlueprintCallable, Category = "MyIDPluginGISubsystem")
	static void SetUserName(const FString& NewName);
};
