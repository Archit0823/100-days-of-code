//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

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
 int m=n;
 while (n!=0) {
  a=n%10;
  s=s+(pow(a,c));
  n/=10 ;
 }
 if (s==m) {
  printf("Armstrong");
 } else {
    printf("Not Armstrong");
 }
 return 0;
}
  
  
 
