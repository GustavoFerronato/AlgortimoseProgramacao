#include <stdio.h>

int main(void)
{
    int idade;

    printf("Qual a sua idade? ");
    scanf("%i", &idade);

    if (idade <= 10)
    {
        printf("Valor do plano eh de R$ 30,00 ");
    }
    else if (idade > 10 && idade <= 29)
    {
        printf("Valor do plano eh de R$ 60,00 ");
    }
    else if (idade > 29 && idade <= 45)
    {
        printf("Valor do plano eh de R$ 120,00 ");
    }
    else if (idade > 45 && idade <= 59)
    {
        printf("Valor do plano eh de R$ 150,00 ");
    }
    else if (idade > 59 && idade <= 65)
    {
        printf("Valor do plano eh de R$ 250,00 ");
    }
    else
    {
        printf("Valor do plano eh de R$ 400,00 ");
    }
}