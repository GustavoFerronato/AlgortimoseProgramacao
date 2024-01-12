#include <stdio.h>

int main(void)
{
    int i, x, y = 0;

    printf("Digite o valor: ");
    scanf("%d", &x);
    for (i = 1; i <= 20; i++)
    {

        y = (i * x) + y;
    }
    printf("Resultado: %d", y);
}