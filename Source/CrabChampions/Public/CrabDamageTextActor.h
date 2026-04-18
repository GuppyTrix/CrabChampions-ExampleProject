#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabDamageTextActor.generated.h"

class UCrabDamageTextUI;
class UWidgetComponent;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabDamageTextActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetComponent* DamageTextWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabDamageTextUI* DamageTextUI;
    
public:
    ACrabDamageTextActor(const FObjectInitializer& ObjectInitializer);

};

