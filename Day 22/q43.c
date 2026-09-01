//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main () {
 int m,n,a,s=0,p;
 printf("Enter the number");
 scanf("%d",&n);
 m=n;
 while (n!=0) {
  a=n%10;
  p=1;
  while(a!=0) {
   p=p*a;
   a--;
  }
  s=s+p;
  n=n/10;
 }
 if (s==m) {
  printf("Strong Number");
 } else {
    printf("Not Strong Number");
 }
 return 0;
}
