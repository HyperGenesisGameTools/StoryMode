#include "StoryEditorSubsystem.h"

#include "Modules/ModuleManager.h"

void UStoryEditorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogTemp, Warning, TEXT("StoryEditorSubsystem initialized."));
}

void UStoryEditorSubsystem::Deinitialize()
{
    Super::Deinitialize();
    UE_LOG(LogTemp, Warning, TEXT("StoryEditorSubsystem deinitialized."));
}

// Implement the TestLog function
void UStoryEditorSubsystem::TestLog()
{
    UE_LOG(LogTemp, Warning, TEXT("Hello World"));
}

void UStoryEditorSubsystem::CreateDialogueNode(UDataTable* DataTable)
{

}