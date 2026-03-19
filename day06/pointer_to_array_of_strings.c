// Declare an array of 3 strings (use char array)
// Store: "UART", "I2C", "SPI"
// Use a pointer to traverse and print each string
// Print the address of each string
#include<stdio.h>
int main(){
    char uart[5] = "UART";
    char i2c[4] = "I2C";
    char spi[4] = "SPI";
    char *ary[] ={uart,i2c,spi};
    char **ptr = ary;
    // printf("%s",*ptr);
    for(int i =0;i<3;i++){
        printf("The string is %s \n",*ptr);
        printf("The address is %p \n",ptr);
        ptr++;
    }
}