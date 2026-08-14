//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main (){
 int a,b,c;
 printf("Enter numbers one by one \n");
 scanf("%d" ,&a);
 scanf("%d" ,&b);
 c=a;
 a=b;
 b=c;
 printf("The numbers after swap are %d %d \n" ,a,b);
 return 0 ;
}
