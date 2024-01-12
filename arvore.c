#include <stdio.h>

int main()
{

    int n = 0, i, j;

    printf("Quantas linhas-");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
    }
}