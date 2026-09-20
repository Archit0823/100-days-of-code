//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int sum(int a[100][100], int b)
{
    int c = 0;

    for (int i = 0; i < b; i++)
    {
        c = c + a[i][i];
    }

    return c;
}

int main()
{
    int a[100][100], b, c, d;

    printf("Enter rows and columns: ");
    scanf("%d %d", &b, &c);

    if (b != c)
    {
        printf("Matrix is not square");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    d = sum(a, b);

    printf("Sum = %d", d);

    return 0;
}
