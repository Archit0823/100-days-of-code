//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

void reverse(char a[])
{
    int b = 0, c = 0;
    char d;

    while (a[b] != '\0')
    {
        if (a[b] != '\n')
        {
            c++;
        }
        b++;
    }

    b = 0;
    c--;

    while (b < c)
    {
        d = a[b];
        a[b] = a[c];
        a[c] = d;

        b++;
        c--;
    }
}

int main()
{
    char a[100];

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    reverse(a);

    printf("%s", a);

    return 0;
}
