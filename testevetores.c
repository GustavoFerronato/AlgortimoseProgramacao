#include <stdio.h>

int main()
{
    int n, r, i;
    int x, y;

    printf("quantos alunos?");
    scanf("%d", &n);

    int pergunta1[n] , pergunta2[2] , pergunta3[2];

    for (i = 0; i < n; i++)
    {
        printf("pergunta 1:");
        scanf("%d", &r);

        switch (r)
        {
        case 1:
            pergunta1[i] = 1;

            break;
        case 2:
            pergunta1[i] = 0;

            break;

        default:

            break;
        }

        printf("pergunta 2:");
        scanf("%d", &r);

        switch (r)
        {
        case 1:
            pergunta2[i] = 1;
            break;
        case 2:
            pergunta2[i] = 0;
            break;

        default:
            pergunta2[i] = 999;
            break;
        }

        printf("pergunta 3:");
        scanf("%d", &r);
        printf("-------------------\n");

        switch (r)
        {
        case 1:
            pergunta3[i] = 1;
            break;
        case 2:
            pergunta3[i] = 0;
            break;

        default:
            break;
        }

        // printf("%d", pergunta1[i]);
        // printf("%d", pergunta2[i]);
        // printf("%d\n", pergunta3[i]);
    }
    printf("Participante 1111111111111111");
    for (x = 0; x < n; x++)
    {
        printf("\nParticipante %d", x + 1);
            for ( y = 0; y<n; y++)
            {
                printf("\nrespostas");
                printf("\npergunta %d: %d", y+1, pergunta1[y]);
                printf("\npergunta %d: %d", y+1, pergunta2[y]);
                printf("\npergunta %d: %d", y+1, pergunta3[y]);
                
            }
            
    }
}
