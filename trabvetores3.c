#include <stdio.h>

int main()
{
    int cod[5], i;
    float salario[5];

    for (i = 0; i < 5; i++)
    {
        printf("\n------------ funcionario %d -----------------", i + 1);
        printf("\nQual o codigo do funcionario? ");
        scanf("%d", &cod[i]);
        printf("Qual o salario do funcionario? ");
        scanf("%f", &salario[i]);
    }
    printf("\n----------------------------------------------------------");

    for (i = 0; i < 5; i++)
    {
        if (salario[i] > 2500)
        {
            printf("\nFuncionario - cod %d - recebe R$ %.2f reais", cod[i], salario[i]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (salario[i] < 1200)
        {
            salario[i] = salario[i] * 1.2;
            printf("\nFuncionario - cod %d - Salario atualizado:1 R$ %.2f reais", cod[i], salario[i]);
        }
    }
}