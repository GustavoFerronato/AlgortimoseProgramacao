#include<stdio.h>
#include<math.h>

int main()
{
 float valor1, valor2,soma,q;

printf("Digite o valor um: ");
scanf("%f", &valor1);   
printf("Digite o valor dois: ");
scanf("%f", &valor2); 
soma = valor1 + valor2;
q = pow(soma,2);
printf("%.f", q);

}