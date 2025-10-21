#include <stdio.h>


int int16 (int num) {
/* Compute bias to be either 0 (num >= 0) or 15 (2^k-1, k = 4) */
	int bias = (num >> 31) & 0xF;
	return (num + bias) >> 4;
}

int main(void) {
	int num1 = -1;
	int num2 = -33;
	int num3 = 33;

	printf("-1 / 16 = %d\n", int16(num1));
	printf("-33 / 16 = %d\n", int16(num2));
	printf("33 / 16 = %d\n", int16(num3));
}
