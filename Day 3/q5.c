//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main () {
 float t;
 printf("Enter the temprature \n");
 scanf("%f" ,&t);
 printf("The temprature in Fahrenheit is : %f \n" ,(t*9)/5+32);
 return 0 ;
}
