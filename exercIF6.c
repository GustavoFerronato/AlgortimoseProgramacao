#include <stdio.h>

int main()
{
    char tipo;
    float valor, qtd;

    printf("Qual tipo de combustivel desjado?Digite:\nA para alcool\nD para diesel\nG para gasolina\n");
    tipo = getchar();
    printf("Qual o valor do combustivel?");
    scanf("%f", &valor);
    printf("Qual a quantidade de combustivel desajada?");
    scanf("%f", &qtd);
    switch (tipo)
    {
    case 'A' :
        printf("Combustivel selecionado:\tAlcool");
        printf("\nTotal do abastecimento:\t\t%.2f reais", qtd * valor);

        break;
    case 'D':
        printf("Combustivel selecionado:\tDiesel");
        printf("\nTotal do abastecimento:\t\t%.2f reais", qtd * valor);

        break;

    default:
        printf("Combustivel selecionado:\tGasolina");
        printf("\nTotal do abastecimento:\t\t%.2f reais", qtd * valor);

        break;
    }
}