//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <math.h>
int main () {
 int s=0,a,n,i,c=0 ;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 for (i=10 ; i<=n ; i=i*10) {
  c++ ;
  if (n/i <= 9) {
    break ;
  }
 }
 c++ ;
 while(c!=0) {
  a=n%10 ;
  c-- ;
  s=s+a*(pow(10,c));
  n=n/10;
 }
 printf("The number reversed is %d.\n" ,s);
 return 0 ;
}
  
   
   
