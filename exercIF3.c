#include <stdio.h>

int main(void)
{
    int a;

    printf("Digite o valor: ");
    scanf("%i", &a);

    if ((a % 5) == 0)
    {
        printf("O numero %i eh divisivel por cinco! ", a);
    }
    else
    {
        printf("O numero %i nao eh divisivel por cinco! ", a);
    }
}