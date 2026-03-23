// // Create a status register using bit fields concept:
// // Bit 0 = SENSOR_READY
// // Bit 1 = DATA_VALID  
// // Bit 2 = ERROR_FLAG
// // Bit 3 = OVERFLOW
// // Use #define for each bit position
// // Write a program that:
// //   - Sets SENSOR_READY and DATA_VALID
// //   - Checks ERROR_FLAG — print status
// //   - Sets ERROR_FLAG
// //   - Clears DATA_VALID
// //   - Prints final status of all 4 flags
#include<stdio.h>
#include<stdint.h>
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
int main(){
    uint8_t reg = 0b00000000;
    reg |= (1 << BIT0);
    reg |= (1 << BIT1);
    if(reg & (1 << BIT2)){
        printf("Error \n");
    }else{
        printf("No Error \n");
    }
    reg |= (1 << BIT2);
    reg &= ~(1 << BIT1);
    for(int i=7;i>=0;i--){
        printf("%d",((reg >> i)&1));
    }
}
// #include<stdio.h>
// struct status{
//     unsigned int SENSOR_READY : 1;
//     unsigned int DATA_VALID : 1;
//     unsigned  int ERR0R_FLAG : 1;
//     unsigned int OVERFLOW : 1;
// }s;
// #define PIN0 0 
// #define PIN1 1
// #define PIN2 2
// #define PIN3 3
// int main(){
//     s.SENSOR_READY = 1;
//     s.DATA_VALID = 1;
//     if(s.ERR0R_FLAG == 1){
//         printf("Error is there \n");
//     }else{
//         printf("No error \n");
//     }
//     s.ERR0R_FLAG = 1;
//     s.OVERFLOW = 0;
//     printf("%d%d%d%d",s.OVERFLOW,s.ERR0R_FLAG,s.DATA_VALID,s.SENSOR_READY);
// }