//Q17: Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>
int main () {
 int a,b,c,d;
 float x,y ;
 printf("Enter a,b,c one by one \n");
 scanf("%d %d %d" ,&a ,&b ,&c);
 x = (-b + sqrt(b*b-4*a*c))/(2*a);
 y = (-b - sqrt(b*b-4*a*c))/(2*a);
 printf("The roots are %f and %f \n" ,x ,y);
 d = b*b -4*a*c ;
 if (d > 0) {
    printf("Roots are real and distinct") ;
 } else if (d < 0 ) {
    printf("Roots are imaginary") ;

 } else {
    printf("Roots are real and equal");
 }
 
 return 0 ;

}
