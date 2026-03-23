// Define all 4 macros: SET_BIT, CLEAR_BIT, TOGGLE_BIT, READ_BIT
// Start with reg = 0b11001010
// Using ONLY macros (no direct |= &= ^=):
// Set bit 0
// Clear bit 6
// Toggle bit 3
// Read bit 7 and print "High" or "Low"
// Print binary after each operation
#include<stdio.h>
#include<stdint.h>
#define SET_BIT(reg,n)      ((reg) |= (1<<(n)))
#define CLEAR_BIT(reg,n)    ((reg) &= ~(1<<(n)))
#define TOGGLE_BIT(reg,n)   ((reg) ^= (1<<(n)))
#define READ_BIT(reg,n)     (((reg) >> (n))&1)
void print_binary(uint8_t);
int main(){
    uint8_t reg = 0b11001010;
    SET_BIT(reg,0);
    print_binary(reg);
    CLEAR_BIT(reg,6);
    print_binary(reg);
    TOGGLE_BIT(reg,3);
    print_binary(reg);
    int a = READ_BIT(reg,7);
    if(a == 1){
        printf("High \n");
    }else{
        printf("Low \n");
    }
}
void print_binary(uint8_t b){
    for(int i=7;i>=0;i--){
        printf("%d",((b >> i) & 1));
    }
    printf("\n");
}