#include<stdio.h>

int main(void){

    int num, i, anterior = 0, atual = 1, proximo = 1;

    printf("Digite o valor; ");
    scanf("%d", &num);

    for ( i = 2; i <= num; i++)
    {
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
    }
    printf("\n\n resultado %d", atual);
}