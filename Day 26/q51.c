//Q51: Write a program to print the following pattern:
/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main () {
 int o,n,k,m,i,j;
 printf("Enter the value of n");
 scanf("%d" ,&n);
 o=n;
 for (i=1;i<=n;i++) {
  m=o-1;
  while (m!=0) {
   printf(" ");
   m--;
  }
  k=o;
  for (j=1;j<=i;j++) {
   printf("%d" ,k);
   k++;
  }
  o--;
  printf("\n");
 }
 return 0;
}
