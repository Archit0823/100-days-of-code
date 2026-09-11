//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int n, a[10] = {0}, i, b, c = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0) {
        b = n % 10;
        a[b]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++) {
        if (a[i] > c)
            c = a[i];
    }

    for (i = 0; i < 10; i++) {
        if (a[i] == c) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
