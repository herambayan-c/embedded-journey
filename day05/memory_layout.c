// Declare these variables: char, int, float, double
// Print the size of each using sizeof
// Print the address of each
// Observe and note: how far apart are the addresses?
// Add a comment explaining what you observed
#include<stdio.h>
int main(){
    char a;
    int b;
    float c;
    double d;
    printf("The size of char is %d  and address is %u \n",sizeof(a),&a);
    printf("The size of int is %d and address is %u \n",sizeof(b),&b);
    printf("The size of float is %d and address is %u \n",sizeof(c),&c);
    printf("The size of double is %d and address is %u \n",sizeof(d),&d);
}
/*
 * OBSERVATION: Memory Layout of Variables on Stack
 *
 * Addresses observed:
 * char   a -> 6291007  (size: 1 byte)
 * int    b -> 6291000  (size: 4 bytes)
 * float  c -> 6290996  (size: 4 bytes)
 * double d -> 6290984  (size: 8 bytes)
 *
 * OBSERVATION 1: Addresses decrease
 * Variables are stored on the STACK.
 * Stack grows DOWNWARD in memory.
 * So each new variable gets a lower address than the previous one.
 *
 * OBSERVATION 2: Memory Alignment
 * The CPU prefers to read data from addresses that are
 * multiples of the data type's size. This is called ALIGNMENT.
 * - char  needs address divisible by 1 (any address works)
 * - int   needs address divisible by 4
 * - float needs address divisible by 4
 * - double needs address divisible by 8
 *
 * OBSERVATION 3: Padding
 * Gap between float(6290996) and double(6290984) is 12 bytes.
 * But double is only 8 bytes.
 * If compiler placed double directly after float:
 *   6290996 - 8 = 6290988
 *   6290988 / 8 = 786373.5 -> NOT divisible by 8, misaligned!
 * So compiler skipped 4 bytes of padding and placed double at:
 *   6290984 / 8 = 786373 -> perfectly divisible, aligned!
 * Those 4 skipped bytes are WASTED memory (padding).
 *
 * WHY THIS MATTERS IN EMBEDDED:
 * Microcontrollers have very limited RAM (sometimes just 2KB).
 * Poor variable ordering wastes memory through padding.
 * Best practice: declare larger variables first, smaller last.
 * Example: declare double, int, float, char (in that order)
 * This minimizes padding and saves RAM.
 */