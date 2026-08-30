//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main () {
 int n,a,p=1;
 printf("Enter the number \n");
 scanf("%d",&n);
 while (n!=0) {
  a=n%10;
  if (a%2!=0) {
   p=p*a ;
  }
  n=n/10;
 }
 printf("The product is %d \n",p);
 return 0 ;
}
