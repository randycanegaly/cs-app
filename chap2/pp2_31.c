#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int tadd_ok(int x, int y);

int main(int argc, char *argv[]) {
    printf("TMin: %d, TMax: %d\n", INT_MIN, INT_MAX);
    if (argc != 3) {
        printf("Usage: x and y command line arguments needed\n");
        exit(1);
    }

    printf("x: %s\n", argv[1]);
    printf("y: %s\n", argv[2]);

    printf("x as int: %d\n", atoi(argv[1]));
    printf("y as int: %d\n", atoi(argv[2]));

    int result = tadd_ok(atoi(argv[1]), atoi(argv[2]));

    if (result)
        printf("Can add.\n");
    else
        printf("Can't add.\n");

}


int tadd_ok(int x, int y) {
    int n_over = 1;

    if (x >= INT_MIN && y >= INT_MIN && x <= INT_MAX && y <= INT_MAX) {
        int sum = x + y;
        printf("sum is: %d\n", sum);
        if ((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0))
            n_over = 0;
    }
    return n_over;
}
