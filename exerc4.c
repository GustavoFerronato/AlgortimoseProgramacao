#include<stdio.h>


int main (void)
{
    float raio;

    printf("Qual a medida do raio? ");
    scanf("%f", &raio);
    raio = 3.14 * (raio * raio);
    printf("A area do circulo e %.2f ", raio);
}