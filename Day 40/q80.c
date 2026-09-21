//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

void multiply(int a[100][100], int b[100][100], int c[100][100],
              int d, int e, int f)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < f; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < e; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
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

    if (e != f)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }

    multiply(a, b, c, d, e, g);

    printf("Product:\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < g; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

