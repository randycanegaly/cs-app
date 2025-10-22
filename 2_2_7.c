#include <stdio.h>


void main(void) {
	int x = 53191;
	short sx = (short) x;
	int y = sx;

	printf("x: %d, sx: %d, y: %d", x, sx, y);
}
