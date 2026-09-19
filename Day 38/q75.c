//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

void add(int a[100][100], int b[100][100], int c[100][100], int d, int e)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < e; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int d, e, f, g;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &d, &e);

    printf("Enter first matrix:\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < e; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &f, &g);

    printf("Enter second matrix:\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < g; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (d != f || e != g)
    {
        printf("Matrix addition not possible");
        return 0;
    }

    add(a, b, c, d, e);

    printf("Sum:\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < e; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
