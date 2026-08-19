//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main () {
 int a ;
 printf("Enter the number \n");
 scanf("%d" ,&a);
 switch (a) {
  case 1 :
    printf("Monday");
    break ;
  case 2 :
    printf("Tuesday");
    break ;
  case 3 :
    printf("Wednesday");
    break ;
  case 4 :
    printf("Thursday");
    break ;
  case 5 :
    printf("Friday");
    break ;
  case 6 :
    printf("Saturday");
    break;
  case 7 :
    printf("Sunday");
    break;
  default :
    printf("Not a valid Number");
    break ;
 }
 return 0 ;
}
