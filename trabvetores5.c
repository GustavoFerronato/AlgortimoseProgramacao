#include <stdio.h>

int main()
{
    int n = 0, i, vetorABCD[4] = {0};
    float bonus = 0;

    do
    {
        printf("Quantos funcionarios deseja cadastrar? ");
        scanf("%d", &n);
        if ((n <= 0) || (n > 100))
        {
            printf("Valor Invalido - Redigite\n");
        }

    } while ((n <= 0) || (n > 100));

    int filhos[n], filhosA = 0, filhosB = 0, filhosC = 0, filhosD = 0;
    float salario[n];

    for (i = 0; i < n; i++)
    {
        printf("\n----- funcionario %d -----", i + 1);
        printf("\nQual o salario? ");
        scanf("%f", &salario[i]);
        printf("Qual a quantidade de filhos? ");
        scanf("%d", &filhos[i]);

        if (salario[i] <= 1000)
        {
            vetorABCD[3]++;
            filhosD = filhosD + filhos[i];
            printf("Classificacao - D - Bonus de R$ 20,00 por filho");
            printf("\nBonus total = R$%.2f", filhos[i] * (float)20);
            printf("\nSalario Final = R$%.2f", (filhos[i] * (float)20)+salario[i]);
        }
        else if ((salario[i] > 1000) && (salario[i] <= 2000))
        {
            vetorABCD[2]++;
            filhosC= filhosC + filhos[i];
            printf("Classificacao - C - Bonus de R$ 15,00 por filho");
            printf("\nBonus total = R$%.2f", filhos[i] * (float)15);
            printf("\nSalario Final = R$%.2f", (filhos[i] * (float)15)+salario[i]);
        }
        else if ((salario[i] > 2000) && (salario[i] <= 3000))
        {
            vetorABCD[1]++;
            filhosB = filhosB + filhos[i];
            printf("Classificacao - B - Bonus de R$ 10,00 por filho");
            printf("\nBonus total = R$%.2f", filhos[i] * (float)10);
            printf("\nSalario Final = R$%.2f", (filhos[i] * (float)10)+salario[i]);
        }
        else
        {
            vetorABCD[0]++;
            filhosA = filhosA + filhos[i];
            printf("Classificacao - A - Bonus de R$ 5,00 por filho");
            printf("\nBonus total = R$%.2f", filhos[i] * (float)5);
            printf("\nSalario Final = R$%.2f", (filhos[i] * (float)5)+salario[i]);
        }
    }

    printf("\n--------------------------------------------------- Relatorio Final ----------------------------------------------------");
    printf("\nClassificacao e total\t\t\t\t %% de funcionarios\t\tValor pelo total de filhos por categoria");
    printf("\nTotal de funcionarios - Classificacao A: %d\t %.f%%\t\t\t\tR$ %.2f",vetorABCD[0],(vetorABCD[0]/(float)n)*100, filhosA*(float)5);
    printf("\nTotal de funcionarios - Classificacao B: %d\t %.f%%\t\t\t\tR$ %.2f",vetorABCD[1],(vetorABCD[1]/(float)n)*100, filhosB*(float)10);
    printf("\nTotal de funcionarios - Classificacao C: %d\t %.f%%\t\t\t\tR$ %.2f",vetorABCD[2],(vetorABCD[2]/(float)n)*100, filhosC*(float)15);
    printf("\nTotal de funcionarios - Classificacao D: %d\t %.f%%\t\t\t\tR$ %.2f",vetorABCD[3],(vetorABCD[3]/(float)n)*100, filhosD*(float)20);


}
