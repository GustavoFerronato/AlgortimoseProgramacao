#include <stdio.h>

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
    printf("%.2f", Max(80, 100, 250));
}