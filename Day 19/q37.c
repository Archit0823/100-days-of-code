//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main () {
 int a,b,ma,mi,i,l;
 printf("Enter the numbers one by one \n");
 scanf("%d %d" ,&a,&b);
 if (a>b) {
  ma=a;
  mi=b;
 } else {
    ma=b;
    mi=a;
 }
 for (i=1 ; i<=a*b ;i++) {
  if (ma*i%mi==0) {
   printf("The LCM is :%d\n",ma*i);
   break;
  }
 }
 return 0 ;
}
