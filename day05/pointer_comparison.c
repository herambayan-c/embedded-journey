// Declare an array of 5 integers
// Use two pointers - one at start, one at end
// Move them toward each other
// Print elements from both ends simultaneously
// Stop when pointers meet or cross
#include<stdio.h>
int main(){
    int ary[5]={1,2,3,4,5};
    int *p,*q;
    p = &ary[0];
    q = &ary[4];
    while (p <= q)
    {
        printf("The value from beginning is %d and from the end is %d \n",*p,*q);
        p++;
        q--;
    }
    
}