// Simulate a GPIO register (8-bit)
// Define these as bit positions using #define:
//   PIN0 0
//   PIN1 1
//   PIN2 2
//   PIN3 3
// Write functions:
//   pin_set(reg, pin)    — sets the pin
//   pin_clear(reg, pin)  — clears the pin
//   pin_toggle(reg, pin) — toggles the pin
//   pin_read(reg, pin)   — returns 1 or 0
// Test all 4 functions in main
#include<stdio.h>
#include<stdint.h>
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
void pin_set(uint8_t*,int);
void pin_clear(uint8_t*,int);
void pin_toggle(uint8_t*,int);
int pin_read(uint8_t*,int);
void print_binary(uint8_t);
int main(){
    uint8_t reg = 0b00000010;
    pin_set(&reg,PIN0);
    pin_clear(&reg,PIN1);
    pin_toggle(&reg,PIN2);
    pin_read(&reg,PIN3);
}
void print_binary(uint8_t a){
    for(int i=7;i>=0;i--){
        printf("%d",((a >>i)&1));
    }
    printf("\n");
}
void pin_set(uint8_t *b,int c){
    *b |= (1 << c);
    print_binary(*b);
}
void pin_clear(uint8_t *b,int c){
    *b &= ~(1 << c);
    print_binary(*b);
}
void pin_toggle(uint8_t *b,int c){
    *b ^= (1 << c);
    print_binary(*b);
}
int pin_read(uint8_t *b,int c){
    if(*b & (1 << c)){
        printf("bit %d is 1",c);
        return 1;
    }else{
        printf("bit %d is 0",c);
        return 0;
    }
}
