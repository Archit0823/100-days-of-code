//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int distinct(int a[100][100], int b, int c)
{
    if (b != c)
    {
        return 0;
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = i + 1; j < b; j++)
        {
            if (a[i][i] == a[j][j])
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

    d = distinct(a, b, c);

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
