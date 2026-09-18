//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

void transpose(int a[100][100], int b, int c)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
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

    printf("Transpose:\n");
    transpose(a, b, c);

    return 0;
}
