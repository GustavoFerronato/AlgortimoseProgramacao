#include <stdio.h>

float max(float v[], int n)
{
    int i, maior;

    maior = v[0];
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
    printf("Digite o numero de posicoes:");
    scanf("%d", &n);

    float f[n];

        for (i = 0; i < n; i++)
    {
        printf("Digite a posicao %d:", i+1);
        scanf("%f", &f[i]);

    }

    printf("\n-------------");
    printf("\n%.2f", max(f,n));
}