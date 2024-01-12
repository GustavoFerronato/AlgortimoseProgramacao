#include<stdio.h>

int main(void)
{  
    float media = 0,valor1=0, valor2=0, valor3 = 0;
    
    printf("\n\nDigite a nota um:");
    scanf("%f",&valor1);
    
    printf("\nDigite a nota dois:");
    scanf("%f",&valor2);
    
    printf("\nDigite a nota tres:");
    scanf("%f",&valor3);
    
    media = (valor1 + valor2 + valor3)/3;
    printf("A media  : %.2f",media);
}