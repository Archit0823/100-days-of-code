//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main () {
 float n,i,a,s=1;
 printf("Enter the value on n \n");
 scanf("%f",&n);
 a=2;
 while (a<=n) {
  s=s+((2*a)-1)/(2*a);
  a++;
 }
 printf("The sum is %f" ,s);
 return 0;
}
   
