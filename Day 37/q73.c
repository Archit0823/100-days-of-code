//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

void sum(int a[100][100], int b, int c, int d[100])
{
    for (int i = 0; i < b; i++)
    {
        d[i] = 0;

        for (int j = 0; j < c; j++)
        {
            d[i] = d[i] + a[i][j];
        }
    }
}

int main()
{
    int a[100][100], b, c, d[100];

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

    sum(a, b, c, d);

    printf("Row sums:\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", d[i]);
    }

    return 0;
}
