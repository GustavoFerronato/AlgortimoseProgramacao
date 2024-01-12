#include <stdio.h>

int main()
{

    int x, vet[20] = {'0'}, i, y = 0;

    do
    {
        printf("Digite o numero: ");
        scanf("%d", &x);
    } while ((x < 1) || (x > 50));

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            
            vet[y] = i;
            y++;
            
        }
    }

    for ( i = 0; i < 20; i++)
    {
       printf("\nVetor posicao %d: %d", i + 1, vet[i]);
       
    }
    
}