// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/WarriorBaseCharacter.h"
#include "WarriorHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class WARRIORTUTORIAL_API AWarriorHeroCharacter : public AWarriorBaseCharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
