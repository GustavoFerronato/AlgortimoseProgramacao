#include <stdio.h>

int conversor(int num, char tempo)
{
    if (tempo == 'h')
    {
        return num;
    }
    else if (tempo == 'm')
    {
        return num * 60;
    }
    else if (tempo == 's')
    {
        return num * 60 * 60;
    }
}

main(){

    printf("%d",conversor(1,'s'));
}