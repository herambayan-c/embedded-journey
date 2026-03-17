// Write a function swap() that takes TWO pointers
// Swap the values of two variables using pointers
// Print values before and after swap in main
#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter a and b respectively : ");
    scanf("%d",&a);
    scanf("%d",&b);
    int *p,*q;
    p = &a;
    q = &b;
    printf("values before swapping a=%d , b=%d \n",a,b);
    swap(p,q);
    //swap(&a,&b); this also works as the funciton just expects the address not the pointer variable
    printf("values after swapping a = %d ,b = %d ",a,b);
}
void swap(int *a,int *b){
    int z;
    z = *a;
    *a = *b;
    *b = z; 
}