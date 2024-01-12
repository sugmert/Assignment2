#pragma once

#include "CoreMinimal.h"
#include "NetGameInstance.h"
#include "GameFramework/PlayerState.h"
#include "NetPlayerState.generated.h"

UCLASS()
class ANetPlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    int PlayerIndex;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_PlayerInfo)
    FSPlayerInfo Data;

    EPlayerTeam TeamID;
    EGameResults Result;

private:
    UFUNCTION()
    void OnRep_PlayerInfo();
};
