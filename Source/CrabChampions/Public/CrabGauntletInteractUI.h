#pragma once
#include "CoreMinimal.h"
#include "CrabInteractUI.h"
#include "CrabGauntletInteractUI.generated.h"

class UBorder;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabGauntletInteractUI : public UCrabInteractUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBorder* ChallengeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBorder* RewardBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextBlock* RewardText;
    
public:
    UCrabGauntletInteractUI();

};

