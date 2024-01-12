#include <stdio.h>

int main(void)
{

    int idade, n, i;

    do
    {
        printf("Quanto idadas serao lidas?");
        scanf("%d", &n);

    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        do
        {
            printf("\nidade %d: ", i);
            scanf("%d", &idade);
            if (idade <= 0)
            {
                printf("**idade invalida**");
            }
        } while (idade <= 0);
    }
}
