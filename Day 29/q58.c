//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main () {
    int ma,mi,n,i ;
    printf("Enter the length of array");
    scanf("%d" ,&n);
    int a[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a[i]);
    }
    ma=a[0];
    for (i=1;i<n;i++) {
        if(a[i]>ma) {
            ma=a[i];
        }
    }
     mi=a[0];
    for (i=1;i<n;i++) {
        if(a[i]<mi) {
            mi=a[i];
        }
    }
    printf("The maximum is %d and minimum is %d" ,ma,mi);
    return 0;   
}
