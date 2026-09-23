//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int frequency(char a[], char b)
{
    int c = 0, d = 0;

    while (a[c] != '\0')
    {
        if (a[c] == b)
        {
            d++;
        }

        c++;
    }

    return d;
}

int main()
{
    char a[100], b;
    int c;

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    printf("Enter character: ");
    scanf("%c", &b);

    c = frequency(a, b);

    printf("%d", c);

    return 0;
}
