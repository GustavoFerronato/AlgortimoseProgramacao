#include <stdio.h>

int main(void)
{

    int i, f, calc = 1;
    
    printf("Digite o numero pra calcular o fatoria: ");
    scanf("%d", &f);

    for ( i = 1; i <= f; i++)
    {
        calc = i*calc;
        printf("\n%d", calc);
    }
    
    printf("\n\n resultado:%d", calc);
}