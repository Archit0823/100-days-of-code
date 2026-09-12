//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main () {
    int n,i,p=0,ne=0,z=0 ;
    printf("Enter the length of array");
    scanf("%d" ,&n);
    int a[n];
    for (i=0;i<n;i++) {
        printf("Enter the element");
        scanf("%d" ,&a[i]);
    }
    for (i=0;i<n;i++) {
    	if (a[i]>0) {
    	 p++;
    	} else if (a[i] < 0 ) {
    	   ne--;
    	} else {
    	   z++ ;
        }
    }
    printf("Positive %d Negative %d Zero %d" ,p,ne,z);
    return 0;
}
    	
     
