// Given: uint8_t reg = 0b10110110
// Extract bits 5:3 (3 bits starting at position 3)
// Print the extracted value
// Explain in a comment what this extracted value represents
// Then insert a new 3-bit value (0b101) into bits 5:3
// Print the final register value in binary
#include<stdio.h>
#include<stdint.h>
void print_binay(uint8_t);
int main(){
    uint8_t reg = 0b10110110;
    uint8_t mask = 0b00111000;
    uint8_t temp;
    temp = reg&mask;
    //temp = (reg & mask) >> 3; could have used this instead of the loop but gpt gave this idea
    for(int i=5;i>=3;i--){
        int c =(temp >> i)&1;
        printf("%d",c);
    }
    printf("\n");
    reg |= ((1 << 5)|(1 << 3));
    reg &= ~(1 << 4);
    //reg = (reg & ~mask) | (0b101 << 3); this is more efficient way of insertion and reusable 
    //but i didn't get that idea in the beginning gpt only gave.
    //Extract → (reg & mask) >> shift
    //Insert  → (reg & ~mask) | (value << shift)
    //best logics
    print_binay(reg);
}
void print_binay(uint8_t a){
    for(int i=7;i>=0;i--){
        printf("%d",((a>>i)&1));
    }
    printf("\n");
}