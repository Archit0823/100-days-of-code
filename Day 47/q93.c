//Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    printf("Enter first string: ");

    char str1[100];
    int n1 = 0;
    char ch;
    scanf("%c", &ch);
    while (ch != '\n') {
        str1[n1] = ch;
        n1++;
        scanf("%c", &ch);
    }

    printf("Enter second string: ");

    char str2[100];
    int n2 = 0;
    scanf("%c", &ch);
    while (ch != '\n') {
        str2[n2] = ch;
        n2++;
        scanf("%c", &ch);
    }

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < n1; i++) {
        count1[str1[i] - 'a']++;
    }

    for (int i = 0; i < n2; i++) {
        count2[str2[i] - 'a']++;
    }

    int flag = 1;
    if (n1 != n2) {
        flag = 0;
    } else {
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                flag = 0;
            }
        }
    }

    if (flag == 1) {
        printf("Anagrams");
    } else {
        printf("Not anagrams");
    }

    return 0;
}
