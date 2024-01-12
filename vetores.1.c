#include <stdio.h>

int main()
{

    int vetor_a[5] = {0}, vetor_b[5] = {0}, vetor_s[5] = {0}, i;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite a posicao %i do vetor A: ", i + 1);
        scanf("%d", &vetor_a[i]);
        printf("Digite a posicao %i do vetor B: ", i + 1);
        scanf("%d", &vetor_b[i]);
        vetor_s[i] = vetor_a[i] + vetor_b[i];
        printf("----------------------------------------");
    }
    printf("\nResultado das somas ");

    for (i = 0; i < 5; i++)
        printf("\n\tO resultado da posicao %i eh: %d", i + 1, vetor_s[i]);
}