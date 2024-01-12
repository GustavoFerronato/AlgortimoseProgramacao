#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Digite o valor um: ");
    scanf("%i", &a);
    printf("Digite o valor dois: ");
    scanf("%i", &b);
    if (a != b)
    {
        printf("Os valores sao diferentes! ");
    }
    else
    {
        printf("Os valores sao iguais! ");
    }
}