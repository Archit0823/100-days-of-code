//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>
int main () {
 int n,i,j;
 printf("Enter the value of n");
 scanf("%d" ,&n);
 for (i=1;i<=n;i+=2) {
  for (j=1;j<=i;j++) {
   printf("*");
   printf("\n");
  }
  printf(" ");
  printf("\n");
 }
 
 for (i=1;i<=n-2;i+=2) {
  for (j=n-2;j>=i;j--) {
   printf("*");
   printf("\n");
  }
  printf(" ");
  printf("\n");
 }
 return 0;
}
   
