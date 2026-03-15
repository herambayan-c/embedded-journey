// Write a FUNCTION that takes an array and its size
// Calculate the sum of all elements inside the function
// Print the sum in main
#include<stdio.h>
int sum(int [],int);
int main(){
    int arr[5],i;
    printf("Enter the array elements");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int total_sum = sum(arr,5);
    printf("The total sum of the array elements is : %d",total_sum);
}
int sum(int x[],int y){
    int a = 0,i;
    for(i=0;i<y;i++){
        a = a+x[i];
    }
    return a;
}