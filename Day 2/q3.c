//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main () {
 int l,b;
 printf("Enter length and breadth one by one \n");
 scanf("%d" ,&l);
 scanf("%d" ,&b);
 printf("The area of Rectangle is : %d \n", l*b);
 printf("The perimeter of Rectangle is :%d \n", 2*(l+b));
 return 0;
 }
 
 
