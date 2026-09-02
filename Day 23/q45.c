//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
int main () {
 float n,a,s=0,i=1;
 printf("Enter the value of n");
 scanf("%f",&n);
 a=1;
 while (a<=n) {
  s=s+(a*2)/((a*2)+i);
  i=i+2;
  a++;
 }
 printf("The sum is %f",s);
 return 0;
}
  
