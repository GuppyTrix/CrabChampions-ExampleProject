#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabUI.h"
#include "CrabInventorySlotUI.generated.h"

class UButton;
class UCrabInventoryDA;
class UCrabInventoryUI;
class UImage;
class UOverlay;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabInventorySlotUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabInventoryUI* OwningInventoryUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabInventoryDA* InventoryDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOverlay* SlotOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* SlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImage* SlotLockedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImage* SlotIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextBlock* SlotLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UImage* SlotEnhanceableIconImage;
    
public:
    UCrabInventorySlotUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHoveredSlotButton();
    
};

