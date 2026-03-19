// Write a function that takes an array and its size
// The function finds the LARGEST element
// Returns a POINTER to that element (not the value)
// In main, use the returned pointer to:
//   - Print the largest value
//   - Modify it to 999
//   - Print the modified array to confirm change happened
#include<stdio.h>
int *largest(int[],int);
int main(){
    int ary[5];
    printf("Enter the array elements : ");
    for(int i =0;i<5;i++){
        scanf("%d",&ary[i]);
    }
    int *maxi = largest(ary,5);
    printf("The largest value is %d \n",*maxi);
    *maxi = 999;
    for(int i=0;i<5;i++){
        printf("%d ",ary[i]);
    }
}
int *largest(int ary[],int size){
    int max = ary[0];
    int max_index = 0;
    for(int i=0;i<size;i++){
        if(ary[i]>max){
            max = ary[i];
            max_index = i;
        }
    }
    return &ary[max_index];
}