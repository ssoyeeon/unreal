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
//��� �� ���ڳ�? �ְ���...

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

//�ƴ� �� �ʳ׸� �� ���� �ְ� �����س��� ���� �� �˷��� !!!!...
//���� �̰� ���� �� �� �� �� �Ф�
//�׳� ���ϰ� �� �� �ְ� ������� �Լ�����~ 

// Called to bind functionality to input
void ASim::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

