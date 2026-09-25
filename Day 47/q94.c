//Find the longest word in a sentence.

#include <stdio.h>
int main() {
    printf("Enter a sentence: ");

    char str[100];
    int n = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        str[n] = ch;
        n++;
        scanf("%c", &ch);
    }

    int a = 0, b = 0;
    int c = 0, d = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || str[i] == ' ') {
            if (c > a) {
                a = c;
                b = d;
            }
            c = 0;
            d = i + 1;
        } else {
            c++;
        }
    }

    for (int i = b; i < b + a; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
