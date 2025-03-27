# CH4_MyPlugin
## [10번 과제] 언리얼 플러그 인을 만들어 봐요
---

### **플러그인 생성**
 - **공백**(Blank)선택해서 빈 플러그인 생성

    <details>
      <summary>MyIDPlugin.h</summary>
    
    ```cpp
  
    #pragma once
    
    #include "Modules/ModuleManager.h"
    
    class FMyIDPluginModule : public IModuleInterface
    {
    public:
    
      /** IModuleInterface implementation */
      virtual void StartupModule() override;
      virtual void ShutdownModule() override;
    };
    
    ```
      
    </details>

    <details>
      <summary>MyIDPlugin.cpp</summary>
    
    ```cpp
  
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
    
    ```
      
    </details>

---

### **GameInstanceSubsystem**을 상속받은 클래스 생성

  - 클래스 추가
    ![image](https://github.com/user-attachments/assets/081c296c-f24e-496c-82e7-7b48717e0b95)

  - MyPlugin을 선택한 후 생성
    ![image](https://github.com/user-attachments/assets/70d41929-4318-4915-9fc6-a059ae905b28)

### **간단 기능 추가**

  - 이름 저장 및 불러오기

    <details>
      <summary>MyIDPluginGISubsystem.h</summary>
    
    ```cpp
  
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
    
    ```
      
    </details>

    <details>
      <summary>MyIDPluginGISubsystem.h</summary>
    
    ```cpp
  
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

    ```
      
    </details>

---

## **테스트 영상**

https://github.com/user-attachments/assets/9d8c8307-28f6-4be9-9f06-0d79237e7fa7




