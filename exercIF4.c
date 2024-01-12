#include <stdio.h>

int main(void)
{
    int ano;

    printf("Qual o ano voce deseja saber se eh bissexto? ");
    scanf("%i", &ano);
    if (((ano % 400) == 0) || (((ano % 4) == 0) && ((ano % 100) != 0)))
    {
        printf("Eh bissexto");
    }
    else
    {
        printf("Nao eh bissexto");
    }
    return  (0);
}
