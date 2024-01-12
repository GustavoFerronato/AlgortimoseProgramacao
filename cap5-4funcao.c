#include <stdio.h>
//Devolver o valor absoluto de x

int abs(int x)
{
    if (x >= 0)
        return x;
    else
        return -(x);
}

main (){
    printf("%d", abs(-550));
}