#include <stdio.h>

int main()
{

    int n, a, i, soma = 0;

    printf("Digite o valor de A:");
    scanf("%d", &a);

    do
    {
        printf("Digite o valor de N:");
        scanf("%d", &n);

    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        soma = a + soma;
        a++;
    }

    printf("\ntotal = %d", soma);
}