// Store 5 numbers in an array
// Write a FUNCTION that searches for a given number
// Return 1 if found, 0 if not found
// Print "Found" or "Not Found" in main
#include<stdio.h>
int search(int [],int,int);
int main(){
    int array[5],i,element_to_search,val;
    printf("Enter the array elements : ");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&element_to_search);
    val = search(array,5,element_to_search);
    if (val == 1)
    {
        printf("Found");
    }else
    printf("Not Found");    
}
int search(int ary[],int size,int search_element){
    for (int i = 0; i < size; i++){
        if(search_element == ary[i]){
            return 1;
        }
}
return 0;
    
}
