#include <stdio.h>
// Devolva o número em segundos existente em um conjunto de horas

int nSegundos(int horas)
{
    int total;

    total = horas * 60 * 60;

    return total;
}

int main()
{

    int n;
    printf("Quantas horas deseja converter em segundos?");
        scanf("%d", &n);
            printf("Total de %d segundos", nSegundos(n));
}
