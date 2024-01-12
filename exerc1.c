#include<stdio.h>

int main(void)
{
    float valor1=0, valor2=0, soma;

    printf("\n\nDigite a nota um: ");
    scanf("%f" ,&valor1);

    printf("\nDigite a nota dois:");
    scanf("%f",&valor2);

    soma = valor1 + valor2;
    printf("\nA soma das notas e %.2f", soma);
}
