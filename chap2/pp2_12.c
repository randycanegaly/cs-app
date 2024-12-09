#include <stdio.h>

int main(void) {
    int x = 0x87654321;
    int mask = 0xFF;
    
    printf("A: %x\n", x & mask);   

    int a = ~0;
    int b = 0xFF;

    int c = a ^ b;

    printf("B: %x\n", x ^ c);

    printf("C: %x\n", x | b);
}

