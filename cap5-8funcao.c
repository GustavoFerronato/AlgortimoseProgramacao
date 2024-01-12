#include <stdio.h>
//Devolva o maior valor entre x,y,z

float Max(float x, float y, float w)
{
    float maior = 0;

    maior = x;
    if (y > maior)
        maior = y;

    if (w > maior)
        maior = w;

        return maior;
}

int main()
{
    float x,y,z;
    printf("Qual o valor de x?");
    scanf("%f", &x);
    printf("Qual o valor de y?");
    scanf("%f", &y);
    printf("Qual o valor de z?");
    scanf("%f", &z);
    printf("%.2f", Max(x,y,z));
}