//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main () {
 int n ;
 printf("Enter the number \n");
 scanf("%d" ,&n);
 switch (n) {
  case 1 :
    printf("January");
    printf("31");
    break ;
   case 2 :
    printf("February");
    printf("28");
    break ;
   case 3 :
    printf("March");
    printf("31");
    break ;
   case 4 :
    printf("April");
    printf("30");
    break ;
   case 5 :
    printf("May");
    printf("31");
    break ;
   case 6 :
    printf("June");
    printf("30");
    break ;
   case 7 :
    printf("July");
    printf("31");
    break ;
   case 8 :
    printf("August");
    printf("31");
    break ;
   case 9 :
    printf("September");
    printf("30");
    break ;
   case 10 :
    printf("October");
    printf("31");
    break ;
   case 11 :
    printf("November");
    printf("30");
    break ;
   case 12 :
    printf("December");
    printf("31");
    break ;
   default :
    printf("Wrong value");
    break ;
  }
}
