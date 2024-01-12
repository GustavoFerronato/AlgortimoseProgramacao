#include<stdio.h>

int main(void)
{
    float tempo, distancia, litros, velocidade;

    printf("Qual foi a velocidade media da viagem? ");
    scanf("%f", &velocidade);
    printf("Qual foi o tempo gasto em horas durante a viagem?");
    scanf("%f", &tempo);
    distancia = tempo*velocidade;
    litros = distancia/14;
    printf("================ Resumo da viagem ================");
    printf("\n\n Velocidade media da viagem\t %10.2f KM/H", velocidade);
    printf("\n Tempo total da viagem\t %18.2f horas", tempo);
    printf("\n Foram percorridos\t %18.2f KM", distancia);
    printf("\n O veiculo consumiu\t %18.2f L", litros);
    printf("\n\n================================================");
}
