// Declare an array of 5 integers
// Declare a pointer to the first element
// Using ONLY pointer arithmetic (no array indexing like arr[i]):
// Print each element
// Print the address of each element
// Print the difference between consecutive addresses
#include<stdio.h>
int main(){
    int ary[5]={1,2,3,4,5};
    int *ptr = &ary[0];
    for(int *i = ptr;i<(ptr+5);i++){
        printf("element is : %d and address of the element is %p \n",*i,i);
    }
    int b =((ptr+1)-ptr);
    printf("The difference between consecutive addresses is %d",b*sizeof(int));

}