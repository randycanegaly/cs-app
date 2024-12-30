#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y) {
   if ((x + y) < x)
    return 0;
  else
    return 1;
}

int main(int argc, char *argv[]) {
  printf("UMAX: %u\n", UINT_MAX);

  if (argc != 3)
    printf("Usage: <program name> x y\n");
  else {
    int result = uadd_ok(atoi(argv[1]), atoi(argv[2]));
    printf("result is: %d\n", result);
  }
}
