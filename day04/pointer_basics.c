// Declare an integer variable
// Declare a pointer to that variable
// Print the value using the variable
// Print the value using the pointer
// Print the address of the variable
// Print the address stored in the pointer
// Modify the value using the pointer
// Print the new value
#include<stdio.h>
int main(){
    int a=10,*p;
    p = &a;
    printf("a = %d \n",a);
    printf("a using pointer = %d \n",*p);
    printf("The address of the variable = %p \n",&a);
    printf("The address stored in the pointer = %p \n",p);
    *p = 143;
    printf("The updated value of the variable is %d \n",a);
}