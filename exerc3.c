#include<stdio.h>

int main(void)
{
    float num1=0, num2=0, multi=0;
    printf("\nDigite valor um:");
    scanf("%f",&num1);

    printf("\nDigite valor dois:");
    scanf("%f",&num2);

    multi = num1*num2;

    printf("\n%.2f multiplicado por %.2f e igual a %.2f",num1, num2, multi);
}