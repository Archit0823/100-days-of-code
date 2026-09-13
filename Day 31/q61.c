//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main () {
    int n,i,s,z=0 ;
    printf("Enter the length of array");
    scanf("%d" ,&n);
    int a[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d" ,&s);
    for (i=0;i<n;i++) {
     if (a[i] == s) {
      printf("Found at index %d" ,i);
      break;
     }
    }
    if (i==n) {
     printf("Not found");
    }
    return 0;
   }
