// Define a structure called Device with:
//   - device_name (string)
//   - register_address (unsigned int)
//   - data (unsigned char)
// Create a Device variable
// Create a POINTER to that Device
// Access and print all members using -> operator
// Modify a member using the pointer
// Print updated value
#include<stdio.h>
int main(){
    struct Device
    {
        char device_name[30];
        unsigned int register_address;
        unsigned char data;
    };
    struct Device d1 = {"Alphabet",566,'a'};
    struct Device *ptr = &d1;
    printf("The Device data is \n");
    printf("%s %u %c \n",ptr->device_name,ptr->register_address,ptr->data);
    ptr->register_address = 999;
    printf(" the updated value is %d \n",ptr->register_address);
}
