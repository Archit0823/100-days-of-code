/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main () {
 int a,f ;
 printf("No of units ? \n");
 scanf("%d" ,&a);
 if (a<=100) {
  f = a*5;
  printf("bill is ₹%d" ,f);
 }
 else if (a<=200) {
  f = 500 + (a-100)*7 ;
  printf("bill is ₹%d" ,f);
 }
 else if (a<=300) {
  f= 500 + 700 + (a-200) *10 ;
  printf("bill is ₹%d" ,f);
 } else {
    f = 500 + 700 + 1000 + (a-300)*12 ;
    printf("bill is ₹%d" ,f);
 }
 return 0;
}
