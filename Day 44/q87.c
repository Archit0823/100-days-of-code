//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

void count(char a[], int *b, int *c, int *d)
{
    int i = 0;

    *b = 0;
    *c = 0;
    *d = 0;

    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            (*b)++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            (*c)++;
        }
        else if (!((a[i] >= 'a' && a[i] <= 'z') ||
                   (a[i] >= 'A' && a[i] <= 'Z')) &&
                 a[i] != '\n')
        {
            (*d)++;
        }

        i++;
    }
}

int main()
{
    char a[100];
    int b, c, d;

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    count(a, &b, &c, &d);

    printf("Spaces=%d, Digits=%d, Special=%d", b, c, d);

    return 0;
}
