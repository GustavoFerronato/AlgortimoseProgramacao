#include<stdio.h>

int main()
{
    int quartos;
    float  diaria;

    printf("Qual o total de quartos? ");
    scanf("%i", &quartos);
    printf("Qual o valor da diaria? ");
    scanf("%f", &diaria);
    printf("O valor total da diaria com desconto e %.2f reais", diaria*0.73);
    printf("\nFaturamento total: %.2f reais", diaria*quartos*0.73);
    printf("\nO spa deixou de arrecar %.2f reais", diaria*quartos*0.27);
}