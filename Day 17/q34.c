//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main () {
 int n,i,c;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 for (i=1;i<=n;i++) {
  if (n%i == 0) {
   c++ ;
  }
 }
 if (c==2) {
  printf("The number is prime");
 } else {
    printf("The number is not prime");
 }
 return 0 ;
}
