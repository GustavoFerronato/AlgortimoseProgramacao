#include <stdio.h>
//Semelhante ao anterior, só que recebe mais um parâmetro indicando aquilo que se quer saber
// 'h' - horas, 'm'- minutos e 's' - segundos

int conversor(int num, char tempo)
{
    if (tempo == 's')
    {
        return num;
    }
    else if (tempo == 'm')
    {
        return num * 60;
    }
    else if (tempo == 'h')
    {
        return num * 60 * 60;
    }
}

main(){

    char x;
    printf(" h para horas\n m para minutos\n s para segundos");
    printf("\nDeseja saber quantos seguntos tem em qual unidade de tempo?");
    scanf("%c", &x);
    printf("%d",conversor(1,x));
}