//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main () {
 int n,i,s=0 ;
 printf("Enter the value of n \n");
 scanf("%d" ,&n);
 for (i=1 ;i<=(2*n-1) ; i+=2) {
  s = s+i ;
 }
 printf("The sum is : %d" ,s);
 return 0 ;
} 

 
 
 
 
 
 
 
