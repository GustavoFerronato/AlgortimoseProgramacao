#include<stdio.h>

int main()
{
    float lado, vol;

    printf("Qual ao lado do cubo em centimetros? ");
    scanf("%f", &lado);
    vol = lado*lado*lado;
    printf("O volume do cubo e %.2f cm2", vol);
    }