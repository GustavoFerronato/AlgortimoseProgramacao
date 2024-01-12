#include <stdio.h>
#define max 3

int trasp(int matriz[max][max])
{
    int i, j;
    int transposta[max][max];
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            matriz[i][j] = transposta[i][j];
        }
    }
}

int main()
{
    int x[max][max] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j;

    printf("Matriz Original:\n");
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    trasp(x);
    printf("\n----transposta------\n");
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}