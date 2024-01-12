#include <stdio.h>
#define dim 3

int main()
{

    char velha[dim][dim] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    int i, j;

    velha[0][0] = 'x';
    velha[1][1] = 'x';
    velha[0][2] = 'o';
    velha[2][2] = 'o';

    for (i = 0; i < dim; i++)
    {
        for (j = 0; j < dim; j++)

            printf("%c %c", velha[i][j], j == dim - 1 ? ' ' : '|');
        if (i != dim - 1)
            printf("\n--------\n");
    }
}
