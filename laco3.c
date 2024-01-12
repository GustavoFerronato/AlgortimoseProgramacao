#include <stdio.h>

int main(void)
{

    int x, y = 0, i;

    printf("Digite o valor: ");
    scanf("%d", &x);

    for (i = 1; i <= 10; i++)
    {
        y = ((x + i) + y);
    }

    printf("%d", y);
}
