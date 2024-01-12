#include <stdio.h>

int main()
{

    int num, i,  soma = 0, par = 0, impar = 0;
    float media = 0;
    for (i = 1; i <= 6; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &num);
        soma = soma + num;

        if (num % 2 == 0)
        {
            par++;
        }
        else
            impar++;
    }

    media = soma/(float)6;
    printf("A media dos valor eh %.2f", media);
    printf("\n%d numeros pares", par);
    printf("\n%d numeros impares", impar);
}
