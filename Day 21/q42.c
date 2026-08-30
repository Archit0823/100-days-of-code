//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main () {
 int n,a,i,s=0;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 for (i=1 ; i<n ;i++) {
  if (n%i==0) {
   s=s+i;
  }
 }
 if (s==n) {
  printf("Perfect number \n");
 } else {
    printf("Not a Perfect number");
 }
 return 0 ;
}
