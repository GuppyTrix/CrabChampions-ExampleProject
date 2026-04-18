#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "CrabInGameMenuUI.generated.h"

class UButton;
class UCrabConfirmationPromptUI;
class UCrabSettingsMenuUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabInGameMenuUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabConfirmationPromptUI* ConfirmationPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabSettingsMenuUI* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* ResumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* QuickRestartButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* SettingsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* FeedbackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* QuitToLobbyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButton* QuitToDesktopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabConfirmationPromptUI* QuitConfirmationPromptUI;
    
public:
    UCrabInGameMenuUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedSettingsButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedResumeButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedQuitToLobbyButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedQuitToDesktopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedQuickRestartButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFeedbackButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredSettingsButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredResumeButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredQuitToLobbyButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredQuitToDesktopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredQuickRestartButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredFeedbackButton();
    
};

