#include<stdio.h>

int main(void)
{
    float custo, desc, troco, valor;
    int  qtd;

    printf("Qual o valor de custo da duzia? ");
    scanf("%f", &custo);
    printf("Qual o percentual de desconto? ");
    scanf("%f", &desc);
    printf("Quantidade de laranjas compradas? ");
    scanf("%i", &qtd);
    valor = (1-(desc/100))*((custo/12)*2)*qtd;
    printf("Valor da compra: %.2f reais", valor);
    printf("\nQual o valor entregue pelo cliente?");
    scanf("%f", &troco);
    printf("Devolver ao cliente %.2f reais ", troco - valor);

}
