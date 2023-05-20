// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "JogoDaVelha.generated.h"

/**
 * 
 */
UCLASS()
class T1_P2_REDES_API AJogoDaVelha : public AGameStateBase
{
	GENERATED_BODY()

public:
		/** Move Input Action */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
			int ID;


		/** Getter for the bool */
		UFUNCTION(BlueprintCallable, Category = Weapon)
			int GetID();
		/** Getter for the bool */
		UFUNCTION(BlueprintCallable, Category = Weapon)
			void SetID(int id_novo);
	};
};
