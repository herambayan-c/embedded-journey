// Declare an integer variable
// Declare a pointer to that variable
// Declare a pointer to that pointer
// Print the value using all three: variable, *pointer, **double_pointer
// Print addresses at all three levels
// Modify the value using the double pointer
// Print the updated value
#include<stdio.h>
int main(){
    int a = 143;
    int *ptr = &a;
    int **double_ptr = &ptr;
    printf("a-directly = %d \n",a);
    printf("address is %p \n",&a);
    printf("a-form ptr = %d \n",*ptr);
    printf("address is %p \n",ptr);
    printf("a-from double_ptr = %d \n",**double_ptr);
    printf("address is %p \n",double_ptr);
    **double_ptr = 123;
    printf("updated a is %d",a);
}