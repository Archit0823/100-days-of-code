//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main () {
    int n,i ;
    printf("Enter the length of array");
    scanf("%d" ,&n);
    int a[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a[i]);
    }
    for (i=0;i<n;i++) {
        printf("%d" ,a[i]);
        printf(" ");
    }
    return 0;
}
