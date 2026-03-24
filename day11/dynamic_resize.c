// Allocate an array of 3 integers using malloc
// Fill with values 1, 2, 3
// Print the array
// Resize it to hold 6 integers using realloc
// Fill new positions with 4, 5, 6
// Print the full resized array
// Free and NULL the pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = (int *)malloc(3 * sizeof(int));
    if(ptr == NULL){
        printf("Error \n");
        return 0;
    }
    printf("Enter array data \n");
    for(int i=0;i<3;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<3;i++){
        printf("%d ",*(ptr+i));
    }
    int *temp;
    temp = realloc(ptr , 6*sizeof(int));
    if(temp == NULL){
        printf("Error \n");
        free(ptr);
        return 0;
    }else{
        ptr = temp;
    }
    printf("\n Enter the next 3 integers of the array \n");
    for(int i=3;i<6;i++){
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<6;i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    ptr = NULL;
}
