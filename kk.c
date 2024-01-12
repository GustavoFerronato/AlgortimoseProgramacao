#include <stdio.h>

float maior(float v[], int n)
{
    int i;
    float maior = v[0];

    for (i = 0; i < n; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }

    return maior;
}

int main()
{
    int i, n;

    printf("Digite o numero de posicoes: ");
    scanf("%d", &n);

    float v[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite a posicao %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    printf("\n-------------\n");
    printf("Maior elemento: %f\n", maior(v, n));

    return 0;
}
