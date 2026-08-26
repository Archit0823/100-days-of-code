//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main () {
 int a,n,s,p=1 ;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 while (n!=0) {
  a=n%2;
  n=n/2 ;
  s=s+a*p ;
  p=p*10;
 }
 printf("The binary representation is : %d \n",s);
 return 0;
}
 
  
 
  
  
 
 
