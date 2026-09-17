//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int sum(int a[100][100], int b, int c)
{
    int d = 0;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            d = d + a[i][j];
        }
    }

    return d;
}

int main()
{
    int a[100][100], b, c, d;

    printf("Enter rows and columns: ");
    scanf("%d %d", &b, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    d = sum(a, b, c);

    printf("Sum = %d", d);

    return 0;
}
