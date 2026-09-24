// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                printf("%c", str[i]);
                return 0;
            }
        }
    }

    return 0;
}
