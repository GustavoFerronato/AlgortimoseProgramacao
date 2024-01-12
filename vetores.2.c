int main(void) {
int x=0, i, vetorA[30], vetorB[30], vetorS[60];

for (i=0; i < 30; i++)
{
printf("Digite o %dº valor do primeiro vetor: ",i);
scanf("%d", &vetorA[i]);
vetorS[x] = vetorA[i];
x++;
printf("Digite o %dº valor do segundo vetor: ",i);
scanf("%d", &vetorB[i]);
vetorS[x] = vetorB[i];
x++;

}
for (i=0; i < 60; i++)
{
printf("%d\n", vetorS[i]);
}
}