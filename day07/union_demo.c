// Define a union called RawData with:
//   - unsigned int raw (4 bytes)
//   - unsigned char bytes[4]
// Store a value in raw: 0xDEADBEEF
// Print raw as hex
// Print each byte separately using bytes[]
// Add a comment explaining what you observe about byte order
#include<stdio.h>
int main(){
    union RawData
    {
        unsigned int raw;
        unsigned char bytes[4];
    };
    union RawData a = {0XDEADBEEF};
    printf("The raw as hex %x \n",a.raw);
    printf("Printing byte by byte %x %x %x %x ",a.bytes[0],a.bytes[1],a.bytes[2],a.bytes[3]);
    /*The output printed with byte by byte is reversed because my system us little endian in little endian
    the lest significant bit is stored in the least address so here least siggnificant bit is 0xEF so it is 
    printed in the beginning as a[0] and the whole code is reversed and THIS IS ONE OF THE MOST IMPORTANT CONCEPT 
    IN PROTOCOLS AS THE ORDER OF DATA IS CRUCIAL and this little endian is used in mordern systems even in stm32
    and arm cortex also so keep this in mind*/
    
}