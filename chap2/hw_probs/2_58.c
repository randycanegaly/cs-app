#include <stdint.h>
#include <stdio.h>

//little_endian function, union version
int little_union(void) {
    //declare a union of two types
    //means that both of the types will occupy the same memory space
    //but a given instance of a union can only have one of the defined member types
    union {
        uint32_t i;//guaranteed to be 32 bits
        unsigned char c[4];//8 x 4 = 32 bits

    } bint;
    
    bint.i = 1;
    //c will occupy the same memory as i. it will be like an overlay of 4 1 byte chunks on top of i
    //check what the least significant element of c(least significant byte of i) looks like .....
    return bint.c[0] == 1;// will return 1 if the least significant byte is 1 -- little endian
}

int little(void) {
    uint32_t test = 1;
    uint8_t *bytepointer = (uint8_t*) &test;//get address (pointer) to test, cast it do a pointer to only one byte.
                                            //should point to the lower 8 bits
    //bytepointer points to the lower 8 bits of test
    return bytepointer[0] == 1;
}

int main(void) {
    int union_result = little_union();
    int result = little();

    if (union_result)
        printf("little_union says little-endian!\n");
    else
        printf("little_union says big-endian!\n");
    
    if (result)
        printf("little says little-endian!\n");
    else
        printf("little says big-endian!\n");
}

