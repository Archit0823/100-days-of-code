//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main () {
 int n,i,a,s=0;
 printf("Enter the number \n");
 scanf("%d",&n);
 while (n!=0) {
  a=n%10;
  s=s+a;
  n=n/10;
 }
 printf("The sum is :%d\n" ,s);
 return 0;
}
