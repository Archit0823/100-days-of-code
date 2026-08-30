//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main () {
 int n,i,b,c=0,a,s=0;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 for (i=10 ; i<=n ; i=i*10) {
  c++ ;
  if (n/i <= 9) {
    break ;
  }
 }
 c++ ;
 s=(n%10)*(pow(10,(c-1)));
 n=n/10;
 i=10;
 while (n!=0) {
  a=n%10;
  if (n<=9) {
   s=s+a;
   break;
  }
  s=s+a*i;
  i=i*10;
  n=n/10;
 }
 printf("The number is %d\n" ,s);
 return 0;
}
  
  
  
