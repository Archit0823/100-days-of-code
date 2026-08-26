//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main () {
 int m,n,a,s=0;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 m=n;
 while (n!=0) {
  a=n%10 ;
  s=s*10+a;
  n/=10 ;
 }
 if (m==s) {
  printf("Palindrome \n");
 } else {
    printf("Not palindrome \n");
 }
 return 0 ;
}
