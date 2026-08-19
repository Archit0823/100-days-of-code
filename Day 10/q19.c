//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main () {
 int a,b,c ;
 printf("enter the values of 3 sides one by onea \n");
 scanf("%d %d %d" ,&a ,&b ,&c);
 if (a==b && b==c) {
  printf("It is an equitorial triangle");
 } else if (a!=b && b!=c && a!=c) {
    printf("It is a Scalene triangle");
 } else {
    printf("It is an Isosceles triangle");
 }
 return 0 ;
}   
