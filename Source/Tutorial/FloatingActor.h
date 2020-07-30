// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class TUTORIAL_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;

	// By adding these variables in the header and replacing the float values we were using to scale DeltaHeight and Delta Rotation in the .cpp,
	// we can now edit the float and rotation speed in the Detials Panel when we select our Actor.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FloatingActor")
		float FloatSpeed = 20.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FloatingActor")
		float RotationSpeed = 20.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
