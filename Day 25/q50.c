//Q50: Write a program to print the following pattern:
/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main () {
 int n,i,j,m;
 printf("Enter the value of n");
 scanf("%d" ,&n);
 for (i=1;i<=n;i++) {
  for (j=n;j>=i;j--) {
   printf("*");
  }
  printf("\n");
  m=i;
  while (m!=0) {
  printf(" ");
  m--;
  }
 }
 return 0;
}
  
   
