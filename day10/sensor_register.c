// Simulate a real sensor status register (8-bit):
// Bit 7   = BUSY
// Bit 6   = READY  
// Bits 5:4 = MODE (2 bits: 00=sleep, 01=normal, 10=turbo, 11=error)
// Bit 3   = OVERFLOW
// Bit 2   = DATA_READY
// Bits 1:0 = CHANNEL (2 bits: which channel 0-3)
//
// Write a program that:
// Sets MODE to "turbo" (10)
// Sets CHANNEL to 2 (10)
// Sets DATA_READY
// Reads and prints status of every field
// Prints full register in binary
#include<stdio.h>
#include<stdint.h>
int main(){
    uint8_t reg = 0b00000000;
    uint8_t mask1 = 0b01100000;
    uint8_t mask2 = 0b00000011;
    reg = (reg & ~mask1) | (0b10 << 4);
    reg = (reg & ~mask2) | (0b10 << 0);
    reg |= (1 << 2);
    if((reg & mask2) == 0){
        printf("Channel 0\n");
    }else if ((reg & mask2) == 1)
    {
        printf("Channel 1 \n");
    }else if ((reg & mask2) == 2)
    {
        printf("Channel 2 \n");
    }else if ((reg & mask2) == 3)
    {
        printf("Channel 3\n");
    }
    if(reg & (1 << 2)){
        printf("Data Ready \n");
    }else{
        printf("Not Ready \n");
    }
    if(reg & (1 << 3)){
        printf("Overflowing \n");
    }else{
        printf("No Overflow \n");
    }
    if(((reg & mask1) >> 4) == 0){
        printf("Sleep \n");
    }else if (((reg & mask1) >> 4) == 1)
    {
        printf("Normal \n");
    }else if (((reg & mask1) >> 4) == 2)
    {
        printf("Turbo \n");
    }else if (((reg & mask1) >> 4) == 3)
    {
        printf("Error \n");
    }
    if(reg & (1 << 6)){
        printf("Ready \n");
    }else{
        printf("Not Ready \n");
    }
    if(reg & (1 << 7)){
        printf("Busy \n");
    }else{
        printf("Not Busy\n");
    }
}