#include <stdio.h>

int main(void)
{
    int i = 0, soma = 0;

    while (i < 1000)
    {
        if (i % 2 == 0)
        {
            soma = i + soma;
        }
        i++;
 }
    printf("%d", soma);
}