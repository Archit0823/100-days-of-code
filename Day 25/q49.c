//Q49: Write a program to print the following pattern:
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
 int n,m,i,j,c=1;
 printf("Enter the value of n");
 scanf("%d" ,&n);
 m=n;
 for (i=1;i<=n;i++) {
  for (j=1;j<=i;j++) {
   printf("%d",m);
   m++;
  }
  m=n-c;
  c++;
  printf("\n");
 }
 return 0;
}
