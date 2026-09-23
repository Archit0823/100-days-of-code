//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

void toggle(char a[])
{
    int b = 0;

    while (a[b] != '\0')
    {
        if (a[b] >= 'a' && a[b] <= 'z')
        {
            a[b] = a[b] - 32;
        }
        else if (a[b] >= 'A' && a[b] <= 'Z')
        {
            a[b] = a[b] + 32;
        }

        b++;
    }
}

int main()
{
    char a[100];

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    toggle(a);

    printf("%s", a);

    return 0;
}
