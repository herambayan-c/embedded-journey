// Start with value: unsigned char reg = 0b10100010
// Perform and print result after each operation:
// 1. Set bit 0
// 2. Clear bit 5
// 3. Toggle bit 3
// 4. Check if bit 7 is set — print "Set" or "Clear"
// Print binary representation after each operation
// Write a function print_binary() that prints any byte in binary
#include<stdio.h>
void print_binary(unsigned char);
int main(){
    unsigned char reg = 0b10100010;
    reg |= (1 << 0);
    printf("%d \n",reg);
    reg &= ~(1 << 5);
    printf("%d \n",reg);
    reg ^= (1 << 3);
    printf("%d \n",reg);
    if((reg & (1 << 7))){
        printf("Set \n");
    }else{
        printf("Clear \n");
    }
    print_binary(reg);
}
void print_binary(unsigned char a){
    for(int i=7;i>=0;i--){
        printf("%d",((a>>i)&1));
    }
    printf("\n");
}