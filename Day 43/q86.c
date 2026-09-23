//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int palindrome(char a[])
{
    int b = 0, c = 0;

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
        if (a[b] != a[c])
        {
            return 0;
        }

        b++;
        c--;
    }

    return 1;
}

int main()
{
    char a[100];
    int b;

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    b = palindrome(a);

    if (b == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
