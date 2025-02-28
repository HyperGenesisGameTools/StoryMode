#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"  // Change this line
#include "StoryEditorSubsystem.generated.h"

UCLASS(BlueprintType)
class STORYEDITOR_API UStoryEditorSubsystem : public UEditorSubsystem // Change this line
{
    GENERATED_BODY()

public:
    // Begin UEditorSubsystem overrides  // Change this line
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End UEditorSubsystem overrides  // Change this line

    UFUNCTION(BlueprintCallable, Category = "Story Editor")
    void TestLog();
};