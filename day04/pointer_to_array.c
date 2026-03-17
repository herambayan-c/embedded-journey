// Declare an array of 5 integers
// Use a pointer to traverse the array
// Print each element using the pointer
// Print the address of each element
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the elements of the array : ");
    for(int i =0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr= arr;
    for(int *i=ptr;i<=&arr[4];i=(i+1)){
        printf("The element is %d and the address of the element is %p \n",*i,i);
    }
}