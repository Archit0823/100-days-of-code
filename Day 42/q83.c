//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

void count(char a[], int *b, int *c)
{
    int i = 0;

    *b = 0;
    *c = 0;

    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
            a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
            a[i] == 'O' || a[i] == 'U')
        {
            (*b)++;
        }
        else if ((a[i] >= 'a' && a[i] <= 'z') ||
                 (a[i] >= 'A' && a[i] <= 'Z'))
        {
            (*c)++;
        }

        i++;
    }
}

int main()
{
    char a[100];
    int b, c;

    printf("Enter a string: ");
    fgets(a, 100, stdin);

    count(a, &b, &c);

    printf("Vowels=%d, Consonants=%d", b, c);

    return 0;
}
