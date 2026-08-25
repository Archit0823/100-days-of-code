//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main () {
 int i , n ,p=1;
 printf("Enter the value of n \n");
 scanf("%d" ,&n);
 for (i=1 ; i<=n ; i++) {
  p=p*i ;
 }
 printf("The factorial is : %d" ,p);
 return 0 ;
}
