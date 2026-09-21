//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

void diagonal(int a[100][100], int b, int c)
{
    for (int k = 0; k < b + c - 1; k++)
    {
        for (int i = 0; i < b; i++)
        {
            int j = k - i;

            if (j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}

int main()
{
    int a[100][100], b, c;

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

    printf("Diagonal traversal:\n");
    diagonal(a, b, c);

    return 0;
}
