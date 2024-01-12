#include<stdio.h>


int main(void)
{
    int matricula;
    float horas, valor, sal;
    

    printf("\nQual a sua matricula? ");
    scanf("%i", &matricula);

    printf("Qual a quantidade de horas trabalhadas? ");
    scanf("%f", &horas);

    printf("Qual e o valor pago por hora? ");
    scanf("%f", &valor);

    sal = horas*valor;

    printf("Matricula do funcionario %i", matricula);
    
    printf("\nSeu salario total %.2f reais", sal);
    
}