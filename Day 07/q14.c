//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main () {
 char c ;
 printf("Enter the Alphabet \n");
 scanf("%c" ,&c);
 if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
  printf("It is a vowel");
 } 
 else {
  printf("It is a consonant");
 }
 return 0 ;
}
