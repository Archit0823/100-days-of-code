/*23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main () {
 int a,f ;
 printf("No of days ?? \n");
 scanf("%d" ,&a);
 if (a<=5) {
  f = a*2;
  printf("fine is ₹%d" ,f);
 }
 else if (a<=10) {
  f = 10 + (a-5)*4 ;
  printf("fine is ₹%d" ,f);
 }
 else if (a<=30) {
  f= 10 + 20 + (a-10) *6 ;
  printf("fine is ₹%d" ,f);
 } else {
    printf("Membership cancelled");
 }
 return 0;
}
