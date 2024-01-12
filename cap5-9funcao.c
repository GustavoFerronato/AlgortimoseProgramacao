#include<stdio.h>
//Descobrir se o númeor é impar.Devolve verdadeiro-1 ou falso-0

int impar(int x)
{
    return x%2;
}

int main(){

    int n;
    printf("Qual o valor deseja saber se e impar?");
    scanf("%i", &n);
    printf("%d", impar(n));
}