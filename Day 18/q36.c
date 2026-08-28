//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main () {
 int a,b,m,i,h;
 printf("Enter the numbers one by one \n");
 scanf("%d %d" ,&a,&b);
 if (a>b) {
  m=a ;
 } else {
    m=b ;
 }
 for (i=1 ; i<=m ; i++){
  if (a%i==0 && b%i==0) {
   h=i ;
  }
 }
 printf("The hcf is : %d\n" ,h);
 return 0;
}
