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

void UStoryEditorSubsystem::CreateDialogueNode(UDataTable* DataTable, FDialogueTicket Dialogue, FName RowName, FString TablePath)
{
    if (!DataTable) {
        UE_LOG(LogTemp, Error, TEXT("The Data table wasn't found! ****************"));
        return;
    }
    UDataTable* LoadedDataTable = LoadObject<UDataTable>(nullptr, *TablePath);
    const FTableRowBase* RowConversion = reinterpret_cast<const FTableRowBase*>(&Dialogue);
    if (!LoadedDataTable) {
        UE_LOG(LogTemp, Error, TEXT("WHat the hell is happening here? The loaded data table isn't valid*************"));
        return;
    }

    LoadedDataTable->AddRow(RowName, *RowConversion);
    LoadedDataTable->MarkPackageDirty();
    LoadedDataTable->PostEditChange();
    
}

