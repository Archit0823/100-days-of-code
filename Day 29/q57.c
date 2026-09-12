//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/
#include <stdio.h>
int main () {
    int n,s=0,i ;
    printf("Enter the length of array");
    scanf("%d" ,&n);
    int a[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a[i]);
    }
    for (i=0;i<n;i++) {
        s=s+a[i];
    }
    printf("The sum is %d" ,s);
    return 0;
}
