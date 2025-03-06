#pragma once
#include "CoreMinimal.h"
#include "Engine.h"
#include "StructTypes.generated.h"

USTRUCT(Blueprintable)
struct FDialogueTicket
 {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="StoryEngine Editor")
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StoryEngine Editor")
	FString DialogueText;
 };