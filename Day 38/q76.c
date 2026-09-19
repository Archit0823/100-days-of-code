//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int symmetric(int a[100][100], int b, int c)
{
    if (b != c)
    {
        return 0;
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != a[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
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

    d = symmetric(a, b, c);

    if (d == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
