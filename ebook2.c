#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, media;

  printf("Qual a nota um? ");
  scanf("%f",&nota1);
  printf("Qual a nota dois? ");
  scanf("%f",&nota2);
  printf("Qual a nota tres? ");
  scanf("%f",&nota3);
  media = ((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
  printf("Sua media ponderada e %.2f", media);

}