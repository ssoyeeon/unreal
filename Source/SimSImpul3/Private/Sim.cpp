// Fill out your copyright notice in the Description page of Project Settings.


#include "Sim.h"

// Sets default values
ASim::ASim()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

float A = 10.0f;
int B;
bool C;
double D;
long E;
//모야 다 있자나? 있겠지...

// Called when the game starts or when spawned
void ASim::BeginPlay()
{
	Super::BeginPlay();
	
}

void soyeon()
{
	
}

// Called every frame
void ASim::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//아니 왜 너네만 알 ㅅ후 있게 정의해놓고 나는 안 알려줘 !!!!...
//뭔데 이게 뭔데 ㅠ ㅠ ㅠ ㅠ ㅠㅠ
//그냥 편하게 쓸 수 있게 만들어준 함수였다~ 

// Called to bind functionality to input
void ASim::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

