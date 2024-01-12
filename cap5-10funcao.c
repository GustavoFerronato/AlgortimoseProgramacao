#include<stdio.h>
// Verifica se X se encontra em um determinado intervalo


int entre(int x, int sup, int inf)
{
    if ((inf <= x) && (x <= sup))
    return 1;
    else
    return 0;
    
    
}

int main(){
    
    int x,sup,inf;
    printf("Qual o valor de x?");
    scanf("%d", &x);
    printf("Qual o limite superior?");
    scanf("%d", &sup);
    printf("Qual o limite superior?");
    scanf("%d", &inf);
    printf("%d", entre(x,sup,inf));
}