//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main () {
 int n,a,s=0,m,p=1,c=0 ;
 printf("Enter the number \n");
 scanf("%d",&n);
  while (n!=0) {
  a=n%10;
  if (a==1) {
   m=0;
  } else {
     m=1;
  }
  s=s+m*p;
  n=n/10;
  p=p*10;
  c++;
 }
 printf("%0*d",c,s);
 return 0;
}
  
  
