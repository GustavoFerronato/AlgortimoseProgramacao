#include<stdio.h>


int main()
{
    float custo, ingresso, ingqtd, ing30;

    printf("Qual o valor do custo da sessao? ");
    scanf("%f", &custo);
    printf("Qual o preco do ingresso? ");
    scanf("%f", &ingresso);
    ingqtd = custo/ingresso ;
    ing30 = ingqtd*1.3;

    
    printf("\nSao necessario %.2f ingressos para cobrir o custo da sessao", ingqtd);
    printf("\nCom %.2f imgressos vendidos, se obtem um lucro aproximado de 30%%", ing30);

    

}