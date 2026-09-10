//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main() {
    int n, i, a;

    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    for (i = 0; i < n / 2; i++) {
        a = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = a;
    }

    for (i = 0; i < n; i++)
        printf("%d ", x[i]);

    return 0;
}
