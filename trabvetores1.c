#include <stdio.h>

int main()
{

    int i, vetor[6], par = 0, impar = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor %d:", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            par++;
        }
        else
            impar++;
    }

    for (i = 0; i < 6; i++)
    {
        printf("\nPosicao %d: %d", i + 1, vetor[i]);
    }
    printf("\n%d pares", par);
    printf("\n%d impares", impar);
}
