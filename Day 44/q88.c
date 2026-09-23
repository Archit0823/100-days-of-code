//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void replace(char a[])
{
    int b = 0;

    while (a[b] != '\0')
    {
        if (a[b] == ' ')
        {
            a[b] = '-';
        }

        b++;
    }
}

int main()
{
    char a[100];

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    replace(a);

    printf("%s", a);

    return 0;
}
