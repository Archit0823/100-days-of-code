//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main () {
 int a,b,n ;
 printf("Enter 1 for Addition 2 for subtraction 3 for Multlipication 4 for division and 5 for finding remainder \n");
 scanf("%d" ,&n);
 printf("Enter the two numbers \n");
 scanf("%d %d" ,&a ,&b);
 switch (n) {
  case 1 :
   printf("the sum is %d" ,a+b);
   break;
  case 2 :
   printf("the diffrence is %d" ,a-b);
   break;
  case 3 :
   printf("the product is %d" ,a*b);
   break;
  case 4 :
   printf("the quotient is %d" ,a/b);
   break;
  case 5 :
   printf("the remainder is %d" ,a%b);
   break;
 }
 return 0 ;
}
