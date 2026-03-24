// Allocate an array of 5 integers dynamically using malloc
// Check if allocation succeeded — print error and return if not
// Fill the array with values 10, 20, 30, 40, 50
// Print all values
// Free the memory
// Set pointer to NULL after freeing
// Try to demonstrate WHY setting to NULL matters — add a comment
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL){
        printf("Error ");
        return 0;
    }
    printf("Enter the array values \n");
    for(int i=0;i<5;i++){
        scanf("%d",(ptr + i));
    }
    for(int i = 0;i<5;i++){
        printf("%d ",*(ptr + i));
    }
    free(ptr);
    ptr = NULL;
    //if i leave without declaring NULL to it , it will become dangling pointer and it is dangerous
}