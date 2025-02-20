#include <stdio.h>

typedef unsigned char *byte_pointer;//defines a new type byte_pointer, a pointer to an unsigned char

void show_bytes(byte_pointer start, size_t len) {
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);//hexadecimal representation, 2 digits
  printf("\n");
}

void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void));
}

/*Homework problem 2.57 from here
 * with them called in main below ...*/

void show_short(short x) {
  show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
  show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {
  show_bytes((byte_pointer) &x, sizeof(double));
}
/*to here*/

void test_show_bytes(int val) {
  int ival = val;
  float fval = (float) val;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}

int main(void) {
  short sx = -12345;
  unsigned short usx = sx;
  int x = sx;
  unsigned ux = usx;
  long lx = sx;
  double dx = sx;

  printf("sx = %d:\t", sx);
  show_bytes((byte_pointer) &sx, sizeof(short));
  printf("usx = %u:\t", usx);
  show_bytes((byte_pointer) &usx, sizeof(unsigned short));
  printf("x = %d:\t", x);
  show_bytes((byte_pointer) &x, sizeof(int));
  printf("ux = %u:\t", ux);
  show_bytes((byte_pointer) &ux, sizeof(unsigned));
  printf("short sx = %hd:\t", sx);
  show_bytes((byte_pointer) &sx, sizeof(short));
  printf("long lx = %ld:\t", lx);
  show_bytes((byte_pointer) &lx, sizeof(long));
  printf("double dx = %f:\t", dx);
  show_bytes((byte_pointer) &dx, sizeof(double));
}
