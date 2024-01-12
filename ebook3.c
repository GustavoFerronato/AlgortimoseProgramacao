#include<stdio.h>

int main(void)
{
    float cel, fah;

     printf("========== Conversor de temperatura =========");
    printf("\n\nQual a temperatura em Fahrenheit? ");
    scanf("%f", &fah);
    cel = 5*(fah-32)/9;
    printf("%.2f graus fahrenheit sao %.2f graus celsius", fah, cel);
    printf("\n\n=============================================");

}