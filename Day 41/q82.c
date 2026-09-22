//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

void print(char a[])
{
    int b = 0;

    while (a[b] != '\0')
    {
        if (a[b] != '\n')
        {
            printf("%c\n", a[b]);
        }
        b++;
    }
}

int main()
{
    char a[100];

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    print(a);

    return 0;
}
