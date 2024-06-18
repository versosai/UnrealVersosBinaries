#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "UObject/ObjectMacros.h"
#include "WebServer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWebContent, FString, Content);

UCLASS(Blueprintable)
class UWebServer : public UObject, public FRunnable {
	GENERATED_BODY()
public:
	UWebServer() {
		Thread = FRunnableThread::Create(this, TEXT("WebServer"));
	};

	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Exit() override;
	virtual void Stop() override;

    UPROPERTY(BlueprintAssignable, Category = "Versos|HTTP")
	FWebContent Content;

private:
	FRunnableThread* Thread;
	bool bShutdown= false;
};
