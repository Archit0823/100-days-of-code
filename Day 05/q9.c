//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main () {
 float p,r,t ;
 printf("Enter Principal rate and time one by one \n");
 scanf("%f %f %f" ,&p ,&r,&t);
 printf("The Simple Intrest is : %f \n" ,(p*r*t)/100);
 printf("The Compound Intrest is : %f \n" ,p*pow((1+r/100),t) - p);
 return 0 ;
}
 
