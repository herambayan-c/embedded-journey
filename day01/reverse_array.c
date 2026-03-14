// reverse_array.c
// Store 5 numbers in an array
// Print the original array
// Reverse it IN PLACE - no second array allowed
// Hint: think about swapping elements
// Hint: you only need to loop halfway through
// Print the reversed array
#include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("Enter the data for the array ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int j,b;
    for(j=0;j<2;j++){
        b=arr[j];
        arr[j]=arr[4-j];
        arr[4-j]=b;
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}