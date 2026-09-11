//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main () {
    int n,i,m ;
    printf("Enter the length of first array");
    scanf("%d" ,&n);
    int a1[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a1[i]);
    }
    printf("Enter the length of second array");
    scanf("%d" ,&m);
    int a2[m];
    for (i=0;i<m;i++) {
        printf("Enter the element");
        scanf("%d" ,&a2[i]);
    }
    int a[n+m];
    for (i=0;i<n+m;i++) {
     if (i<n) {
      a[i] = a1[i];
     } else {
        a[i] = a2[i-n];
     }
    }
    for (i=0;i<m+n;i++) {
        printf(" %d" ,a[i]);
    }
    return 0;
}
