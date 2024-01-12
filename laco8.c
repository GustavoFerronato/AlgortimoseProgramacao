#include <stdio.h>
#include<math.h>

int main(void) 
{

    int cod, tipo, meses, i;
    float valor, total = 0, tt = 0;

    

    printf("\nQual o codigo do cliente?\n");
    scanf("%d", &cod);

    printf("Digite 1 para poupanca\nDigite 2 para poupanca plus\nDigite 3 para fundos de renda fixa\n");
    scanf("%d", &tipo);

    printf("Qual o valor deseja investir?\n");
    scanf("%f", &valor);

    printf("Por quantos vezes o valor sera aplicado\n?");
    scanf("%d", &meses);

    switch (tipo)
    {
    case 1:
        for (i = 1; i <= meses; i++)
        {
            
            total = valor*1.06;
            valor = total;
            printf("\nMes %d: %.2f", i, total);
            
        }

        break;

    case 2:
        for (i = 1; i <= meses; i++)
        {
            total = valor*1.12;
            valor = total;
            printf("\nMes %d: %.2f", i, total);
        }

        break;

    case 3:
        for (i = 1; i <= meses; i++)
        {
            total = valor*1.2;
            valor = total;
            printf("\nMes %d: %.2f", i, total);
        }

        break;
    default:
        break;
    }
    printf("\nValor total: %.2f", total);
}



