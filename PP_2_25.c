#include<stdio.h>

float sum_elements(float a[], unsigned length);

void main(void) {
	float a[] = {1.04, 5.66, 11.23};
	int len = 0;
	printf("result: %f\n", sum_elements(a, len));
}


float sum_elements(float a[], unsigned length) {
	int i;
	float result = 0;

	/*
	 *i is an int, signed
	 *length is unsigned
	 *in 'i <= length - 1', i gets cast to unsigned, length is already unsigned
	 *when i = 0, and i is then cast to unsigned
	 *0 is passed in for length
	 *so length -1 is 0 - 1, but that is done as all unsigned numbers (because of the implicit casting.
	 *In binary, that is (this is 32 bit for some reason, is float 32 bit``??)
	 *00000000000000000000000000000000 - 00000000000000000000000000000001 =
	 *unsigned can't go less than zero, so it wraps around = 
	 *11111111111111111111111111111111, which, unsigned is FFFF FFFF hex which equals UMax
	 *the test in the for loop becomes i <= UMax, which is always true
	 *i keeps incrementing, not stopped, test is always true
	 *eventually a[i] is accessing 'illegal' memory and an error occures
	 */

	for (i = 0; i <= length - 1; i++) 
		result += a[i];
	return result;
}

