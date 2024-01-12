#include <stdio.h>

int main()
{

    int i, corridaA = 0, corridaB = 0, corridaC = 0; // i - controla o laço for -- variaveis 'corridasX' sao contadoras
    float km, valor, desconto, valorfinal;                       // km - recebe a leitura de quilometragem -- valor - recebe o calculo do preco da corrida -- desconto - variavel para armazenar o desconto -- valorfinal - recebe valor menos o desconto
    float valortotal=0; // valortotal - soma do valor de todas as corridas
    char cod;                                        // cod - recebe o codigo da corrida

    for (i = 0; i < 10; i++) // repeticao para as 10 corridas
    {
        printf("\n---------- Corrida %d ----------", i + 1);
        printf("\nQual o codigo da corrida? ");
        fflush(stdin);
        scanf("%c", &cod);
        printf("Qual a quilometragem da corrida? ");
        scanf("%f", &km);

        switch (cod) // multipla escolha para verificar o codigo da corrida
        {
        case 'a':
            valor = km * 1.2;
            printf("Valor inicial da corrida: R$ %.2f\n", valor);
            corridaA++;
            if (valor <= 50)
            {
                desconto = valor * 0.10;
            }
            else if (valor > 50)
            {
                desconto = valor * 0.05;
            }
            printf("Voce recebeu um desconto de R$ %.2f", desconto);
            valorfinal = valor - desconto;
            printf("\nPreco final da corrida: R$ %.2f", valorfinal);
            valortotal = valorfinal + valortotal;

            break;

        case 'b':
            valor = km * 2;
            printf("Valor inicial da corrida: R$ %.2f\n", valor);
            corridaB++;
            if (valor <= 50)
            {
                desconto = valor * 0.10;
            }
            else if (valor > 50)
            {
                desconto = valor * 0.05;
            }
            printf("Voce recebeu um desconto de R$ %.2f", desconto);
            valorfinal = valor - desconto;
            printf("\nPreco final da corrida: R$ %.2f", valorfinal);
            valortotal = valorfinal + valortotal;
            break;

        case 'c':
            valor = km * 2.2;
            printf("Valor inicial da corrida: R$ %.2f\n", valor);
            corridaC++;
            if (valor <= 50)
            {
                desconto = valor * 0.10;
            }
            else if (valor > 50)
            {
                desconto = valor * 0.05;
            }
            printf("Voce recebeu um desconto de R$ %.2f", desconto);
            valorfinal = valor - desconto;
            printf("\nPreco final da corrida: R$ %.2f", valorfinal);
            valortotal = valorfinal + valortotal;
            break;

        default:
            break;
        }
    }

    printf("--------- relatorio final ----------");
    printf("\nForam feitas %d corridas com o codigo A, totalizandao %.2f%%", corridaA, (corridaA / (float)10) * 100);
    printf("\nForam feitas %d corridas com o codigo B, totalizandao %.2f%%", corridaB, (corridaB / (float)10) * 100);
    printf("\nForam feitas %d corridas com o codigo C, totalizandao %.2f%%", corridaC, (corridaC / (float)10) * 100);
    printf("\nValor totas das corridas R$ %.2f ", valortotal);
    printf("\nA media do valor das corridas ficou em R$%.2f ", valortotal/10);

}