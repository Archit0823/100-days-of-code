//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main () {
 int s,h,m,se,n ;
 printf("Enter time in sec \n");
 scanf("%d" ,&s);
 h=s/3600 ;
 n=s%3600 ;
 m=n/60 ;
 se=n%60 ;
 printf("The output is %d : %d : %d ",h ,m ,se);
 return 0;
}
