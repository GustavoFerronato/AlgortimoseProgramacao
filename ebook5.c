#include<stdio.h>

int main()
{
   float  valor,desc, valorf;

   printf("Qual o valor do produto? ");
   scanf("%f", &valor);
   desc = valor*0.10;
   valorf = valor - desc;
   printf("\nValor original: %.2f", valor); 
   printf("\nValor do desconto: %.2f", desc); 
   printf("\nValor final: %.2f", valorf); 


}