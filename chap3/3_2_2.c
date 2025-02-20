#include <stdio.h>

long mult2(long, long);

int main() {
    long d;
    mult2(2, 3);
    printf("2 * 3 --> %ld\n", d);
    return 0;
}

long mult2(long a, long b) {
    long s = a * b;
    return s;
}
