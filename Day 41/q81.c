//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int length(char a[])
{
    int b = 0;

    while (a[b] != '\0')
    {
        b++;
    }

    return b;
}

int main()
{
    char a[100];
    int b;

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    b = length(a);

    if (a[b - 1] == '\n')
    {
        b--;
    }

    printf("%d", b);

    return 0;
}
