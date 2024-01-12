#include <stdio.h>

int main(void)
{
    int a;

    printf("Digite o valor: ");
    scanf("%i", &a);
    
    if ((a % 2) == 0)
    {
        printf("O valor eh par! ");
    }
    else
    {
        printf("O valor eh impar! ");
    }
}