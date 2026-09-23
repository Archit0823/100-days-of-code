//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

void upper(char a[])
{
    int b = 0;

    while (a[b] != '\0')
    {
        if (a[b] >= 'a' && a[b] <= 'z')
        {
            a[b] = a[b] - 32;
        }

        b++;
    }
}

int main()
{
    char a[100];

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    upper(a);

    printf("%s", a);

    return 0;
}
