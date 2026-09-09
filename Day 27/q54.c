/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(){

    int n, i, j, s;

    printf("Enter number of stars: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Enter odd num of stars");
        return 0;
    }

    for (i = 1; i <= n; i += 2)
    {
        s = (n - i) / 2;

        for (j = 1; j <= s; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (i = n - 2; i >= 1; i -= 2)
    {
        s = (n - i) / 2;

        for (j = 1; j <= s; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}




